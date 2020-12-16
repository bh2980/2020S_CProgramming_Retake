#include <stdio.h>

double g_m(double weight);

int main(void){
	double weight;

	printf("몸무게 :        kg\b\b\b\b\b\b\b\b\b");
	scanf("%lf", &weight);

	printf("달에서의 몸무게 : %.2lf  kg\n", g_m(weight));
}

double g_m(double weight){
	return weight * 0.17;
}
