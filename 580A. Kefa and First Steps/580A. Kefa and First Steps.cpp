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

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int n,a[MAX],dp[MAX],mx=1;

void print()
{
    for(int i=0;i<n;i++)
    {
        cout << dp[i] << " " ;
    }
    cout << endl;
}


int main()
{
    dp[0] = 1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            dp[i] = dp[i-1]+1;
        }
        else
        {
            dp[i] = 1;
        }
    }


    for(int i=0;i<n;i++)
    {
        if(dp[i]>mx)
            mx = dp[i];
    }

    //print();
    cout << mx;



	return EXIT_SUCCESS;
}
