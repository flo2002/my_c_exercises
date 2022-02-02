// Vorraussetzung: Interpunktionszeichen dürfen nicht am Schluss des Strings stehen.
#include<stdio.h>

#define MAX_LEN 32

void get_all_different_chars(char*, char*, int);
void count_different_chars(char*, char*, int*, int);

void main() {
    char text[MAX_LEN] = "asdAfasdaa..a?s,,,sdA";
    printf("%s \n\n", text);

    char chars[MAX_LEN] = { 0 };
    get_all_different_chars(text, chars, MAX_LEN);

    int char_counts[MAX_LEN] = { 0 };
    count_different_chars(text, chars, char_counts, MAX_LEN);
    int i = 0;
    for (i=0; i<MAX_LEN; i++) {
        printf("%c %d \n", chars[i], char_counts[i]);
    }
}

void get_all_different_chars(char* text, char* chars, int max_len) {
    int i = 0, e = 0, match = 0, chars_i = 0;

    //iterate through text
    while (i<max_len) {
        //check if char is already in chars
        while (e<max_len) {
            if (text[i] == chars[e]) {
                match = 1;
                break;
            }
            e++;
        }

        if (match == 0) {
            chars[chars_i] = text[i];
            chars_i++;
        }

        i++; e=0; match=0;
    }
} 

void count_different_chars(char* text, char* chars, int* char_counts, int max_len) {
    int i = 0, e = 0;
    
    //iterate through text
    while (i<max_len) {
        //add 1 to the right char in chars
        while (e<max_len) {
            if (chars[e] == text[i]) {
                char_counts[e]++;
                break;
            }
            e++;
        }

        i++; e=0;
    }
} 
