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

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

int n,a[MAX],dp[MAX],cnt1,cnt0,mx=-1;

int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i])
        {
            cnt1++;
            if(cnt0)
                cnt0--;
        }
        else
        {
            cnt0++;
            mx = max(mx,cnt0);
        }
    }
/*
    dp[0] = !a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]==0)
        {
            dp[i] = dp[i-1]+1;
            if(dp[i]>mx)
            {
                mx = dp[i];
            }
        }
        else
        {
            dp[i] = 1;
        }
    }
*/
    cout << mx + cnt1;

	return EXIT_SUCCESS;
}
