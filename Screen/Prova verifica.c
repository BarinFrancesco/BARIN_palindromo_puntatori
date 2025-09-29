#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){
	
	char Telefono [20];
	int i=0;
	printf("Inserire marca e modelllo del telefono> ");
	fgets(Telefono, sizeof(Telefono), stdin);
	
	for(i; i<20; i++){
		printf("%c\n", Telefono[i]);
		Telefono[i] = "";
	}

	printf("Inserire il colore> ");
	fgets(Telefono, sizeof(Telefono), stdin);
	i=0;
	for(i; i<20; i++){
		printf("%c ", Telefono[i]);
	}
	
	int valutazione;
	int *pvalutazione = &valutazione;
	do{
	
	printf("Inserire la valutazione del film appena visto, da 1 a 4> ");
	scanf("d",&valutazione);
	
	if(*pvalutazione == 1 || *pvalutazione == 2 ){
		printf("scarsa");
	} if(*pvalutazione ==3 ) {
		printf("sufficente");
	}else if(*pvalutazione ==4) {
		printf("Buono");
	} else {
		do{
		printf("Valore non valido, rimetterlo>");
		scanf("d",&valutazione);	
		}while(*pvalutazione != 1 && *pvalutazione != 2 && *pvalutazione != 3 && *pvalutazione != 4);
	}
	}while(*pvalutazione == 2);

	
	return 0;
}
