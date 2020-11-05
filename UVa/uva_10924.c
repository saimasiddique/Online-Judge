//Prime Words
#include<stdio.h>
#include<string.h>
int main()
{
int i,l,sum,bin,j;
char s[100];
while(gets(s))
    {
    sum=0;
    l=strlen(s);
    for(i=0;i<l;i++)
        {
        switch(s[i])
            {
            case 'a':
            sum=sum+1;    break;
            case 'b':
            sum=sum+2;    break;
            case 'c':
            sum=sum+3;    break;
            case 'd':
            sum=sum+4;    break;
            case 'e':
            sum=sum+5;    break;
            case 'f':
            sum=sum+6;    break;
            case 'g':
            sum=sum+7;    break;
            case 'h':
            sum=sum+8;    break;
            case 'i':
            sum=sum+9;    break;
            case 'j':
            sum=sum+10;     break;
            case 'k':
            sum=sum+11;     break;
            case 'l':
            sum=sum+12;     break;
            case 'm':
            sum=sum+13;     break;
            case 'n':
            sum=sum+14;     break;
            case 'o':
            sum=sum+15;     break;
            case 'p':
            sum=sum+16;     break;
            case 'q':
            sum=sum+17;     break;
            case 'r':
            sum=sum+18;     break;
            case 's':
            sum=sum+19;     break;
            case 't':
            sum=sum+20;     break;
            case 'u':
            sum=sum+21;     break;
            case 'v':
            sum=sum+22;     break;
            case 'w':
            sum=sum+23;     break;
            case 'x':
            sum=sum+24;     break;
            case 'y':
            sum=sum+25;     break;
            case 'z':
            sum=sum+26;     break;
            case 'A':
            sum=sum+27;     break;
            case 'B':
            sum=sum+28;     break;
            case 'C':
            sum=sum+29;     break;
            case 'D':
            sum=sum+30;     break;
            case 'E':
            sum=sum+31;     break;
            case 'F':
            sum=sum+32;     break;
            case 'G':
            sum=sum+33;     break;
            case 'H':
            sum=sum+34;     break;
            case 'I':
            sum=sum+35;     break;
            case 'J':
            sum=sum+36;     break;
            case 'K':
            sum=sum+37;     break;
            case 'L':
            sum=sum+38;     break;
            case 'M':
            sum=sum+39;     break;
            case 'N':
            sum=sum+40;     break;
            case 'O':
            sum=sum+41;     break;
            case 'P':
            sum=sum+42;     break;
            case 'Q':
            sum=sum+43;     break;
            case 'R':
            sum=sum+44;     break;
            case 'S':
            sum=sum+45;     break;
            case 'T':
            sum=sum+46;     break;
            case 'U':
            sum=sum+47;     break;
            case 'V':
            sum=sum+48;     break;
            case 'W':
            sum=sum+49;     break;
            case 'X':
            sum=sum+50;     break;
            case 'Y':
            sum=sum+51;     break;
            case 'Z':
            sum=sum+52;     break;
            }
        }
    bin=1;
    for(j=2;j<=sum/2;j++)
        if(sum%j==0)
        {bin=0;     break;}
    if(bin==1)
    printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");
    }
return 0;
}
