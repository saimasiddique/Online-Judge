//Salary
#include<stdio.h>
int main(void){
    int a,member;
    double amount,salary;
    while(scanf("%d%d%lf",&a,&member,&amount)==3){
        salary=(double)member*amount;
        printf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,salary);
    }
    return 0;
}
