#include <cstdio>
#include <cctype>
using namespace std;
 char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
    char c;
    while (scanf("%c",&c) != EOF){
        c = tolower(c);
        if (isspace(c)) printf("%c",c);
        else{
            for (int i=0; keyboard[i]; ++i)
                if (c == keyboard[i]){
                    printf("%c",keyboard[i-2]);
                    break;
                }
        }
    }
    return 0;
}
