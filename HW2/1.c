#include <stdio.h>
//�ȳ�

double TAX(int);

int main(void){
 int money;

 printf("�ҵ� : ");
 scanf("%d", &money);

 printf("\n���� : %.2lf��\n", TAX(money));
}

double TAX(int money){
	double tax;

	return tax = money*0.06;
}