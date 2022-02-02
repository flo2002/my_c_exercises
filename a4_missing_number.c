#include<stdio.h>

int main() {
	int arr[5];
	arr[0] = 2;
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	int len = sizeof(arr)/sizeof(arr[0]);
	int expec_sum = ((len*len)+len)/2;
	int sum = 0;
	int i = 0;

	while (i<len) {
		sum += arr[i];
		i++;
	}

	int num = expec_sum - sum;
	
	printf("%d", sizeof(arr[0]));
	printf(" %d", expec_sum);
	printf(" - %d", sum);
	printf(" = %d", num);
	return 0;
}