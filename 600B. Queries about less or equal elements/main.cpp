#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 7;

int a[MAX],b[MAX];

int main()
{
    int n,m;

    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }

    sort(a,a+n);

    for(int j=0;j<m;j++)
    {
        int i = upper_bound(a,a+n,b[j]) - a ;
        cout << i << " " ;
    }


    //cout << lower_bound(a,a+n,1) - a ;

    return 0;
}
