#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,D,P,S;
    const float PI = 3.14;
    printf("Veuillez entrer la valeur du rayon de cercle :");
    scanf("%f",&r);
    P = 2 * PI * r;
    D = P/PI ;
    S = r*r*PI;
    printf("Un cercle de rayon %f a pour diametre %f, pour primetre %f et pour surface %f.",r,P,D,S);

    return 0;
}

