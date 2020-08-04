/**
Coder : Iman Mousaei

Longest non-decreasing subsequence

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;

const int MAX = 5e3 + 7;
const int MOD = 1e9 + 7;

int n,dp[MAX],a[MAX];

void print()
{
    cout << endl;
    for(int j=0;j<n;j++)
    {
        cout << dp[j] << " ";
    }
}


void set_val(int val)
{
    for(int i=0;i<n;i++)
    {
        dp[i] = val;
    }
}


int arr_max(int i) // max of dp from 0 to i
{
    int mx = -1;
    for(int i=1;i<n;i++)
    {
        if(mx<dp[i])
            mx = dp[i];
    }
    return mx;
}

int main()
{
    int mx=1,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        double fake;
        cin >> fake;
    }

    set_val(1);
    dp[0] = 1;

    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(dp[j]+1 > dp[i] && a[j]<=a[i])
            {
                dp[i] = dp[j]+1;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        if(mx<dp[i])
            mx = dp[i];
    }

    //print();
    cout << n-mx;

	return EXIT_SUCCESS;
}
