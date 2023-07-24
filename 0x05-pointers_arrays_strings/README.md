# 0x05. C - Pointers, arrays and strings

## Learning objectives for this project:
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Tasks :page_with_curl:
- **_0. 98 Battery st._**
	- [0-reset_to_98.c](./0-reset_to_98.c): C program that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
		- Prototype: `void reset_to_98(int *n);`

- **_1. Don't swap horses in crossing a stream_**
	- [1-swap.c](./1-swap.c): C program that swaps the values of two integers.
		- Prototype: `void swap_int(int *a, int *b);`

- **_2. This report, by its very length, defends itself against the risk of being read_**
	- [2-strlen.c](./2-strlen.c): C program that returns the length of a string
		- Prototype: `int _strlen(char *s);`

- **_3. I do not fear computers. I fear the lack of them_**
	- [3-puts.c](./3-puts.c): C program that prints a string, followed by a new line, to `stdout`.
		- Prototype: `void _puts(char *str);`

- **_4. I can only go one way. I've not got a reverse gear_**
	- [4-print_rev.c](./4-print_rev.c): C program that prints a string in reverse, followed by anew line.

- **_5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes_**
	- [5-rev_string.c](./5-rev_string.c): C program that reverses a string.
		- Prototype: `void rev_string(char *s);`

- **_6. Half the lies they tell about me aren't true_**
	- [6-puts2.c](./6-puts2.c): C program that prints every other character of a string, starting with the first character, followed by a new line.
		- Prototype: `void puts2(char *str);`

- **_7. Winning is only half of it. Having fun is the other half_**
	- [7-puts_half.c](./7-puts_half.c): C program that prints half of a string, followed by a new line.
		- Prototype: `void puts_half(char *str);`
		- The function should print the second half of the string
		- If the numbers of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

- **_8. Arrays are not pointers_**
	- [8-print_array.c](./8-print_array.c): C program that prints `n` elements of an array of integers, followed by a new line.
		- Prototype: `void print_array(int *a, int n);`
		- Where `n` is the number of elements of the array to be printed
		- Numbers must be separated by comma, followed by a space
		- The numbers should be displayed in the same order as they are stored in te array
		- `printf` is allowed

- **_9. strcpy_**
	- [9-strcpy.c](./9-strcpy.c): C program that copies the string printed by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`
		- Prototype: `char *_strcpy(char *dest, char *src);`
		- Return value: the pointer to `dest`

- **_10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers_**
	- [100-atoi.c](./100-atoi.c): C program that converts a string to an integer
		- Prototype: `int _atoi(char *s);`
		- The number in the string can be preceded by an infinite number of characters
		- Need to take into account all the `-` and `+` signs  before the number
		- If there are no numbers in the string, the function must return `0`
		- Not allowed to use `long`
		- Not allowed to declare new variables of "type" array
		- Not allowed to hard-code special values
		- The gcc flag `-fsanitize=signed-integer-overflow` will be used to compile the code.

- **_11. Don't hate the hacker, hate the code_**
	- [101-keygen.c](./101-keygen.c): C program that generates random valid passwords for the program [101-crackme](https://github.com/alx-tools/0x04.c).
		- Not allowed to use standard library
		- `betty-style` test are not compulsory but `betty-doc` tests are
		- man `srand`, `rand`, `time`
		- `gdb` and `objdump` can help
