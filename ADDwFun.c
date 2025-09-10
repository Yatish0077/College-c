#include <stdio.h>

int add(int a,int b ){
    return a+b;
}
int mul(int a , int b);
int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("The Addition of two number is %d.\n",add(a,b));
    printf("The Multiplication of two number is %d.",mul(a,b));
    return 0;
}

int mul(int a,int b){
    return a*b;
}