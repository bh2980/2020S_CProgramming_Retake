#include <stdio.h>
#include <stdlib.h>

void lotto(int *);

int main(void){
	int i=0, j;

	puts("��÷�� �����մϴ�~");
	puts("�ѷ�ѷ�~ �ѷ��~��\n");

	printf("��÷ ��ȣ : ");
	for(i=0; i<6; i++){
		lotto(&j);
		printf("%d ", j);
	}

	puts("");
}

void lotto(int *j){
	*j = rand()%45+1;
}