mkdir -p temporary_files
if [ $# -eq 1 ]
then
    if [ -e "function_tests/test_$1.c" ]
    then
        { cc -Wall -Wextra -Werror -fsanitize=address rendu/$1.c function_tests/test_$1.c -o temporary_files/output_generator && ./temporary_files/output_generator > temporary_files/actual_output_$1.txt
        } 2>/dev/null
    elif [ -e "program_tests/test_$1.sh" ]
    then
        { cc -Wall -Wextra -Werror -fsanitize=address rendu/$1.c -o temporary_files/output_generator && sh program_tests/test_$1.sh > temporary_files/actual_output_$1.txt
        } 2>/dev/null
    fi
    if [ -e "temporary_files/actual_output_$1.txt" ]
    then
        diff expected_outputs/expected_output_$1.txt temporary_files/actual_output_$1.txt > temporary_files/diff_$1.diff
        if [ -s "temporary_files/diff_$1.diff" ]
        then
            echo "KO :("
        else
            echo "OK :)"
        fi
    else
        echo "KO :("
    fi
    rm -f temporary_files/*
fi
