//Vorraussetzung1: Die länge des Textes sowie des Patterns müssen gegeben sein.  
//Vorraussetzung2: Im Text bzw. dem Pattern dürfen nur Großbuchstaben, Kleichbuchstaben und Abstände vorkommen

#include<stdio.h>

#define TEXT "Dieses da ist es"
#define PATTERN "es"
#define TEXT_LEN 16
#define PATTERN_LEN 2

void string_pattern_matching(char *, char *, int, int);
void to_lowercase_letters(char *, int);

void main() {
    char text[] = TEXT;
    char pattern[] = PATTERN;

    string_pattern_matching(text, pattern, TEXT_LEN, PATTERN_LEN);
}

void string_pattern_matching(char *text, char *pattern, int text_len, int pattern_len) {
    int i = 0;
    int e = 0;
    int rev = 0;
    int is_pattern = 0;

    to_lowercase_letters(text, text_len);
    to_lowercase_letters(pattern, pattern_len);

    printf("Positionen sind: ");

    for (i=0; i<text_len; i++) {
        if (*text == PATTERN[0]) {
            for (e=0; e<pattern_len; e++) {
                if (*text == PATTERN[e]) {
                    is_pattern = 1;
                }
                else {
                    is_pattern = 0;
                }
                text++;
                rev++;
            }
        }

        while (rev != 0) {
            text--;
            rev--;
        }

        if (is_pattern == 1) {
            printf("%d, ", i);
            is_pattern = 0;
        }
        text++;
    }
}

void to_lowercase_letters(char *text, int len) {
    int i = 0;

    for (i=0; i<len; i++) {
        if (*text >= 65 && *text <= 90) {
            *text = *text + 32;
        }
        else {
            *text = *text;
        }
        printf("%c", *text);
        text++;
    }

    printf("\n");
}