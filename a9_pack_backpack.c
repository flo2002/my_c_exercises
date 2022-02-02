#include <stdio.h>

#define MAX_UNITS 10

typedef struct articles_t {
    char name[20];
    int units;
    int price; //in Cent
} articles;

void get_best_combination(articles*, int);

void main() {
    articles art[4] = {
        { "felt_pen", 3, 100 }, 
        { "fountain_pen", 1, 500 }, 
        { "rubber", 40, 50 }, 
        { "chalk", 100, 10 }, 
    };

    printf("All articles: \n");
    int i = 0;
    for (i=0; i<4; i++) {
        printf("Article: %12.12s, Units: %6d, Price: %6d \n", art[i].name, art[i].units, art[i].price);
    }

    printf("Best combination of articles: \n");
    get_best_combination(art, MAX_UNITS);

    double final_price = 0;
    for (i=0; i<4; i++) {
        printf("Article: %12.12s, Units: %6d, Price: %6d \n", art[i].name, art[i].units, art[i].price);
        final_price += (art[i].price * art[i].units);
    }
    printf("Gesamtpreise: %1.2f€", final_price/100);    
}

int get_index_of_lowest_price(articles *art) {
    int i = 0;
    int min = art[i].price;

    while (i < 4) {
        if (art[i].price < min) {
            min = art[i].price;
        }
        i++;
    }

    return i-1;
}

void get_best_combination(articles *art, int len) {
    int i = 0;

    int units_left = 0;
    for (i=0; i<4; i++) {
        units_left += art[i].units;
    }

    int index_of_lowest_price = get_index_of_lowest_price(art);

    while (units_left>len) {
        art[index_of_lowest_price].units--;

        if (art[index_of_lowest_price].units == 0) {
            index_of_lowest_price--;
        }

        units_left--;
    }
}


