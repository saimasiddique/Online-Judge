#include<stdio.h>
int main(){
    int a,b,time;
    while(scanf("%d%d",&a,&b)==2){
    if(a<b)
        time=b-a;
    else
        time=b+24-a;
    printf("O JOGO DUROU %d HORA(S)\n",time);
    }
    return 0;
}
