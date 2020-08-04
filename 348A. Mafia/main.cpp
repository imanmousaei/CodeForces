/**
Accepted
**/
#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 7;

long long a[MAX],n,sum,mx;


int main()
{
    cin >> n ;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx,a[i]);
    }

    sum = (sum+n-2)/(n-1);

    cout << max(sum,mx);


    return 0;
}

