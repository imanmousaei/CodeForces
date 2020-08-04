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

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int n,a[MAX],b[MAX],mx1,mx2;
ll sum = 0;

int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }

    sort(b,b+n);


    if(n<=2)
    {
        cout << "YES";
        return EXIT_SUCCESS;
    }

    if(sum<=b[n-1]+b[n-2])
    {
        cout << "YES";
        return EXIT_SUCCESS;
    }

    //cout << sum << " " << b[n-1] << " " << b[n-2] << endl;
    cout << "NO";

	return EXIT_SUCCESS;
}
