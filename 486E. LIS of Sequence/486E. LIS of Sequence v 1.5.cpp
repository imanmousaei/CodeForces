/**
Coder : Iman Mousaei

Accepted
**/


#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

int n ,dp[MAX],dp_prime[MAX] , s[MAX] , s_prime[MAX] , lis , status[MAX] , mps[MAX];

pii arr[MAX];
vector<pii> v;
//map <int,int> mps;

int main()
{
    ___

    cin>>n;
    for(int i = 0 ; i< n ; i++){
        int a;
        cin>>a;
        arr[i]=mp(i,a);
    }

    s[0]=-1*MAX;
    s_prime[0]=-1*MAX;

    for(int i = 1 ; i < n+5 ;i++)
    {
        s[i]=MAX;
        s_prime[i]=MAX;
    }


    // <LIS>
    for(int i = 0 ; i < n ; i++)
    {
        int r = n+1 , l=0;
        while(r-l>1)
        {
            int mid = (l+r)/2;
            if(s[mid]<arr[i].S)
                l=mid;
            else
                r=mid;
        }

        dp[i]=r;
        //cout<<"dp i is : "<<dp[i]<<endl;
        s[r]=arr[i].S;
        lis=max(lis,dp[i]);

    }
    //</LIS>


    //<LDS>
    reverse(arr,arr+n);
    for(int i = 0 ; i < n ; i++)
        arr[i].S *= -1;


    for(int i=0 ; i < n ; i++){
        int r = n+1 , l =0;
        while(r-l>1){
            int mid = (l+r) / 2;
            if(s_prime[mid]<arr[i].S)
                l=mid;
            else
                r=mid;

        }
        dp_prime[i]=r;
        s_prime[r]=arr[i].S;
    }
    // </LDS>


    //// Check
    for(int i = 0 ; i < n ; i++)
    {
        if(dp[i]+dp_prime[n-i-1]-1==lis)
        {
            v.pb(arr[n-i-1]);
        }
        else
        {
            status[arr[n-i-1].F]=1;
        }
    }


    sort(v.begin() , v.end());

    //int sz=v.size();

    for(int i = 0 ; i < v.size() ; i++){
        int k =dp[v[i].F];
        mps[k]++;
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        int k =dp[v[i].F];
        if(mps[k]>1)
        {
            status[v[i].F]=2;
        }
        else
        {
            status[v[i].F]=3;
        }
    }


    for(int i = 0 ; i < n ; i++)
        cout<<status[i];


    return 0;
}
