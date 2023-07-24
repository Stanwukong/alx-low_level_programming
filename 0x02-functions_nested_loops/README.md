# 0x02. C - Functions, nested loops

## Learning objectives for this project:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declarartion and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pendatic -Wextra -std=gnu89`	
- What are header files and how to use them with `#include`

## Tasks :page_with_curl:
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

- **_7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important_**
	- [7-print_last_digit.c](./7-print_last_digit.c): C program prints the last digit of a number.
		- Prototype: `int print_last_digit(int);`
		- Returns the value of the last digit

- **_8. I'm federal agent Jack Bauer, and today is the longest day of my life_**
	- [8-24_hours.c](./8-24_hours.c): C program that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
		- Prototype: `void jack_bauer(void);`
		- You can listen [this soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs) while coding :)

- **_9. Learn your times table_**
	- [9-times_table.c](./9-times_table.c): C program that prints the 9 times table, starting with 0.
		- Prototype: `void times_table(void);`

- **_10. a + b_**
	- [10-add.c](./10-add.c): C program that adds two integers and returns the result
				  - Prototype: `int add(int, int);`

- **_11. 98 Battery Street, the OG_**
	- [11-print_to_98.c](./11-print_to_98.c): C program that prints all natural numbers from `n` to `98`, followed by a new line.
		- Prototype: `void print_to_98(int n);`
		- Numbers must be separated by a comma, followed by a space
		- Numbers should be printed in order
		- The first printed number should be the number passed to your function.
		- The last printed number should 98
		- You are allowed to use the standard library

- **_12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself_**
	- [100-times_table.c](./100-times_table.c): C program that prints the `n` times table, starting with 0.
		- Prototype: `void print_times_table(int n);`
		- If `n` is greater than `15` or less than `0` the function should not print anything

- **_13. Nature made the natural numbers; All else is the work of women_**
	- [101-natural.c](./101-natural.c): C program that computes and prints the sum of all the multiples of `3` or `5`below `1024` (excluded), followed by a new line.
		- You are allowed to use the standard library

- **_14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A_**
	- [102-fibonacci.c](./102-fibonacci.c): C program that prints the first 50 Fibonnaci numbers, strting with `1`and `2`, followed by a new line.
		- The numbers must be separated by comma, followed by a space `, `
		- You are allowed to use the standard library

- **_15. Even Liber Abbaci_**
	- [103-fibonacci.c](./103-fibonacci.c): C program that prints the sum of even-valued terms less than 4,000,000 as in the Fibonnaci sequence, followed by a new line.

- **_16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+_**
	- [104-fibonacci.c](./104-fibonacci.c): C program that finds and prints the first 98 Fibonnaci numbers, starting with `1` and `2`, followed by a new line.
		- The numbers should be separated by comma, followed by a space `, `
		- You are allowed to use the standard library
		- You are not allowed to use any other library (You can’t use `GMP` etc…)
		- You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
		- You are not allowed to hard code any Fibonacci number (except for `1` and `2`)
