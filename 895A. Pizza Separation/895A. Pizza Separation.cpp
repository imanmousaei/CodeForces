/**
Coder : Iman Mousaei

Accepted
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

const int MAX = 360 + 7;
const int MOD = 1e9 + 7;

int n,arr[MAX],minn=INF;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int k = 0; k < n; k++)
    {
        int t = 0;
        for(int l = 0; k+l < n; l++)
        {
            t += arr[(k+l)%n];
            minn = min(minn, abs((360-t)-t));
        }
    }

    cout << minn;

	return EXIT_SUCCESS;
}
