#include <stdio.h> 
int main(){
int numero = 0;
 
printf("inserire il il programma\n");
printf(">");
scanf("%d", &numero);
	
	if(numero ==1){
		paridispari();
	} else if( numero ==2){
		sommaparziale();
	}
	
return 0;
}


int paridispari() {
 int numero =0; 
 
 printf("inserire il Numero\n");
 printf(">");
 scanf("%d", &numero);
 
 if (numero ==0){
 	printf("null");
 } else if(numero%2==1){
 	int triplo = numero*3;
 	printf("il numero è %d, ed il suo triplo è %d", numero, triplo);	
 } else {
 	int doppio = numero*2;
 	printf("il numero è %d, ed il suo doppio è %d", numero, doppio);
 }
 return 0;
}

int sommaparziale() {
 int somma = 0;
 int numero; 
 
 while (somma<=100){
 	
 printf("inserire il Numero\n");
 printf(">");
 scanf("%d", &numero);
 somma= somma+numero;
 }
 
 printf ("%d", somma);

}
