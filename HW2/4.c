#include <stdio.h>
#include <stdlib.h>

void lotto(int *);

int main(void){
	int i=0, j;

	puts("ÃßÃ·À» ½ÃÀÛÇÕ´Ï´Ù~");
	puts("¶Ñ·ç¶Ñ·ç~ ¶Ñ·ç¶×~¢İ\n");

	printf("´çÃ· ¹øÈ£ : ");
	for(i=0; i<6; i++){
		lotto(&j);
		printf("%d ", j);
	}

	puts("");
}

void lotto(int *j){
	*j = rand()%45+1;
}