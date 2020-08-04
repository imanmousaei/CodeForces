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

string s;
int n;

int first_occurance(char c, int start)
{
    if(start==-1)
        return -1;
    for(int i=start;i<=n;i++)
    {
        if(s[i]==c)
            return i;
    }

    return -1;
}

int main()
{
    cin >> s;
    n = s.length();

    int h = first_occurance('h',0); //cout << h << " ";
    int e = first_occurance('e',h); //cout << e << " ";
    int l1 = first_occurance('l',e); //cout << l1 << " ";
    int l2 = first_occurance('l',l1+1); //cout << l2 << " ";
    int o = first_occurance('o',l2); //cout << o << " ";


    if(h==-1 || e==-1 || l1==-1 || l2==-1 || o==-1)
        cout << "NO";
    else
        cout << "YES";


	return EXIT_SUCCESS;
}
