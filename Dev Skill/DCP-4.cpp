#include <bits/stdc++.h>
using namespace std;

int main() {
	int h,m,r,s,rm,d,ans;
  while(cin>>h>>m)
  {
      s=0;
    for(int i=1;i<=m;i++)
    {
        cin>>r;
        s+=r;
    }
    if(s>=h)
    {
        printf("Project will finish within 1 day.\n");
    }
    else
    {
        rm=h%s;
        d=h/s;
        if(rm)
        {


        printf("Project will finish within %d days.\n",d+1);
        }
        else
        printf("Project will finish within %d days.\n",d);

    }
  }
	return 0;
}
