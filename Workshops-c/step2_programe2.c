#include<stdio.h>

void data(int a,int b)
{
 printf("================\n");
 printf("A est %d\n",a);
 printf("En octet est : %o",a);
 printf("En hexadisimal: %x",a);
 printf("================\n");
 printf("A est %d\n",b);
 printf("En octet est : %o",b);
 printf("En hexadisimal: %x",b);
}
void Caculatrice (int a, int b, char operation){
 if (operation == '+'){
 printf("a+b = %d",a+b);
 }
 else if  (operation== '-'){
 printf("a-b = %d",a-b);
 }
 else if (operation == '*'){
 printf("a*b = %d",a*b);
 }
 else if (operation == '/'){
 if(b !=0)
 printf("a/b = %d",a/b);
 else
 printf("Errore");

 }
 else if (operation=='%'){
 printf("a%%b = %d",a%b);
 }

}
int main(){
int a,b;
char operation;
printf("Donnez une valeur :a \n");
scanf("%d",&a);
printf("Donnez une valeur :b \n");
scanf("%d",&b);
printf("Choisire l'operaction: \n");
scanf(" %c",&operation);
Caculatrice(a,b,operation);

}
