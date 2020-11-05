//Kindargarden counting
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,l,cnt;

    while(gets(s))
    {




        cnt=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
            {
                cnt++;

                while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                {
                    i++;
                }
            }

        }
         printf("%d\n",cnt);

    }
    return 0;
}













//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    char a[10005];
//    int i,l,cnt;
//    while(gets(a))
//    {
//        l=strlen(a); cnt=0;
//        for(i=0;i<l;i++)
//        {
//            if(isalpha(a[i]) && !isalpha(a[i+1])) cnt++;
//        }
//        printf("%d\n",cnt);
//    }
//    return 0;
//}
//
//
//
