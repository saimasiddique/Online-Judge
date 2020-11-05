#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDistance = L;
        int lastR = -L, lastD = -L;

        for (int i = 0; i < L; ++i)
        {

            if (S[i] == 'Z')
            {
                minDistance = 0;
                break;
            }

            else if (S[i] == 'R')
            {
                minDistance = min(minDistance, i - lastD);
                lastR = i;
            }

            else if (S[i] == 'D')
            {
                minDistance = min(minDistance, i - lastR);
                lastD = i;
            }
        }
        cout << minDistance << endl;
    }
    return 0;
}
