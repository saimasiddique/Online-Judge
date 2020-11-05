#include<stdio.h>
#include<string.h>
int main()
{
  char s[1000];
  int sum,i,l;
  gets(s);
  l=strlen(s);
  sum=0;
  for(i=0;i<l;i++)
  {

      sum=sum*10+s[i]-'0';

  }
  printf("%d",sum);
  return 0;
}
