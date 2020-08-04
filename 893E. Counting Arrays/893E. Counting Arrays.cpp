/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 2e6 + 100;
const int MOD = 1e9 + 7;

int fac[MAX], prv[MAX], p[MAX];

int power(int a,int b){
    if (b == 0)
        return 1;
    int t = power(a, b >> 1);
    t = (1LL * t * t) % MOD;
    if (b & 1)
        t = (1LL * a * t) % MOD;
    return t;
}

int c(int n,int r)
{
    int ret = (1LL * fac[n] * prv[r]) % MOD;
    ret = (1LL * ret * prv[n - r]) % MOD;
    return ret;
}

int main()
{
    fac[0] = 1;
    for (int i = 1; i < MAX; i++)
        fac[i] = (1LL * fac[i - 1] * i) % MOD;
    for (int i = 0; i < MAX; i++)
        prv[i] = power(fac[i], MOD - 2);

    for (int i = 2; i < MAX; i++)
    {
        if (p[i] == 0)
        {
            for (int j = i; j < MAX; j += i)
            {
                p[j] = i;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int ans = power(2, y - 1);

        while (x > 1)
        {
            int k = p[x] , cnt = 0;
            while (x % k == 0)
            {
                x /= k;
                cnt++;
            }

            ans = (1LL * ans * c(cnt + y - 1, y - 1)) % MOD;
        }

        cout << ans << '\n';
    }


	return EXIT_SUCCESS;
}
