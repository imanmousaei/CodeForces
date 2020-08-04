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

int p,q,n,cnt=0;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> p >> q;
        if(q-p>=2)
            cnt++;
    }

    cout << cnt;

	return EXIT_SUCCESS;
}
