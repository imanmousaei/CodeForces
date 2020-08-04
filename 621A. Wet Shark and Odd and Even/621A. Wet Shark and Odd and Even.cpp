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

ll a[MAX];
vector<ll> odd;
ll n,cnt_odd=0,sum_odd=0,sum_even=0,mn=INF;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]&1)
        {
            odd.push_back(a[i]);
            cnt_odd++;
            sum_odd += a[i];
        }
        else
        {
            sum_even += a[i];
        }

    }

    for(int i=0;i<cnt_odd;i++)
    {
        if(mn>odd[i] )
            mn = odd[i];
    }

    if(cnt_odd&1)
        cout << sum_even + sum_odd - mn;
    else
        cout << sum_even + sum_odd;

	return EXIT_SUCCESS;
}
