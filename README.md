# Monty Project

## Overview
Monty is an interpreter for Monty ByteCode files. Monty 0.98 is a scripting language that uses a unique stack to manipulate data. This project implements various stack operations as defined in the Monty language specification.

## Project Structure
The project is organized into several files:

- `main.c`: Entry point of the Monty interpreter.
- `monty.h`: Header file containing data structures and function prototypes.
- `stack_functions.c`, `stack_functions2.c`: Implementation of stack operations (e.g., `push`, `pall`, `pint`).
- `bytecode_utils.c`: Utility functions for file parsing and error handling.
- `README.md`: This file, containing project overview, setup instructions, and usage guidelines.

## Compilation
To compile the Monty interpreter, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

## Usage
Run Monty with a Monty ByteCode file as an argument:

```bash
./monty bytecodes/file.m
```

### Supported Operations
- `push <int>`: Pushes an integer onto the stack.
- `pall`: Prints all values in the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element of the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`: Adds the top two elements of the stack.

### Error Handling
- Various error messages are provided for invalid operations, stack underflow, and other exceptional conditions as per the project specification.

## Requirements
- The program is designed to run on Ubuntu 20.04 LTS.
- All code files should follow the Betty style guidelines.
- Use of global variables is minimized as per project requirements.

## Additional Information
- This project is part of the ALX Software Engineering program.
- For detailed specifications and additional opcodes, refer to the project instructions and Monty language documentation.
