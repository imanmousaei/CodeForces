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

ll lucky_digits(string s)
{
    ll cnt = 0,n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='7' || s[i]=='4')
            {
                cnt++;
            }
    }
    return cnt;
}

bool is_lucky(ll n)
{
    if(n==0)
        return false;

    while(n)
    {
        int d = n%10;
        if(d!=7 && d!=4)
            return false;
        n/=10;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    //cout << n << endl;
    //cout << lucky_digits(str) << endl;

    if( is_lucky( lucky_digits(str) ) )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


	return EXIT_SUCCESS;
}
