#include <stdio.h>

double g_m(double weight);

int main(void){
	double weight;

	printf("������ :        kg\b\b\b\b\b\b\b\b\b");
	scanf("%lf", &weight);

	printf("�޿����� ������ : %.2lf  kg\n", g_m(weight));
}

double g_m(double weight){
	return weight * 0.17;
}