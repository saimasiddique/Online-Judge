# include <stdio.h>
# include <string.h>
int main()
{
   int n;
   char str[7],ch;
 scanf("%d%c",&n,&ch);
while(n--)
{

  gets(str);
  if(strlen(str)==5)
  puts("3");
  else if((str[0]=='o' && str[1]=='n')||(str[0]=='o' && str[2]=='e')||(str[1]=='n' && str[2]=='e'))
  printf("1\n");
  else
  printf("2\n");

}

    return 0;
}
