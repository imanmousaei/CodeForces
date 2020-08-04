/**
Programmer : Iman Mousaei

dp[i] : max number with i Liters

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define DPT for(int i=1;i<=v;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define er(x) cerr << "# " << #x << " = " << (x) << endl
#define err(x,y) cerr << "# " << (x) << " " << (y) << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e6 + 7;
const ll MOD = 1e9 + 7;

/*
string i2s(ll aa)
{
    string ans="";
    ll b = aa;
    while(b>0)
    {
        int d = b%10;
        b/=10;
        ans+=(d+'0');
    }
    reverse(ans.begin(),ans.end());

    return ans;
}*/

string i2s(ll a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

string Max(string &x,string &y)
{
    int n = x.size() , m = y.size();
    if(x==y)
    {
        return x;
    }
    if(n>m)
    {
        return x;
    }
    if(m>n)
    {
        return y;
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]>y[i])
        {
            return x;
        }
        if(y[i]>x[i])
        {
            return y;
        }
    }
    return x;
}

string dp[MAX];
ll a[17],v,mn=INF,mx;

int main()
{
    cin >> v;

    for(int i=1;i<=9;i++)
    {
        cin >> a[i];
        dp[a[i]] = i2s(i);
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
        for(int j=1;j<i;j++)
        {
            if(a[j]*2<a[i])
            {
                a[i] = INF;
            }
            else if(a[i]*2>a[j])
            {
                a[j] = INF;
            }
        }
    }

    for(int i=mn;i<=v;i++)
    {
        if(dp[i]=="")
        {
            continue;
        }

        for(int j=1;j<=9;j++)
        {
            if(i+a[j]>v)
            {
                continue;
            }
            string tmp = dp[i];
            tmp.append(i2s(j));
            dp[i+a[j]] = Max(dp[i+a[j]],tmp);
            er(tmp);
        }

    }

    if(dp[v]=="")
    {
        cout << -1;
        return 0;
    }

    //DPT;

    cout << dp[v];


	return 0;
}
