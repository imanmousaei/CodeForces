/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

int QAQ(string s)
{
    int cnt=0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(s[i]=='Q' && s[j]=='Q')
            {
                int cntA = count(s.begin()+i, s.begin()+j, 'A');

                //cout << "i = " << i << " j = " << j << " cntA = " << cntA << endl;

                cnt += cntA;
            }
        }
    }

    return cnt;
}

int main()
{
    string s;
    cin >> s;

    cout << QAQ(s);


	return EXIT_SUCCESS;
}
