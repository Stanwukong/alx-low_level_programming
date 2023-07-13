# C- Hello, World

## Learning projects for this project:

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program

## Tasks
- **_0. Preprocessor_**
	- [0-preprocessor](./0-preprocessor): Bash script that runs a C file through the preprocessor and save the result into another file.
		- The C file name will be saved in the variable `$CFILE`
		- The output should be saved in the `c`

- **_1. Compiler_** 
	- [1-compiler](./1-compiler): Bash script that compiles a C file but does not link.
		- The C file name will be saved in the variable `$CFILE`
		- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
			- Example: if the C file is `main.c`, the output file should be `main.o`

- **_2. Assembler_**
	- [2-assembler](./2-assembler): Bash script that generates the assembly code of a C code and save it in an output file.
		- The C file name will be saved in the variable `$CFILE`
		- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
			- Example: if the C file is `main.c`, the output file should be `main.s`

- **_3. Name_**
	- [3-name](./3-name): Bash script that compiles a C file and creates an executable named `cisfun`.
		- The C file name will be saved in the variable `$CFILE`

- **_4. Hello, puts_**
	- [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
		- Use the function `puts`
		- You are not allowed to use `printf`
		- Your program should end with the value `0`

- **_5. Hello, printf_**
	- [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
		- Use the function `printf`
		- You are not allowed to use the function `puts`
		- Your program should return `0`
		- Your program should compile without warning when using the `-Wall` `gcc` option

- **_6. Size is not grandeur, and territory does not make a nation_**
	- [6-size.c](./6-size.c): C program that prints the size of various types on the computer it is compiled and run on.

- **_7. Intel_**
	- [100-intel](./100-intel): Bash script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- **_8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity_**
	- [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
