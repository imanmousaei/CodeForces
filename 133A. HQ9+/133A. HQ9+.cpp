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

bool does_print(string s)
{
    int n = s.length();

    for(int i=0;i<=n;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
            return true;
    }
    return false;
}

int main()
{
    string s;
    //cin >> s;
    getline(cin,s);

    if(does_print(s) )
        cout << "YES";
    else
        cout << "NO";

	return EXIT_SUCCESS;
}
