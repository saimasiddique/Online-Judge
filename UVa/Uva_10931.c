//parity
#include<stdio.h>
int main()
{
    int a,b,c,bin[200],tag=0,count;
    while(scanf("%d",&a)==1)

    {
        c=count=0;
        if(a==0)
            break;
        while(a!=0)
        {
            b=a%2;
            a=a/2;
            bin[c]=b;
            c++;
        }
        tag=c-1;
        for(c=0; c<=tag; c++)
            if(bin[c]==1)
                ++count;
        printf("The parity of ");
        while(tag>=0)
        {
            printf("%d",bin[tag]);
            tag--;
        }
        printf(" is %d (mod 2).\n",count);

    }
    return 0;
}

/*
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int parity(int n) {
    int sum = 0;
    while(n!=0) {
        sum += n%2;
        n/=2;
    }
    return sum;
}
int main()
{
    int n;
    while(scanf("%d", &n) && n!=0){
        int res = parity(n);

        int rem[100], i = 0;
    while(n!=0) {
        rem[i++] = n%2;
        n /= 2;
    }
    printf("The parity of ");
    for(int j = i-1; j>=0; j--){
            printf("%d", rem[j]);
        }

        printf(" is %d (mod 2).\n", res);
    }
    return 0;
}
*/
