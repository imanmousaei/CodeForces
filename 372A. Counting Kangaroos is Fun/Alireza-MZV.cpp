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

const int MAX = 5e5 + 7;
const int MOD = 1e9 + 7;

int a[MAX];

int main()
{
    int n, ans;
	cin >> n,  ans = n;

	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a+n);

	int j = 0;
	for(int i = (n+1)/2; i < n; i++)
    {
        //cout << "i = " << i << " , j = " << j << '\t';
        //cout << "a[j] = " << a[j] << " , a[i] = " << a[i] ;

        if(a[j]*2 <= a[i])
        {
            //cout << "  ->  CHECK"  ;
            ans--;
            j++;
        }
        //cout << endl;
    }

	cout << ans;


	return EXIT_SUCCESS;
}
