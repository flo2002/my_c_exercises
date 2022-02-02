#include<stdio.h>

int main() {
    int dez = 294967295;
    int bin[32];
    int i;

    for (i=0; dez>0; i++)    
    {    
        bin[i]=dez%2;    
        dez=dez/2;    
    }  

    for (i=i-1; i>=0; i--)    
    {    
        printf("%d", bin[i]);    
    }    
	return 0;
}