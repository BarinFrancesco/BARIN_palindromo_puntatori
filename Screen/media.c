#include<stdio.h>
#include<math.h>

int main(){
	
}

int es1(){
	int e1;
	int e2;
	float media;
	int *pe1, *pe2;
	float *pmedia;
	
	pmedia = &media;
	pe1 = &e1;
	pe2 = &e2;
	
	do{
		printf("inserisci la prima eta' \n");
		printf(">");
		scanf("\n%d", &e1);
		
		printf("inserisci la seconda eta' \n");
		printf(">");
		scanf("\n%d", &e2);
	}	while(*pe1<=0 || *pe1>120 || *pe2<=0 || *pe2>120)	;
	
	*pmedia = (float)((*pe1)+ (*pe2))/2;
	
	printf("la media vale %4.2f", *pmedia );
	return 0;
}

int es2(){
	
}
