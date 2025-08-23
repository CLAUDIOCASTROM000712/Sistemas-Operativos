#include<stdio.h>

int main(){

char nombre[11]; //10 caracteres + 1 nulo

printf("ingrese su nombre: ");
scanf("%10s",nombre); //limita la entrada a 10 caracteres

printf("hola %s, bienvenido\n",nombre);


return 0;
}

