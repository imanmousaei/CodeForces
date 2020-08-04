/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define F first
#define S second



bool debug = 0;
#define prin(a) if(debug) cout << #a << " = " << (a) << endl
#define rang(a,b) if(debug) printf("%d -> %d\n", (a), (b))
#define separa() if(debug) cout << endl
#define fr(i,n) for(int i = 0; i<(n); i++)
#define frr(i,a,b) for(int i = (a); i<=(b);i++)

const double PI = acos(-1.0);
const double eps = 1e-9;



using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int n,x,k,a[MAX];
int sum=0,cnt=0,ind;

void print()
{
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}

int main()
{
	cin >> n >> x >> k;
	for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%x==0)
            a[i] = 1;
        else
            a[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        sum +=a[i];
        if(sum == k)
        {
            ind = i;
            cnt = 1;
            break;
        }
    }

    print();

    if(cnt==0)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    for(int i=ind;i<n;i++)
    {
        if(a[i+1]==0)
        {
            cnt++;
            continue;
        }
        else
        {
            if(i-ind>=0 && a[i-ind]==1)
                cnt++;
        }
    }

    cout << cnt;

	return EXIT_SUCCESS;
}
