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

int letter[50+7];
ll cnt = 0;

int main()
{
    string str;
    getline(cin,str);
    ll sz = str.length();
    for(int i=0;i<=sz;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            letter[str[i]-'a']++;
    }


    for(int i=0;i<50;i++)
    {
        if(letter[i])
        {
            cnt++;
            //cout << i;
        }
    }

    cout << cnt;

	return EXIT_SUCCESS;
}
