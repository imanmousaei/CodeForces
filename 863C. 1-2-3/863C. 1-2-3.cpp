/**
Programmer : Iman Mousaei

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
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll alice,bob,k,a,b,A[5][5],B[5][5],cura,curb;
pair<int,int> point[10][10]; // point[i][j].F = point of alice when they played (i,j)
bool vis[10][10],flag;

void who_wins(int al,int bb)
{
    if(al==1 && bb==3)
        alice++;
    else if(al==3 && bb==1)
        bob++;
    else if(al>bb)
        alice++;
    else if(bb>al)
        bob++;

}

int main()
{
    cin >> k >> a >> b;

    cura = a;
    curb = b;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i=1;i<=k;i++)
    {
        int aa = cura,bb = curb;
        who_wins(aa,bb);
        if(vis[cura][curb] && i>1 && flag==false)
        {
            int da = alice - point[aa][bb].F;
            int db = bob - point[aa][bb].S;
            flag = true;
            ll q = k/i;

            alice += (q*da);
            bob += (q*db);
            k%=i;
            i=0;
            continue;
        }



        vis[aa][bb] = true;
        point[aa][bb].F = alice;
        point[aa][bb].S = bob;
        cura = A[aa][bb];
        curb = B[aa][bb];
    }



    cout << alice << " " << bob;

	return 0;
}
