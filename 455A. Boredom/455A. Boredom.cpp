/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = INT_MAX - 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

ll dp[MAX], c[MAX];

int main()
{
	int n, x;
	cin >> n;

	for(int i = 0 ; i < n; i++)
		cin >> x,  c[x]++;

	dp[1] = c[1];
	for(int i = 2; i <= n; i++)
		dp[i] += max(dp[i-1], (c[i]*i)+dp[i-2]);
/*
    for(int i=0;i<=n;i++)
        cout << dp[i] << " ";
*/

    cout << dp[n];

	return EXIT_SUCCESS;
}
