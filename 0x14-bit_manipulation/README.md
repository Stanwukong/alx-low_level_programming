# 0x14. C - Bit manipulation

## Learning objectives:
- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

# Tasks:
- **0. 0**
	- [0-binary_to_uint.c](./0-binary_to_uint.c): C program that converts a binary number to an `unsigned int`
		- Prototype: `unsigned int binary_to_uint(const char *b);`
		- where `b` is pointing to a string of `0` and `1` chars
		- Return: the converted number, or 0 if
			- there is one or more chars in the string `b` that is not `0` or `1` 
			- `b` is `NULL`

- **1. 1** 
	- [1-print_binary.c](./1-print_binary.c): C program that prints the binary representation of a number
		- Prototype: `void print_binary(unsigned long int n);`
		- arrays are not allowed
		- `malloc` is not allowed
		- `%` or `/` operators are not allowed

- **2. 10**
	- [2-get_bit.c](./2-get_bit.c): C program that returns the value of a bit at a given index
		- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
		- where `index` is the index, starting from `0` of the bit you want to get
		- Return: the value of the bit at index `index` or `-1` if an error occurred

- **3. 11**
	- [3-set_bit.c](./3-set_bit.c): C program that sets the value of a bit to `1` at a given index
		- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
		- where `index` is the index, starting from `0` of the bit you want to set
		- Return: `1` if it worked, or `-1` if an error occurred

- **4. 100**
	- [4-clear_bit.c](./4-clear_bit.c): C program that sets the value of a bit to `0` at a given index
		- Prototype: `int clear_bit(unsigned int *n, unsigned int index);`
		- where `index` is the index, starting from `0` of the bit you want to set
		- Return: `1` if it worked, or `-1` if an error occurred

- **5. 101**
	- [5-flip_bits.c](./5-flip_bits.c): C program that returns the number of bits you would need to flip to get from one number to another.
		- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
		- `%` or `/` operators are not allowed

- **6. Endianness**
	- [100-get_endianness.c](./100-get_endianness.c): C program that checks the endianness
		- Prototype: `int get_endianness(void);`
		- Return: `0` if big endian, `1` if little endian

- **7. Crackme3**
	- [101-password](./101-password): Password to task 7
