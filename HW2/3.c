#include <stdio.h>

double User_abs(double nbr);

int main(void){
	double nbr;

	printf("숫자 하나를 입력하세요 : ");
	scanf("%lf", &nbr);

	printf("절댓값은 %.3lf입니다.\n", User_abs(nbr));
}

double User_abs(double nbr){
	if(nbr<0) return nbr*(-1);
	else return nbr;
}