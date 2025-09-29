#include <stdio.h> 
int main(){
	int a[2];
	printf("scrivi primo numero \n");
	printf(">");
	scanf("%d", &a[0]);
	
	printf("scrivi primo numero \n");
	printf(">");
	scanf("%d", &a[1]);
	
	int max = massimo(a[0],a[1]);
	printf("il piu' grande e' %d",max);
	return 0;
}

int massimo(a,b) {
	if(a>b){
		return a;
	} else {
		return b;
	}
}//max bossoli
