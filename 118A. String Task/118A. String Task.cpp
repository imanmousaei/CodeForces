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



int main()
{
    string s,ans="";
    cin >> s;

    for(int i=0;i<s.length();i++)
    {
        s[i] = tolower(s[i]);
        if(s[i]!= 'o' && s[i]!= 'a' && s[i]!= 'u' && s[i]!= 'i' && s[i]!= 'e' && s[i]!='y') // if its not a vowel -> its consonant
        {
            //string temp = "." + s[i];
            //cout << temp << endl;
            ans.append(".");
            ans.append(1,s[i]);
        }
    }


    cout << ans;

	return EXIT_SUCCESS;
}
