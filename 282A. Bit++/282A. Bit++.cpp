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

int n=0,siz;

void operate(string s)
{
    int sz = s.size();
    for(int i=0;i<sz-1;i++)
    {
        if(s[i]=='+'&&s[i+1]=='+')
        {
            n++;
            return;
        }
        if(s[i]=='-'&&s[i+1]=='-')
        {
            n--;
            return;
        }

    }
}


int main()
{
	cin >> siz;

	for(int i=0;i<siz;i++)
    {
        string s;
        cin >> s;
        operate(s);
    }

    cout << n;

	return EXIT_SUCCESS;
}
