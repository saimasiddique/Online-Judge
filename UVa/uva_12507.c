//three families
 #include <stdio.h>

int main()
{
    int t,a,b,c;
    int Totalworkhours, Totalworkminute, eachworkminute, extraminute, Aget;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        Totalworkhours = a+b;
        Totalworkminute = Totalworkhours * 60;
        eachworkminute = Totalworkminute/3;
        extraminute = a * 60 - eachworkminute;
        Aget = (c * extraminute)/eachworkminute;

        if(Aget<=0)
            printf("0\n");
        else
            printf("%d\n",Aget);
    }
    return 0;
}
