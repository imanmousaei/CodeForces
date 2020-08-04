/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

bool is_palindrome(string s)
{
    string str = s;
    reverse(s.begin(),s.end());

    return s==str;
}

bool all(string s)
{
    char c = s[0];
    for(int i=0;i<s.size();i++)
    {
        if(c!=s[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
	string s;
	cin >> s;
    int n = s.size();

    if(all(s))
    {
        cout << 0;
        return 0;
    }

    if(!is_palindrome(s))
    {
        cout << n;
        return 0;
    }

    cout << n-1;


	return EXIT_SUCCESS;
}
