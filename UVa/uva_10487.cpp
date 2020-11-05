///Closest Sum
#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 10000000

int sum [1000016];

int main ()
{
    int n;
    int t = 0;

    while ( scanf ("%d", &n)==1 )
        {
            if(n==0) break;
        int a[10013];

        for ( int i = 0; i < n; i++ )
            scanf ("%d", &a[i]);

        int l= 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = i + 1; j < n; j++ ) sum [l++] = a [i] + a[j];
        }

        int m;
        scanf ("%d", &m);

        printf ("Case %d:\n", ++t);

        for ( int i = 0; i < m; i++ ) {
            int q;
            scanf ("%d", &q);
            int d = INT_MAX;
            int cs;

            for ( int j = 0; j < l; j++ ) {
                int diff = abs (q - sum [j]);
                if ( diff < d ) {d = diff; cs = sum [j];}
            }

            printf ("Closest sum to %d is %d.\n", q, cs);
        }
    }

    return 0;
}
