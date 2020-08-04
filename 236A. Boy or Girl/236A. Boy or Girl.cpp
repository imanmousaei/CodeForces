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

const int MAX = 50 + 7;
const int MOD = 1e9 + 7;

int c[MAX],cnt,n;
string s;


int main()
{
    cin >> s;

    n = s.length();
    for(int i=0;i<n;i++)
    {
        int temp = s[i] - 'a';
        c[temp]++;
    }

    for(int i=0;i<26;i++)
    {
        //cout << c[i] << " " << endl;
        if(c[i]>0)
            cnt++;
    }


    //cout << cnt;

    if(cnt&1)
    {
        cout << "IGNORE HIM!";
        return EXIT_SUCCESS;
    }

    cout <<  "CHAT WITH HER!";

	return EXIT_SUCCESS;
}
