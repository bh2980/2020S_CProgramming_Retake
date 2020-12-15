#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int total);

void main(){
		int kor, eng, mat, tot;
		double avg;

		printf("세 과목의 점수를 입력하시오 : ");
		scanf("%d %d %d", &kor, &eng, &mat);
		tot = total(kor, eng, mat);
		avg = average(tot);
		printf("총점 : %d, 평균 : %.1lf\n", tot, avg);
}

int total(int kor, int eng, int mat){
	int total = kor + eng + mat;
	
	return total;
}

double average(int total){
	double avg = total/3;

	return avg;
}