# Piscine Exam Practice

## Installation and setup
To install and set up, run the following script:
```bash
git clone https://github.com/egrfly/piscine-exam-practice
cd piscine-exam-practice
mkdir rendu
```

## Usage
Look in the `subjects` directory to find task descriptions, and create the expected files in the `rendu` directory. When you're ready to see if you've got a task right, run the following command from the root of the repository, replacing `<question name>` with the text immediately before the `.txt` extension in the subject in question:
```bash
sh run_tests.sh <question name>
```

## Notes
- Subjects for level 11 and above are available but currently no tests - see if you can add your own
- Tried my best to make this bug-free but no guarantees. Feel free to create a GitHub issue if you find one