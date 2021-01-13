#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Donne une valeur : a\n");
    scanf("%d",&a);
    printf("Donne une valeur : b\n");
    scanf("%d",&b);
    printf("%d+%d= %d\n",a,b,a+b);
    printf("%d-%d= %d\n",a,b,a-b);
    printf("%d*%d= %d\n",a,b,a*b);
    printf("%d/%d= %d\n",a,b,a/b);
    printf("%d%%%d= %d\n",a,b,a%b);
    return 0;
}

