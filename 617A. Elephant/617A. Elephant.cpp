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



int main()
{
    int cnt=0,x;
    cin >> x;

    cnt = x/5;
    x = x%5;
    cnt += x/4;
    x%=4;
    cnt += x/3;
    x%=3;
    cnt += x/2;
    x%=2;
    cnt += x/1;


    cout << cnt;

	return EXIT_SUCCESS;
}
