#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    if((a>='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=="I"||a=='o'|a=='O'||a=='u'||a=='U')){
        printf("Vowel");
    }
    else{
        printf("Consotant");
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}