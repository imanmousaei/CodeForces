/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
#define CP(x) cout << "CP " << x << endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;

const ll MAX = 5e4 + 7;
const ll MOD = 1e9 + 7;

string s;
int cnt[100];
ll n;

int first_zero() // return the index of the first i that cnt[i]<1
{
    for(int i=0;i<26;i++)
    {
        if(cnt[i]<1)
        {
            return i;
        }
    }

    return -1;
}

void fillA()
{
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            s[i] = 'A';
        }
    }
}

void solve(int k)
{
    for(int i=k;i<k+26;i++)
    {
        if(s[i]=='?')
        {
            int fz = first_zero();
            if(fz==-1)
            {
                s[i] = 'A';
            }
            else
            {
                cnt[fz]++;
                s[i] = char(fz+'A');
            }
        }
    }

    fillA();

    cout << s;

}


int main()
{
    cin >> s;
    n = s.size();

    if(n<26)
    {
        cout << -1 ;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        CLR(cnt,0);
        //CP(i);
        if(i+25>=n)
        {
            cout << -1;
            return 0;
        }

        for(int j=0;j<26;j++)
        {

            if(s[i+j]=='?')
            {
                cnt[77]++;
            }
            else
            {
                int c = s[i+j] - 'A';
                cnt[c]++;
            }

            ll need = 0;
            for(int l=0;l<26;l++)
            {
                if(cnt[l]==0)
                    need++;
            }

            //cout << need << " " << cnt[77] << endl;

            if(need<=cnt[77]) // halle !
            {
                solve(i);
                return 0;
            }

        }

    }



	return 0;
}
