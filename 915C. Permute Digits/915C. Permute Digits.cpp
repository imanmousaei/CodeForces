/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

string a,b;
int ans[20],n;
int cnt[20],cunt[20];
bool flag = false;

ll s2i(string s)
{
    ll n = 0;
    for(int i = 0; i < s.length(); i ++)
        n = n * 10 + s[i] - '0';

    return n;
}

ll a2i()
{
    ll num = 0;
    for(int i = 0; i < n; i++)
        num = num * 10 + ans[i];

    return num;
}

bool check(int l)
{
    copy(cnt,cnt+10,cunt);

    for(int i=l+1;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(cunt[j])
            {
                cunt[j]--;
                ans[i] = j;

            }
        }
    }

    if(a2i()<=s2i(b))
        return true;

    return false;
}

void biggest(int l=0)
{
    for(int i=l;i<n;i++)
    {
        for(int j=9;j>=0;j--)
        {
            if(cnt[j]>0)
            {
                cnt[j]--;
                ans[i]=j;
            }

        }
    }
}

void print()
{
    for(int i=0;i<n;i++)
    {
        cout << ans[i];
    }
    cout << endl;
}


int main()
{
    cin >> a >> b;

    n = a.size();

    for(int i=0;i<n;i++)
    {
        cnt[a[i]-'0']++;
    }

    if(b.size()>a.size())
    {
        biggest();
        print();
        return EXIT_SUCCESS;
    }

    if(b.size()<a.size())
    {
        cout << -1;
        return EXIT_SUCCESS;
    }

    for(int i=0;i<n;i++)
    {

        for(int j=9;j>=0;j--)
        {
            //print();
            if(j<b[i]-'0'&&cnt[j]>0)
            {
                cout << "j = " << j << endl;
                cnt[j]--;
                ans[i] = j;
                biggest(i+1);
                print();
                return EXIT_SUCCESS;
            }

            else if(j==b[i]-'0'&&cnt[j]>0)
            {
                ans[i] = j;

                print();
                if(check(i))
                {
                    cout << "Yeah " << j << endl;
                    cnt[j]--;
                    break;
                }
            }
        }
    }

    print();

	return EXIT_SUCCESS;
}
