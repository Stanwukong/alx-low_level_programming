# 0x0A. C - argc, argv

## Learning objectives for this project:
- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Tasks :page_with_curl:
- **0. It ain't what they call you, it's what you answer to**
	- [0-whatsmyname.c](./0-whatsmyname.c): C program that prints its name, followed by a new line.
		- If you rename the program, it will print the new name, without having to compile again
		- You should not remove the path before the name of the program

- **1. Silence is argument carried out by other means**
	- [1-args.c](./1-args.c): C program that prints the number of arguments passed into it, followed by a new line.
				  
- **2. The best argument against democracy is a five-minute conversation with the average voter**
	- [2-args.c](./2-args.c): C program that prints all the arguments it receives.
		- All arguments are printed, including the first one.
		- One argument per line.

- **3. Neither irony nor sarcasm is argument**
	- [3-mul.c](./3-mul.c): C program that multiplies two numbers.
		- Prints the result followed by a new line
		- Assume two numbers and result are stored as integers
		- Print `Error` and return 1 if program does not receive two arguments
