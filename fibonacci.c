#include<stdio.h>

int main(){

    int a,i;
    long long t1 , t2 , newterm ;
    t1 = 0 ;
    t2 = 1 ;

    printf("Enter the number of digits required in the fibonnaci seriers -->\n");
    scanf("%d",&a);

    if (a<=0 ){printf("Please enter a positive number ! \n");}

    else {
        for(i=0 ; i<a ;i++) {
            printf("%lld \n" , t1);
            newterm = t1 + t2 ;
            t1 = t2 ;
            t2 = newterm ;
        }
    }
    return 0;
}