#include <stdio.h>
int main() {
    if(year%4==0 && year%100!=0){
        printf("Leap Year");
    }
    else if(year%100==0 && year%400==0){
        printf("Leap Year");
    }
    else if(year%4==0 && year%400==0){
        printf("Not a Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}