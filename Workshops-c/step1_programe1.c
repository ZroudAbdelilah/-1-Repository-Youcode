#include <stdio.h>
#include <stdlib.h>

int main()
{


    char Nom[10] ;
    char Prenom[10] ;
    int Age ;
    char sexe[10] ;
    long tele ;
    printf("Entre votre Nom :\n");
    scanf("%s",&Nom);
    printf("Entre votre Prénom :\n");
    scanf("%s",&Prenom);
    printf("Entre votre Age :\n");
    scanf("%d",&Age);
    printf("Entre votre sexe :\n");
    scanf("%s",&sexe);
    printf("Entre votre tele :\n");
    scanf("%ld",&tele);
    return 0;
}
