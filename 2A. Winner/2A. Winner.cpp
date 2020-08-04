/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;

const int MAX = 1e3 + 7;
const int MOD = 1e9 + 7;
const int INF = MAX + 7;

ll n,mx=0,score[MAX];
map<string,ll> ns,nst;
string winner,name[MAX];

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> name[i] >> score[i];
    }

    for(int i=0;i<n;i++)
    {
        ns[name[i]] = 0;
        nst[name[i]] = 0;
    }

    for(int i=0;i<n;i++)
    {
        ns[name[i]] += score[i];
    }

    for(int i=0;i<n;i++)
    {
        mx = max(mx,ns[name[i]]);
    }

    for(int i=0;i<n;i++)
    {
        nst[name[i]] += score[i];
        if(nst[name[i]]>=mx && ns[name[i]]==mx)
        {
            cout << name[i];
            return 0;
        }
    }


	return EXIT_SUCCESS;
}
