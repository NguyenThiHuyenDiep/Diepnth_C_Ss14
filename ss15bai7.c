#include<stdio.h>
int main(){
    char text[]="fhf13@13!ff";
    int countCharacterText=0;
    int countCharecterNum=0;
    int countCharecterSpecial=0;
    int length= strlen(text);
    for(int i=0; i<length; i++);
    if(isaphal(text[i])){
        countCharecterText++;
    }else{
        countCharecterSpecial++;
    }
}
printf("%d ki tu chu cai \n", countChardecterText);//5
printf("%d ki tu chu so \n", countCharecterNum);//4
printf("%d ki tu chu cai dac biet \n", countCharecterSpecial);//2
return 0;




