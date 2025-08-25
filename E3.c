/*
Claudio Castro Murillo
1630190a
Lab.Sistemas Operativos
*/
#include<stdio.h>

//declarar una funciones que realizen cuatro operaciones.
//suma,resta,multiplicacion y division.
//prototipo de la funcion

void Suma(int a,int b);
void Resta(int a,int b);
void Multiplicacion(int a,int b);
void Division(int a,int b);

int main(){

int opc; //variable de opcion para el menu.


//opciones para realizar operaciones.
printf("1.-Suma:\n");
printf("2.-Resta:\n");
printf("3.-Multiplicacion:\n");
printf("4.-Division:\n");


printf("que operacion deseas realizar:\n");
scanf("%d",&opc);
switch(opc){
	case 1:
		printf("...elegiste Suma...\n");
		int a,b;
		Suma(a,b); //llama a la funcion Suma en el main.
	break;
	
	case 2:
		printf("...elegiste Resta...\n");
		
		//int a,b;
		Resta(a,b);
	break;
	
	case 3:
		printf("...elegiste Multiplicacion...\n");
		
		//int a,b;
		Multiplicacion(a,b);
	
	break;
	
	case 4:
		printf("...elegiste Division...\n");
		Division(a,b);
	break;
	
	default:
		printf("operacion invalida\n");
		printf("adios\n");	

	



}


return 0;
}


//declarar la definicion de mis funciones.
void Suma(int a,int b){
int resultado;
//resultado=a +b
printf("Ingrese el primer numero:\n");
scanf("%d",&a);

printf("Ingrese el segundo numero:\n");
scanf("%d",&b);


resultado = a + b;
printf("el resultado de la suma es: %d\n",resultado);

}

void Resta(int a,int b){
int resultado;
printf("Ingrese el primer numero:\n");
scanf("%d",&a);

printf("Ingrese el segundo numero:\n");
printf("%ls",&b);

resultado = a - b;
printf("el resultado de la resta es: %d\n",resultado);

}

void Multiplicacion(int a,int b){
int resultado;
printf("Ingres el primer numero:\n");
scanf("%d",&a);

printf("Ingrese el segundo numero:\n");
scanf("%d",&b);

resultado = a * b;
printf("el resultado de la multiplicaion es: %d\n",resultado);

}

void Division(int a,int b){
int resultado;
//int cociente,residuo;
printf("Ingrese el primer numero:\n");
scanf("%d",&a);

printf("Ingrese el sergundo numero:\n");
scanf("%d",&a);

//comparacion.
if(b == 0){
	printf("Error: no se puede dividir entre 0\n");

}else {
	//cociente = a / b;
	//residuo = a % b; //la operacion del modulo
	//printf("El resultado de la division es: %d\n", cociente);
        //printf("El residuo de la division es: %d\n", residuo);
        resultado = a / b;
	//printf("el resultado de la division es: %d\n",resultado);
	printf("El resultado de la division entera es: %d\n", resultado);
}




}



