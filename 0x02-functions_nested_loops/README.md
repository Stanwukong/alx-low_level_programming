# 0x02. C - Functions, nested loops

## Learning objectives for this project:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declarartion and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pendatic -Wextra -std=gnu89`	
- What are header files and how to use them with `#include`

## Tasks
- **_0. _putchar_**
	- [0-putchar.c](./0-putchar.c): C program that prints `_putchar`, followed bby a new line.
					- The program should return `0`

- **_1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game_**
	- [1-alphabet.c](./1-alphabet.c): C program that prints the alphabet in lowercase, followed by a new line
					  - Prototype: `coid print_alphabet(void);`
					  - You can only use _putchar twice in our code

- **_2. 10 x alphabet_**
	- [2-print_alphabet_x10.c](./2-print_alphabet_x10.c): C program that prints 10 times the alphabet, in lowercase, followed by a new line.
							      - Prototype: `void print_alphabet_x10(void);`
							      - You can only use `_putchar` twice in your code

- **_3. islower_**
	- [3-islower.c](./3-islower.c): C program that checks for lowercase character.
					- Prototype: `int _islower(int c);`
					- Returns `1` if `c` is lowercase
					- Returns `0` otherwise.

- **_4. isalpha_**
	- [4-isalpha.c](./4-isalpha.c): C program that checks for alphabetic character.
					- Prototype: `int _islpha(int c);`
					- Returns `1` if `c` is a letter, lowercase or uppercase
					- Returns `0` otherwise

- **_5. Sign_**
	- [5-sign.c](./5-sign.c): C program that prints the sign of number
				  - Prototype: `int print_sign(int n);`
				  - Returns `1` and prints `+` if `n` is greater than zero
				  - Returns `0` and prints `0` if `n` is zero
				  - Returns `-1` and prints `-` if `n` is less than zero

- **_6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you_**
	- [6-abs.c](./6-abs.c): C program that computes the absolute value of an integer
				- Prototype: `int _abs(int);`
