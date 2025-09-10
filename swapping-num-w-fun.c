#include <stdio.h>


int swapper(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;

}

int main(){
    int a,b;
    printf("Enter two number a and b : ");
    scanf("%d %d",&a,&b);
    printf("The number are \n\t A : %d\t B : %d\n",a,b);
    // a,b= swapper(a,b);
    swapper(&a,&b);
    printf("AFTER SWAPPING\n\nThe number are \n\t A : %d\t B : %d",a,b);

    return 0;
    
}