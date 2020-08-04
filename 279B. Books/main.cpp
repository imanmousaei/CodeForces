#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 1;

long int n,t;
int a[MAX],sum[MAX];

int middle(int s,int e)
{
    double m = (s+e)/2;
    int mi = int(m);

    if(m>mi && mi+1<=n)
        return mi+1;
    return mi;
}


int bs(int low)
{
    int l=low,r=n-1-low;
    while(r-l>1)
    {
        int mid = (l+r)/2;
        //cout << endl << mid ;
        if(sum[mid]==t)
        {
            return mid;
        }

        else if(sum[mid]>t)
            r = mid;
        else
            l = mid;

    }

    return l;
}


int Binary_Search(int arr[],int x)
{
    int left = 1,right = n;//sizeof(arr)/sizeof(arr[0]) ;

    while(left<=right)
    {
        int mid = middle(left,right);// left + (right-left)/2;
        if(x<=arr[mid])
            right = mid;
        else
            left = mid;
    }

    return right;

}





int main()
{
    cin >> n >> t;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    /*for(int i=0;i<n;i++)
        cout << a[i] << " ";
    */

    sum[0] = 0;
    //cout << endl << sum[0] << " " ;
    for(int i=1;i<=n;i++)
    {
        sum[i] = sum[i-1] + a[i-1];
        cout << sum[i] << " " ;
    }
/*
    int mx = -1;
    cout << endl;
    for(int i=0;i<n;i++)
    {
        if( bs(i) > mx)
            mx = bs(i);
        cout << bs(i);
    }

    cout << endl << endl << mx;
*/
/*
    int it = upper_bound(sum,sum+n-1,t)-sum;

    cout << endl << it << " " << sum[it] << " " ;

    if(sum[it]<=t)
        cout << it;
    else
        cout << it-1;

*/
    int in = Binary_Search(sum,t);

    if(sum[in]<=t)
        cout << in;
    else
        cout << in-1;



    return 0;
}
