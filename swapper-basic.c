#include <stdio.h>


void swapper(int a,int b){
    int temp = b;
    b = a;
    a = temp;
    printf("After Swapping Inside swapper function \n\nThe number are \n\t A : %d\t B : %d\n",a,b);

}

int main(){
    printf("Enter two number a and b : ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The number are \n\t A : %d\t B : %d\n",a,b);
    swapper(a,b);
    printf("After Swapping Outside function \n\nThe number are \n\t A : %d\t B : %d\n",a,b);
    return 0;

}