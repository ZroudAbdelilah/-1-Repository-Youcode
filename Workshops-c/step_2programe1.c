#include<stdio.h>

#define false 0 //Constante définition de false = 0
#define true !false //Constante true = !false donc true = 1

typedef int bool;
bool max(int a,int b)
{
        if (a>b)
       return true;
       else
       return false;
}

int main()
{
    int a,b;

     printf("Donnez une valeur :a\n");
     scanf("%d",&a);
     printf("Donnez une valeur :b\n");
     scanf("%d",&b);

     if (max(a,b) == 1){
      printf("True");
     }
     else {
      printf("False");
}
    return 0;
}

