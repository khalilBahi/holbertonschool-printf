# holbertonschool-printf

Welcome to the holberton-printf repository! This project is part of the curriculum at Holberton School and focuses on creating a custom implementation of the _printf function in C. The goal is to replicate the standard functionality of _printf while exploring the intricacies of string formatting and output generation.

## Project Overview

This project aims to implement a custom _printf function capable of handling various format specifiers such as characters, strings, integers, percentages, and even a custom %r specifier for reversing strings.

### Features

- *Custom Format Specifiers*: Extends the traditional _printf with additional custom format specifiers.
- *String Reversal*: Introduces %r specifier for reversing strings, adding a unique touch to the standard functionality.

## Project Files

- main.h: Header file containing function prototypes.
- _printf.c: Main implementation of the printf function.
- fun.c: Additional helper functions.
- print_all.c: chose the right function
- ...

## Usage

To use the _printf function in your program, include the main.h header file and link it with the compiled printf files.

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %d", 1);
    return (0);
}