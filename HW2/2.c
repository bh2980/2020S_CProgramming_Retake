#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int total);

void main(){
		int kor, eng, mat, tot;
		double avg;

		printf("�� ������ ������ �Է��Ͻÿ� : ");
		scanf("%d %d %d", &kor, &eng, &mat);
		tot = total(kor, eng, mat);
		avg = average(tot);
		printf("���� : %d, ��� : %.1lf\n", tot, avg);
}

int total(int kor, int eng, int mat){
	int total = kor + eng + mat;
	
	return total;
}

double average(int total){
	double avg = total/3;

	return avg;
}