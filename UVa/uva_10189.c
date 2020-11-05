#include<iostream>

using namespace std;


int main(){
    int r,c,cnt,i,j;


     cnt=0;
    int t=1;

    //cin>>fila>>columna;
    while(scanf("%d %d",&r,&c)==2)
    {


    if(r==0 && c==0) break;
    else
    {


          char mine[r][c];

          for( i=0;i<r;i++){
             for( j=0;j<c;j++){
                printf("%s",mine[i][j]);
             }
          }

          for( i=0;i<r;i++){
               for( j=0;j<c;j++){
                      if(mine[i][j] != '*'){
                        for( k=0;k<3;k++){
                                for( l=0;l<3;l++){
                                        if(((i+k-1)<r) && ((j+l-1)<c)){
                                                    if(((i+k-1)>-1) && ((j+l-1)>-1)){
                                                        if((mine[i+k-1][j+l-1] == '*') && !((i+k-1)== i  && (j+l-1)==j)){
                                                            cnt++;
                                                        }
                                                    }
                                        }
                                }
                        }
                        mine[i][j]='0' + cnt;
                      }
                      cnt=0;
               }
          }

          printf("Field #%d:\n",t);
          for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                       printf("%d",mine[i][j]);
               }
               printf("\n");
          }


          t++;
    }

 return 0;
}
