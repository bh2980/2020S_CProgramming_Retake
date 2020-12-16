#include <stdio.h>

double TAX(int);

int main(void){
 int money;

 printf("소득 : ");
 scanf("%d", &money);

 printf("\n세금 : %.2lf원\n", TAX(money));
}

double TAX(int money){
	double tax;

	return tax = money*0.06;
}
