#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_c(va_list args) // print 1 caract�re
{
	int c = va_arg(args, int);

	if (c != 0)
	{
		write(1, &c, 1);
		return(1);
	}
}

int print_s(va_list args) // print string
{
	char *str = va_arg(args, char *);
	int s = 0;

	if (str[s] == 0)
	{
		write(1, "(null)", 6);
		return (0);
	}
	while (str[s] != '\0')
	{
		write(1, &str[s], 1);
		s++;
	}
	return (s);
}
int test_print_s(char *str, ...) {
    va_list args;
    int result;

    // Initialiser la liste d'arguments avec un seul argument : la chaîne
    va_start(args, str);
    result = print_s(args);
    va_end(args);

    return result;
}
int print_pourcent(va_list args)
{
	int p = va_arg(args, int);

	if (p == 0)
	{
		return (0);
	}
	else
	{
		write(1, &p, 1);
		return (1);
	}
}
/**
 * pirnt_d - Fonction pour afficher un entier via des arguments variadiques.
 * @args: Liste des arguments variadiques contenant l'entier à afficher.
 *
 * Retourne: Le nombre total de caractères imprimés.
 */
int pirnt_d(va_list args)
{
	int d = va_arg(args, int);
	int i = 0;
	char *str;
	int j = 0;

	if (d == 0)
	{
		char c = '0';
		write(1, &c, 1); /*print 1 caractere ascii*/
		return (1);
	}
	if (d < 0)/*coditions negatives*/
	{
		char m = '-';
		write(1, &m, 1); 
		d = -d;
		i++;  /*Incrémenter le compteur pour le signe */
	}
	str = malloc(12 * sizeof(char));
	  if (str == NULL) {
        return (0); /* echec de l'allocation mémoire*/
	}
	while (d > 0)
	{
		str[j++] = (d % 10) + '0';/* modulo convertiseur caractere*/
		d /= 10;
	}
	for (int k = j - 1; k >= 0; k--){
        write(1, &str[k], 1); /*Affiche chaque caractère*/
        i++; /*�Incrémente le compteur de caractères affich */
    	}
	free(str);

	return (i);
}
int pirnt_d_test(int number)
{
    va_list args;
    int result;

    result = pirnt_d(args); // Appelle pirnt_d
    va_end(args);           // Termine la gestion des arguments variadiques

    return result;
}
int main(void)
{
    int printed_chars;

    /* Test 1 : Nombre positif */
    printf("Test 1 : Nombre positif\n");
    printed_chars = pirnt_d_test(12345);
    printf("\nNombre de caractères imprimés : %d\n", printed_chars);

    /* Test 2 : Nombre négatif */
    printf("\nTest 2 : Nombre négatif\n");
    printed_chars = pirnt_d_test(-9876);
    printf("\nNombre de caractères imprimés : %d\n", printed_chars);

    /* Test 3 : Zéro */
    printf("\nTest 3 : Nombre zéro\n");
    printed_chars = pirnt_d_test(0);
    printf("\nNombre de caractères imprimés : %d\n", printed_chars);

    /* Test 4 : Plus grand entier possible */
    printf("\nTest 4 : Plus grand entier possible\n");
    printed_chars = pirnt_d_test(INT_MAX);
    printf("\nNombre de caractères imprimés : %d\n", printed_chars);

    /* Test 5 : Plus petit entier possible */
    printf("\nTest 5 : Plus petit entier possible\n");
    printed_chars = pirnt_d_test(INT_MIN);
    printf("\nNombre de caractères imprimés : %d\n", printed_chars);

    return 0;
}
