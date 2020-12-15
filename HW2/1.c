#include <stdio.h>
//¾È³ç

double TAX(int);

int main(void){
 int money;

 printf("¼Òµæ : ");
 scanf("%d", &money);

 printf("\n¼¼±Ý : %.2lf¿ø\n", TAX(money));
}

double TAX(int money){
	double tax;

	return tax = money*0.06;
}