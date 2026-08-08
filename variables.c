#include<stdio.h>
#include<stdbool.h> // header files for boolean 

int main(){

    int age = 18;
    int year = 2026;
    int qty = 1;
    float gpa = 9.8;
    float price = 99.99;
    float temp = -10.1;
    double pi = 3.14159265358979;
    char grade = 'A';
    char symbol = '!';
    char name[] = "Harshit Banga"; 
    bool isOnline = true ; // true = 1 and false = 0

    /* no specific string data type in C , it can be stored 
    as an array of characters always in double quotes */


    printf("you are %d years old \n",age);
    printf("The year is %d \n", year);
    printf("You have ordered %d items\n",qty );
    printf("Your GPA is %.1f \n",gpa);

    /* .1 or .2 is placed after %f to determine the number of 
    decimal places to show in the print statement */

    printf("The price is $%.2f \n",price);
    printf("The temp is %.2f°C \n",temp);
    printf("The value of pi is %.15lf \n" ,pi);

    /* %lf is used for double data type where long decimals 
    required , it represents long float */

    printf("Your grade is %c \n",grade);

    /* %c is the place holder for characters */

    printf("Your fav symbol is %c \n",symbol);
    printf("Hello %s \n" , name);

    /* %s is a placeholder for string */

    printf("%d",isOnline);

    return 0;

}
