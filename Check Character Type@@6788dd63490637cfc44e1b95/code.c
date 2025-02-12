#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if((a>='a' && a <='z')||(a>='A' && a<='Z')){
    if((a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=="I"||a=='o'||a=='O'||a=='u'||a=='U')){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}