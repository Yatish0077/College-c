#include <stdio.h>

char yearChar(int year){
    if (year == 2001 || year == 2007 ||year == 2018 || year == 2029){
        return 'A';
    };
    return 'Z';
}
int monthNo(int month,char year){
    //when the year is A
    if (year == 'A'){
        if (month == 1 || month == 10){
            return 1;
        }else if(month == 2 || month == 3|| month ==11){
            return 4;
        }else if(month ==4 || month == 7){
            return 7;
        }else if(month == 5){
            return 2;
        }else if(month ==8){
            return 3;
        }else if (month ==9 || month  ==12){
            return 6;
        }else if(month ==6){
            return 5;
        }
    return 0;
    }
    return 0;
}

void date7(int date){
    // if (date%7 ==1){
    //     return
    // }
    switch (date%7 -1){
        case 1:{
            printf("Monday");
            break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wedenesday");
            break;
        }
        case 4:{
            printf("Thursday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Saturday");
            break;
        }
        case 0:{
            printf("Sunday");
            break;
        }
        }
}

void date1(int date){
    // if (date%7 ==1){
    //     return
    // }
    switch (date%7){
        case 1:{
            printf("Monday");
            break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wedenesday");
            break;
        }
        case 4:{
            printf("Thursday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Saturday");
            break;
        }
        case 0:{
            printf("Sunday");
            break;
        }
        }
}

void dateNo(int date,int month){
    if (month == 1 ){
        date1(date);
    }else if (month == 7){
        date7(date);
    }
}
int main(){
    printf("Enter Date in form 'DD-MM-YYYY' : ");
    int yi,mi,di;
    scanf("%d-%d-%d",&di,&mi,&yi);
    printf("The date enterdd is %d %d %d\n",di,mi,yi);

    //exceuting year char
    char y = yearChar(yi);
    if (y == 'Z'){
        printf("Enter a valid year");
        return 0;
    }

    // excecuting month i and date
    int month = monthNo(mi,y);
    dateNo(di,month);

    // printf("%c %d",yearChar(20001),month);
    return 0;
}