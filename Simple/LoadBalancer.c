#include <stdio.h>
#include <stdbool.h>

bool loadBalance(int Array[], int n){
	int bigSum = 0, sum1 = 0, sum2 = 0;
	if(n<5) return false;
	else{
		for(int l=0; l<n; l++){
		bigSum += Array[l];
		}
		// printf("bigSum is: %d", bigSum);
	for(int i=1; i<n; i++){
		sum1=0;
		for(int j=i+1; j<n; j++){
			//printf("modulo is:%d\n",(bigSum-(Array[i]+Array[j])) % 3 );
			if( (bigSum-(Array[i]+Array[j])) % 3 == 0 ){
				for(int x=0; x<i; x++){
				sum1 += Array[x];
				}
				//printf("i:%d sum1: %d ", i, sum1);
				for (int y=i+1; y<j; y++){
				sum2 += Array[y];
				}
				//printf("j:%d sum2: %d\n", j, sum2);
				if(sum1 == sum2){
					printf("1-wsza pozycja: %d | ", i);
					printf("2-ga pozycja: %d Czas: %d\n", j, sum2);
					return true;
				}
				sum1=0, sum2=0;
			}
		}
	}
	}
	return false;
}

int main()
{
	int A[] = {1,3,4,2,2,2,1,1,2};
	int size = sizeof A / sizeof A[0];
	
	printf("Load balancer determined the outcome to be: %d\n",loadBalance(A, size));
	return 0;
}