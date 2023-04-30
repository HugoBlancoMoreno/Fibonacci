#include <iostream>

main(){

int aux,numero,anterior=0,n1=1;

printf("Ingresa un numero de elementos: ");
scanf("%d", &numero);


for(int i=0;i<=numero;i++){
	printf("%d, ", n1);
	
	aux=n1;
	n1+=anterior;
	anterior=aux;
	
}
printf("\n\n");
system("pause");
}
