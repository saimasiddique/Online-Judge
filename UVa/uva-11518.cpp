#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>


using namespace std;


vector <int> g[50000];
int visit[50000];


int calc;

void dfs(int u)
{
    //if(visit)
    visit[u]=1;
    calc++;

    for(int i =0;i<g[u].size();i++)
    {
        int v = g[u][i];

        if(visit[v]==0)
        {
            dfs(v);
        }
    }
}

int main()
{
    int t,a,b,c;
    int i,j,k;
    int n, m, l;


    scanf("%d",&t);

    while(t--)
    {
        memset(visit , 0 , sizeof(visit));
        memset(g , 0 , sizeof(g));

        scanf("%d %d %d",&n,&m,&l);

        calc = 0;

        //for(int y = 0;y<n+1;y++)
        //{
            //g[i].clear();
            //visit[i]=0;
       // }

        for(i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);
            g[a].push_back(b);
        }

        for(j=0;j<l;j++)
        {
            scanf("%d",&c);
            if(visit[c]==0)
            dfs(c);
        }

        printf("%d\n",calc);
    }
}
