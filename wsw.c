#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
char tab[26] = {'a','b','c','d','e','f','g','h','i','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int i,mot ;
int main()
{
/*
*le programme affiche une chaine de caracteres de taille differente puis revoie la taille

*/ 
	printf("Entrez la longeur de la chaine que vous voulez : ");
	scanf("%d",&mot);
	for (i = 0; i <= mot; ++i)
{
	srand(time(NULL));
	i = rand();
	printf(tab[i]);
}	
	system("PAUSE");

	/* code */
	return 0; 
}
