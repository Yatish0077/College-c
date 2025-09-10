#include <stdio.h>
int main(){
    printf("Enter two number in form (x y) : ");
    int a,b;
    // the way you want to seprate two number depend on you (%d seprator %d)
    scanf("%d%d",&a,&b);
    printf("A: %d\tB: %d\n",a,b);
    if (a> b)
    {
        printf("Number A: %d is greater",a);
    }else if(a<b){
        printf("Number b: %d is greater",b);
    }else{
        printf("Both the number are equal");
    }
    
    // printf("Hello World");
    return 0;
}