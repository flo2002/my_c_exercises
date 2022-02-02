#include <stdio.h>
#include <math.h>

int main() {
    char text[] = "8888a";
    int len = sizeof(text)/sizeof(text[0]) - 2;
    int i;
    int dez = 0;

    for (i=0; i<len; i++) {
        switch (text[i])
        {
        case '1':
            dez = dez + (1 * pow(10, ((len-1) - i)));
            break;

        case '2':
            dez = dez + (2 * pow(10, ((len-1) - i)));
            break;

        case '3':
            dez = dez + (3 * pow(10, ((len-1) - i)));
            break;

        case '4':
            dez = dez + (4 * pow(10, ((len-1) - i)));
            break;

        case '5':
            dez = dez + (5 * pow(10, ((len-1) - i)));
            break;

        case '6':
            dez = dez + (6 * pow(10, ((len-1) - i)));
            break;

        case '7':
            dez = dez + (7 * pow(10, ((len-1) - i)));
            break;

        case '8':
            dez = dez + (8 * pow(10, ((len-1) - i)));
            break;

        case '9':
            dez = dez + (9 * pow(10, ((len-1) - i)));
            break;

        case '0':
            dez = dez + (0 * pow(10, ((len-1) - i)));
            break;
        
        default:
            break;
        }
    }
    
    printf("%d ", dez);
    return 0;
}