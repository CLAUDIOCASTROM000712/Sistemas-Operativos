/*
Claudio Castro Murillo.
1630190a
Lab.Sistemas Operativos
*/

#include<stdio.h>

int main(){
int num[10];
int i,men,may;

//lea numeros
printf("Ingrese 10 numeros: \n");
for(i=0;i<10;i++){
	printf("Numero %d: ",i + 1);
	scanf("%d",&num[i]);

}

//inicializar menor y mayor 
men = num[0];
may = num[0];

for(i=0;i<10;i++){
	if(num[i] < men){
		men = num[i];
	
	}
	if(num[i] > may){
		may = num[i];
	}

}

printf("\nEl numero menor es: %d\n",men);
printf("El numero mayor es: %d\n",may);

return 0;
}

