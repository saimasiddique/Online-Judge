//A Minimum Land Price
#include<stdio.h>
#include<math.h>
int main()
{
    long long int t;
    scanf("%ld",&t);
    while(t>0){
        long int i=0;
        long int a,j,number[1000],num,temp,s,sum=0;
        do
        {
            scanf("%ld",&num);
            if(num==0) break;
            number[i]=num;
            i++;
        } while(num!=0);

        for(a=0;a<i-1;a++)
        {
            long int l=a;
            while((number[l+1]>number[l])&&l>=0)
            {
            temp=number[l+1];
            number[l+1]=number[l];
            number[l]=temp;
            l--;
            }
        }

        long int k;
        sum=0;

        for(k=0;k<i;k++)
        {
            s=number[k];
            sum=sum+2*pow(s,k+1);
        }

        if(sum>5000000) printf("Too expensive\n");
        else printf("%ld\n",sum);
        t--;
    }
    return 0;
}
