# HolbertonSchool _printf - Print formated characters

## Requirements :

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- No more than 5 functions per file
- The use of global variables is forbidden
- All the prototypes should be included in the header file : main.h

## Format :

```c
#include "main.h"
int _printf(const char *format, argument-list);
```

## Description :

The function **_printf** print single or multiple characters depending of the format specifier in the standard output flow stdout.
Specifier start by "%" sign, and determines the output format of an argument list according of the specifiers list.

The format list is read from left to right. When the first specifier is found, the first argument value after the ***format*** is converted and printed as the format specifier describe it. The second format specifier convert and print the second argument after ***format*** and so on until the end of the format specifier list. If there is more arguments than specifier, the excess argments are evaluate and ignored.

### Compilation command :

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format _printf.c main.c format_functions.c main.h fonctions_annexes.c

### Specifiers :

**%c** : Print the character specified in the argument list.

**%s** : Print the string specified in the argument list.

**%%** : Print the **%** symbol.

**%d and %i** : Print an integer, positive or negative.

### Return Value :

The _printf function return ne bytes number printed, -1 if format is NULL.

## Example of using _printf

### Using _printf :
```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    return (0);
}
```
### Stdout :
```
root@Antonin-Gaming:~/holbertonschool-printf# gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format _printf.c main.c format_functions.c main.h fonctions_annexes.c
root@Antonin-Gaming:~/holbertonschool-printf# ./a.out
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Character:[H]
String:[I am a string !]
Percent:[%]
Len:[12]
```
## Flowchart

![flow_chart_printf](https://github.com/user-attachments/assets/a9fb6b52-b7dd-4dc6-8936-102624d26e5a)

## Authors :

Writed by : Tom Makni and Antonin Lebre
