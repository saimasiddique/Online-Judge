//Jolly Jumper
#include<stdio.h>
int main()
{
int n,a[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
if(a[i]>a[i-1])
{
    printf("Jolly");

}
else
    printf("Not Jolly");
}


return 0;
}
