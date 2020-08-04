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

int cnt_a=0,cnt_A=0,n;
string s;


void to_lower()
{
    n = s.length();
    for(int i=0;i<n;i++)
    {
        if( s[i]>='A' && s[i]<='Z' )
        {
            s[i] = tolower(s[i]);
        }
    }
}

void to_upper()
{
    n = s.length();
    for(int i=0;i<n;i++)
    {
        if( s[i]>='a' && s[i]<='z' )
        {
            s[i] = toupper(s[i]);
        }
    }

}

int main()
{
    cin >> s;
    n = s.length();

    for(int i=0;i<n;i++)
    {
        if( s[i]>='a' && s[i]<='z' )
        {
            cnt_a++;
        }
        else if( s[i]>='A' && s[i]<='Z' )
        {
            cnt_A++;
        }
    }

    if(cnt_a>=cnt_A )
    {
        to_lower();
        cout << s;
    }
    else
    {
        to_upper();
        cout << s;
    }



	return EXIT_SUCCESS;
}
