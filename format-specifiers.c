#include<stdio.h>

int main() {

    /* Format specifiers = special tokens that begin wiht
    % symbol followed by a character that specifies data 
    optional modifiers such as (width , precision , flags)
    they control how data is dispayed and interpreted */

    int age = 18;
    float price = 91.91;
    double pi = 3.1415926535;
    char currency = '$'; // Char always written with single quotes
    char name[] = "Harshit Banga";

    printf("%d \n", age);
    
    return 0;

}



