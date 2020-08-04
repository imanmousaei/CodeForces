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

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

int n,cnt;
char p,a;

int main()
{
	cin >> n >> p;

	int cnt = 0;
	for(int i=0;i<n-1;i++)
    {
		cin >> a;
		if(p == a)
            cnt++;
		else
            p=a;
	}

	cout << cnt << endl;

	return EXIT_SUCCESS;
}
