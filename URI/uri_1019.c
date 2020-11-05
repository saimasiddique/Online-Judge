#include<stdio.h>
int main(void){
    long int input, hour, minute, temp;
    scanf("%ld",&input);
    hour=input/3600;
    temp=input%3600;
    minute=temp/60;
    temp=temp%60;
    printf("%ld:%ld:%ld\n",hour,minute,temp);
    return 0;
}
