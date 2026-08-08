#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    double s,area ;

    printf("ENTER SIDE 1 OF TRIANGLE---> ");
    scanf("%d" , &a);

    printf("ENTER SIDE 2 OF TRIANGLE---> ");
    scanf("%d" , &b);

    printf("ENTER SIDE 3 OF TRIANGLE---> ");
    scanf("%d" , &c);

    s = (a+b+c)/2.0;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangle with sides %d , %d , %d is %f " , a , b , c , area) ;


return 0 ;
}