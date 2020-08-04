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

bool is_vowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
    {
        return true;
    }
    return false;
}

vi vowels;
int mx ;

int main()
{
    string str;
    cin >> str;

    int n = str.size();

    for(int i=0;i<n;i++)
    {
        if(is_vowel(str[i]))
        {
            vowels.pb(i);
        }
    }

    int sz = vowels.size();

    if(sz==0)
    {
        cout << n+1;
        return 0;
    }

    mx = vowels[0]+1;

    for(int i=0;i<sz-1;i++)
    {
        int d = vowels[i+1] - vowels[i];
        mx = max(mx,d);
    }

    mx = max(mx,n-vowels[sz-1]);

    cout << mx;

	return EXIT_SUCCESS;
}
