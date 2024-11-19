# fit-lab-12

Simple Calculator

This project is a simple calculator program implemented in C. The calculator supports basic arithmetic operations: addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`). 

It takes user input for two numbers and an operator, performs the selected operation, and displays the result.

Instructions for Running the Calculator

Prerequisites
A C compiler (e.g., `gcc`) installed on your system.
A command-line interface (CLI) such as Git Bash or Terminal.

Steps to Compile and Run
1. Clone the repository or download the source file (`calculator.c`) to your local system.
2. Open your CLI and navigate to the project folder:
   ```bash
   cd path/to/simple_calculator
   ```
3. Run the compiled program:
   ```bash
   ./calculator
   ```

4. Follow the on-screen prompts:
   - Enter an arithmetic operator (`+`, `-`, `*`, or `/`).
   - Enter two numbers to perform the operation.

5. View the result or any error messages (e.g., division by zero).


Git Workflow Summary

Below is a summary of the Git commands used to manage this project:

1. Initialize a Git repository:
   ```bash
   git init
   ```
   This creates an empty Git repository in the project folder.

2. Add files to the staging area:
   ```bash
   git add calculator.c
   ```
   Stages the `calculator.c` file for the next commit.

3. Commit changes:
   ```bash
   git commit -m "Initial commit: Add simple calculator implementation"
   ```
   Records the staged changes with a commit message.

4. View commit history:
   ```bash
   git log
   ```


Example 1: Addition
```bash
Enter an operation (+, -, *, /): +
Enter two numbers: 4 6
Result: 10.00
```

Example 2: Division
```bash
Enter an operation (+, -, *, /): /
Enter two numbers: 10.5 5.25
Result: 2.00
