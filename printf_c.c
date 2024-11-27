#include "main.h"

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
int pirnt_d(va_list args)
{
	int d = va_arg(args, int);
	int i = 0;
	char *str;
	int j;

	/* alloue la memoire du char */
	str = malloc(d * sizeof(char));
	if (str == 0)
	{
		return (0);
	}
	if (d == 0)
	{
		write(1 '0', 1); /*print 1 caractere ascii*/
		return (1);
	}
	if (d < 0)/*coditions negatives*/
	{
		write(1, '-', 1); 
		d = -d;
		i++;  /*Incrémenter le compteur pour le signe */
	}

	j = 0;
	while (d > 0)
	{
		str[j] = (d % 10) + '0';/* modulo convertiseur caractere*/
		d /= 10;
		j++;
	}
	
	free(str);
}
/*
int main(void) {
    char *my_string = NULL;

    // Appeler test_print_s pour tester print_s
    printf("\nNombre de caractères imprimés : %d\n", test_print_s("%s", my_string));

    return 0;
}
