#include<bits/stdc++.h>

using namespace std;
int main()
{
    float a,b,c,d,e,avg,res;
    cin>>a>>b>>c>>d;
    avg=(2*a+3*b+4*c+1*d)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        cin>>e;
        printf("Nota do exame: %.1f\n",e);
        res=(avg+e)/2;
        if(res>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(res<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",res);

    }



    return 0;
}
