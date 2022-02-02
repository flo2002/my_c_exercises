#include<stdio.h>

int main() {
	int arr[9];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 4;
    arr[4] = 6;
    arr[5] = 5;
    arr[6] = 1;
    arr[7] = 2;
    arr[8] = 1;
    arr[9] = 1;

    int i;

    for (i=1; i < 8; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("Maxima: %d\n", arr[i]);
        }

        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
            printf("Minima: %d\n", arr[i]);
        }
    }
	return 0;
}