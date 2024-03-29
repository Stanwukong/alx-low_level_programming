# 0x12. C - Singly linked lists

## Learning Objectives for this project:
- When and why using linked lists vs arrays
- How to build and use linked lists

## Tasks :page_with_curl:
- **0. Print list**
	- [0-print_list.c](./0-print_list.c): C function that prints all the elements of a `list_t` list
		- Prototype: `size_t print_list(const list_t *h);`
		- Return: the number of nodes
		- If `str` is `NULL`, print `[0] (nil)`
		- `printf` is allowed
	
- **1. List length**
	- [1-list_len.c](./1-list_len.c): C function that returns the number of elements in a linked `list_t` list.
		- Prototype: `size_t list_len(const list_t *h);`

- **2. Add node**
	- [2-add_node.c](./2-add_node.c): C function that adds a new node at the beginning of a `list_t` list.
		- Prototype: `list_t *add_node(list_t **head, const char *str);`
		- Return: the address of the new element, or `NULL` if it failed
		- `str` needs to be duplicated
		- `strdup` is allowed

- **3. Add node at the end**
	- [3-add_node_end.c](./3-add_node_end.c): C function that adds a new node at the end of a `list_t` list.
		- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
		- Return: the address of the new element, or `NULL` if it failed
		- `str` needs to be duplicated
		- `strdup` is allowed

- **4. Free list**
	- [4-free_list.c](./4-free_list.c): C function that frees a `list_t` list.
		- Prototype: `void free_list(list_t *head);`

- **5. The Hare and the Tortoise**
	- [100-first.c](./100-first.c): C function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed
		- `printf` is allowed

- **6. Real programmers can write assembly code in any language**
	- [101-hello_holberton.asm](./101-hello_holberton.asm): 64-bit assembly program that prints `Hello, Holberton`, followed by a new line.
		- `printf` is allowed
		- Interrupts are not allowed
