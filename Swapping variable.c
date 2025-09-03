#include <stdio.h>

int main()
{
    printf("Hello World");
    int a,b,c;
    printf("Enter First value (a) : ");
    scanf("%d",&a);
    printf("Enter Secound number (b) : ");
    scanf("%d",&b);
    // printf("Enter Third number (c) : ");
    // scanf("%d",&c);
    
    // swaping with temp
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("After swaping \na : %d , b : %d",a,b);
    printf("\n\nSwaping without temp variable\n");
    a = a +b;
    b = a - b;
    a = a-b;
    printf("After swaping \na : %d , b : %d",a,b);
    

    return 0;
}
