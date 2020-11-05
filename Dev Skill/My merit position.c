#include<stdio.h>
int main()
{
    char name[100];
    int n,i,k,temp;
    int f[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s %f",name,&f[i]);

    }

    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
        if(f[i]>f[k])
        {
            temp=f[i];
            f[i]=f[k];
            f[k]=temp;
        }

        else if(f[i]==f[k])
        {
        if(strcmp(name[i],name[k])>0)
            temp=name[k];
        name[k]=name[i];
        name[i]=temp;
        }
    }

}


for(i=0;i<n;i++)
{
    printf("%d.%s",i+1,name[i]);
}
return 0;

}
