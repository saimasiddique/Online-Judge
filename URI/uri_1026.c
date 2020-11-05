//TO CARRY OR NOT TO CARRY
#include <stdio.h>

int main(){
    unsigned int n, m;


    while(scanf("%u %u", &n, &m) != EOF){

                    printf("%u\n", n ^ m);
    }

    return 0;
}
