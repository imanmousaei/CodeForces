/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int n,dp[MAX],dp_prime[MAX],s[MAX],s_prime[MAX],lis,st[MAX];
pair<int,int> arr[MAX];
vector < pair<int,int> > v;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        arr[i] = make_pair(i,num);
    }

    s[0] = -1 * INF;
    s_prime[0] = -1 * INF;

    for(int i=0;i<n+7;i++)
    {
        s[i] = INF;
        s_prime[i] = INF;
    }

    for(int i=0;i<n;i++)
    {
        int l=0,r=n+1;
        while(r-l>1)
        {
            int mid = (r+l)/2;
            if(s[mid]<arr[i].second)
                l = mid;
            else
                r = mid;
        }

        dp[i] = r;
        s[r] = arr[i].second;
        lis = max(lis,dp[i]);

    }

    cout << "LIS = " << lis << endl;

    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        arr[i].second *= -1;
    }

    for(int i=0;i<n;i++)
    {
        int l=0,r=n+1;
        while(r-l>1)
        {
            int mid = (r+l)/2;

            if(s_prime[mid]<arr[i].second)
                l = mid;
            else
                r = mid;
        }

        dp_prime[i] = r;
        s_prime[r] = arr[i].second;

    }


    for(int i=0;i<n;i++)
    {
        if(dp[i]+dp_prime[n-i-1] -1 ==lis)
        {
            v.push_back(arr[n-i-1]);
            cout << arr[n-i-1].second << '\t' ;

        }

        else
        {
            st[arr[n-i-1].first] = 1;
            //cout << arr[n-i-1].first << " ";
        }

    }

    //sort(v.begin(),v.end());

/*
    for(int i=0;i<v.size();i++)
    {
        //cout << v[i].first << " " << v[i].second << endl;
    }

    for(int i=0;i<n;i++)
    {
        cout << dp[i] << " " << dp_prime[n-i-1] << endl;
    }
*/


/*
    for(int i=0;i<n+7;i++)
    {
        dp[i] = 0;
        dp_prime[i] = 0;
        s[i] = INF;
        s_prime[i] = INF;
        lis = 0;
    }

    s[0] = -1 * INF;
    s_prime[0] = -1 * INF;


    for(int i=0;i<n;i++)
    {
        int l=0,r=n+1;
        while(r-l>1)
        {
            int mid = (r+l)/2;
            if(s[mid]<v[i].second)
                l = mid;
            else
                r = mid;
        }

        dp[i] = r;
        s[r] = v[i].second;
        lis = max(lis,dp[i]);
    }


    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        v[i].second *= -1;
    }

    for(int i=0;i<n;i++)
    {
        int l=0,r=n+1;
        while(r-l>1)
        {
            int mid = (r+l)/2;

            if(s_prime[mid]<v[i].second)
                l = mid;
            else
                r = mid;
        }

        dp_prime[i] = r;
        s_prime[r] = v[i].second;

    }


    int sz = v.size();

    for(int i=0;i<sz;i++)
    {
        cout<<dp[i]<<' '<<dp[sz-i-1]<<endl;
        if(dp[i]+dp_prime[sz-i-1]-1==lis)
        {
            st[v[i].first] = 3;
        }
        else
        {
            st[v[i].first] = 2;
        }
    }
*/

    cout << "LIS 2 = " << lis << endl;

    for(int i=0;i<n;i++)
    {
        cout << st[i];
    }


	return EXIT_SUCCESS;
}
