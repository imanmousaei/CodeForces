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

int cntA,cntD;

int main()
{
    int n;
    cin >> n;
	string s;
	cin >> s;

	for(int i=0;i<s.length();i++)
    {
        if( s[i] == 'A' )
            cntA++;
        else
            cntD++;
    }

    if(cntA>cntD)
        cout <<"Anton";
    else if(cntA<cntD)
        cout <<"Danik";
    else
        cout <<"Friendship";

    //cout << cntA << " " << cntD;
    //cout << s.length();


	return EXIT_SUCCESS;
}
