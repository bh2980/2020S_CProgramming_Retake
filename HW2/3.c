#include <stdio.h>

double User_abs(double nbr);

int main(void){
	double nbr;

	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%lf", &nbr);

	printf("������ %.3lf�Դϴ�.\n", User_abs(nbr));
}

double User_abs(double nbr){
	if(nbr<0) return nbr*(-1);
	else return nbr;
}