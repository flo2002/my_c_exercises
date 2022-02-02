#include<stdio.h>

int main() {
    float zinssatz = 0.05;
    int years = 10;
    float capital = 1000;
    int i;
    float out;
    printf("Kapitalentwicklung für Grundkapital: %f EUR\n", capital);
    printf("Fixzenssatz: %f%%, Laufzeit %d Jahre\n", zinssatz*100, years);
    printf("Jahr    Kapital\n");
    printf("----------------\n");

    for (i = 0; i<years; i++) {
        if (i == 0) {
            out = capital + (capital * zinssatz);
        }
        else {
            out = out + (out * zinssatz);
        }
    printf("%d    %f EUR\n", i+1, out);
    }

    return 0;
}