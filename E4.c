/*
Claudio Castro Murillo
1630190a
Lab.Sistemas Operativos
*/
#include<stdio.h>
#include<string.h>

int main(){

char nombre[11]; //arreglo donde se almacena los caracteres.

printf("Ingresa tu nombre: \n");
scanf("%s",nombre);

int longitud = strlen(nombre); //la longuitud de mi cadena de caracteres.

printf("el nombre al reves es: \n");
for(int i=longitud-1;i>=0;i--){
	
	printf("%c",nombre[i]);

}
printf("\n");

return 0;
}

