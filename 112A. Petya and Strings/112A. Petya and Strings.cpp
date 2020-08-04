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

string s1,s2;
int n;

int main()
{
    cin >> s1 >> s2;

    int n = s1.length();

    //cout << endl;
    for(int i=0;i<n;i++)
    {
        s1[i] = tolower(s1[i]);
        //cout << s1[i];
    }

    //cout << endl;
    for(int i=0;i<n;i++)
    {
        s2[i] = tolower(s2[i]);
        //cout << s2[i];
    }
    //cout << endl;


    if(s1==s2)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }


    for(int i=0;i<n;i++)
    {
        //cout << endl << a << " " << b << endl;
        if(s1[i]>s2[i])
        {
            cout << 1;
            return EXIT_SUCCESS;
        }
        else if(s1[i]<s2[i])
        {
            cout << -1;
            return EXIT_SUCCESS;
        }
    }


	return EXIT_SUCCESS;
}
