#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e,count=0,total=0;

    do{
    printf("Entrez un entier positif: \n");
    scanf("%d",&e);
    if(e > -1){
    count++;
    total += e;
    }
    }while(e!=-1);


    printf("La moyenne de ces %d entiers %f\n",count,(float)total/count);

    return 0;
}

