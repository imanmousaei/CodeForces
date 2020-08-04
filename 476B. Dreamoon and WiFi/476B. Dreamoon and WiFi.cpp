/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP " << x << endl;
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll end1,end2,n,cntqs,dif;
string s1,s2;

ll fact(int k)
{
    if(k<=1)
    {
        return 1;
    }
    return k*fact(k-1);
}

int main()
{
    cin >> s1 >> s2;

    int n = s1.size();// = s2.size();

    for(int i=0;i<n;i++)
    {
        if(s1[i]=='-')
        {
            end1--;
        }
        else if(s1[i]=='+')
        {
            end1++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s2[i]=='-')
        {
            end2--;
        }
        else if(s2[i]=='+')
        {
            end2++;
        }
        else if(s2[i]=='?')
        {
            cntqs++;
        }
    }

    dif = abs(end2-end1);

    if(dif>cntqs || cntqs%2!=dif%2)
    {
        cout << 0;
        return 0;
    }

    if(end1==end2 && cntqs==0)
    {
        cout << 1;
        return 0;
    }
    // 1/2^dif

    ll ways = 0;
    for(int i=0;i<=cntqs;i++) // number of +
    {
        int barayand = i - (cntqs-i);
        if(end2+barayand==end1)
        {
            ways += (fact(cntqs)/fact(i)) / fact(cntqs-i);
            //cout << "#" << i << endl;
        }

    }


    ll U = powl(2,cntqs);
    // ans = ways/U
    string ans="0.";

    for(int i=0;i<=12 && ways!=0 ;i++)
    {
        int q = ways/U;
        ways %= U;
        ways*=10;
        if(i>0)
            ans += q + '0';
    }

    //cout << mk << " " << ways << endl;
    cout << ans;


	return 0;
}
