#include<stdio.h>

int main(){

    char digit = '1';
    char name[] = "Harshit";

    printf("%s , %c",name,digit);

    
    char fullname[50]; //definer new string variable with max size 50 bits
    printf("Enter full name --> ");
    fgets(fullname , sizeof(fullname) , stdin); //using fgets as scanf can not read past blank spaces , syntax - string variable , size , input method
    printf("%s" , fullname);

    // if we did not use fgets scanf would only print characters before the blank space

    char fullnamewithscanf[50];
    printf("Enter full name --> ");
    scanf("%s",&fullnamewithscanf);
    printf("%s \n",fullnamewithscanf);

return 0;
}