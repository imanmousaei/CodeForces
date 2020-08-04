/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = INT_MAX - 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

int cnt1,cnt0;

bool is_dangerous(string s)
{
    int n = s.length();
    for(int i=0;i<=n;i++)
    {
        if(cnt1>=7 || cnt0>=7)
            return true;
        if(s[i]=='1')
        {
            cnt1++;
            cnt0 = 0;
        }
        else
        {
            cnt0++;
            cnt1 = 0;
        }
    }
    return false;
}

int main()
{
    string binary;
    cin >> binary;

    if( is_dangerous(binary) )
        cout << "YES";
    else
        cout << "NO";


	return EXIT_SUCCESS;
}
