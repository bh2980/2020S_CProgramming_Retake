#include <stdio.h>

double * small(double *arr);

void main(){
	double arr[6], *result;
	int i;

	for(i=0; i<6; i++){
		printf("%d번째 점수 : ", i+1);
		scanf("%lf", &arr[i]);
	}
	
	result = small(arr);

	printf("평균보다 작은 수\n");

	for(i=0; i<6 && result[i] != 0; i++){
		printf("%.2lf ", result[i]);
	}
}

double * small(double *arr){
	double avg=0;
	int i, j;

	for(i=0; i<6; i++){
		avg += *(arr+i);
	}

	avg = avg/6;

	//오름차순 배열
	for(i=0; i<6; i++){
		for(j=0; j<5-i; j++){
			if(*(arr+j) > *(arr+j+1)){
				double tmp = 0;

				tmp = *(arr+j+1);
				*(arr+j+1)=*(arr+j);
				*(arr+j) = tmp;
			}
		}
	}

	for(i=0; i<6; i++){
		if(avg <= *(arr+i)) *(arr+i) = 0;
	}

	return arr;
}