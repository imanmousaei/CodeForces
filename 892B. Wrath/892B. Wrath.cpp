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

const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

int n;
int a[1000005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], a[i] = min(a[i] + 1, i);
    int ans = 0, cur_alive = n;
    for (int i = n; i >= 1; --i)
    {
        if (cur_alive >= i) ++ans;
        cur_alive = min(cur_alive, i - a[i]);
    }
    cout << ans << endl;


	return EXIT_SUCCESS;
}


/* time limit :
int main()
{
    cin >> n;
    int cnt = n;
    for(int i=0;i<n;i++)
    {
        cin >> l[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(l[j]!=-1)
            {
                if(j>=i-l[i] && j!=i)
                {
                    //cout << i << " " << j << " " << l[i] << endl;
                    l[j] = -1;
                    cnt--;
                }
            }
        }
    }


    cout << cnt;

	return EXIT_SUCCESS;
}
*/
