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

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

string s[MAX],answer[MAX];

string i2s(int a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}


bool is_long(string str)
{
    if(str.length()>10)
        return true;
    return false;
}

string abbr(string str)
{
    int n = str.length();
    string ans = "";
    ans += str[0];
    ans += i2s(n-2);
    ans += str[n-1];

    return ans;
}


int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        if( is_long(s[i]) )
            answer[i] =  abbr(s[i]);
        else
            answer[i] = s[i];
    }


    for(int i=0;i<n;i++)
    {
        cout << answer[i] << endl;
    }

	return EXIT_SUCCESS;
}
