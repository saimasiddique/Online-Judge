//Hajj-e-Akbar
#include <stdio.h>
#include <string.h>

int main ()
{
     char s [15]  ;
     int x , cnt=0 ;

     while (scanf ("%s",&s) ==1 )
          {
               cnt++ ;
               x= strlen (s) ;
               if (x==4) printf ("Case %d: Hajj-e-Akbar\n",cnt) ;
               else if (x==5) printf ("Case %d: Hajj-e-Asghar\n",cnt) ;

               else if (s[0] == '*') break ;
          }

     return 0 ;
}
