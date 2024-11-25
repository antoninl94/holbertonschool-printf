#include "main.h"

int print_c(char c)
{
	write(1, &c, 1);
	return(1);
}
int main(void)
{
    // Exemple d'utilisation de print_c
    print_c('A'); // Affiche 'A'
    print_c('\n'); // Affiche une nouvelle ligne
    return (0);
}
