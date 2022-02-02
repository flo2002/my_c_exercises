#include<stdio.h>

int main() {
    int m1 = 80;
    int m2 = 5;
    int prod;

	while (m1 != 1) {
		if ((m1 % 2) != 0) {
            prod = prod + m2;
            m1--;
        }

        m1 = m1/2;
        m2 = m2*2;
	}

    prod = prod + m2;

	printf("%d", prod);
	return 0;
}