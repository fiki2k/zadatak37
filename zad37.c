//Program ce stvorit, pristupit i inicijalizirat pointer.

#include <stdio.h>

int main()
{
	//char variabla
    char ch;

    //char pointer
    char *pCh;

    /* Inicijaliziramo pointer varijablu s
     * adresom variable ch
     */
    pCh = &ch;

    //Pridruzujemo vrijednost varijabli ch
    ch = 'A';

    // vrijednost i adresa ch koristeci varijablu ch
    printf("Vrijednost ch: %c\n",ch);
    printf("Adresa od ch: %p\n",&ch);

    // vrijednost i adresa ch koristeci pointer varijable pCh
    printf("Vrijednost ch: %c\n",*pCh);
    printf("Adresa od ch: %p",pCh);

   return 0;
}
