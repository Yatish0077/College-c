#include <stdio.h>

int main(){
    float principal,rate,time;
    printf("Enter The Principal Amount : ");
    scanf("%f",&principal);
    printf("Enter The Intrest rate (per anum) : ");
    scanf("%f",&rate);
    printf("Enter the duration of loans (In Years) : ");
    scanf("%f",&time);

    //calculating total amout
    printf("The Total amount to be paid Over Duration of %.2f year is %.2f.\n\n",time,(principal*rate*time)/100 + principal);
    printf("------ Detail Calculation -------\nIntrest per anum : %.2f\nTotal intrest over %.2f year : %.2f : ",(principal*rate*1)/100,time,(principal*rate*time)/100);
    printf("\nPrincipal Amount : %.2f\nTotal : %.2f\n",principal,((principal*rate*time)/100 + principal));
    printf("end");
   


}