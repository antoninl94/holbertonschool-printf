#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - Print character depending of the format selected
 * @format: format selected to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
        va_list args;
        /*initialisation of a type type_format array*/
        type_format arr[] = {
                {"c", print_c},
                {"s", print_s},
                {"d", print_d_i},
                {"i", print_d_i},
                {"%", print_percent},
                {NULL, NULL}
        };
        int i = 0, j = 0, count = 0;

        va_start(args, format);

        while (format && format[i])
        {
                if (format[i] == '%' && format[i + 1] != '\0')  // Si on rencontre un '%'
                {

            int found = 0;
            for (j = 0; arr[j].fmt != NULL; j++)
            {
                if (format[i + 1] == arr[j].fmt[0]) // Si le format est supporté
                {
                    count += arr[j].f(args);  // Appel de la fonction correspondante
                    found = 1;
                    break;
                }
            }
            if (!found)  // Si le format n'est pas trouvé
            {
                _putchar('%');  // Affiche '%' et le caractère suivant
                _putchar(format[i + 1]);
                count += 2;
            }
            i++;  // Passer au caractère suivant
        }
        else
        {
            _putchar(format[i]);  // Imprimer le caractère normal
            count++;
        }
        i++;
    }

    va_end(args);
    return (count);
}
