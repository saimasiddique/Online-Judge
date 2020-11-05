#include <cstdio>
#include <cctype>
using namespace std;
const char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
    char c;
    while (scanf("%c",&c) != EOF){
        c = tolower(c);                  //換成小寫字母
        if (isspace(c)) printf("%c",c);  //如果為' '或'\n'直接輸出
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
