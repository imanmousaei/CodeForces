#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 1;

int n,a[MAX],m,q[MAX],sum[MAX];




int binary_Search(int arr[], int l, int r, int x)
{
   while (r > l)
   {
        int mid = (l+r)/2 ; //l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid]+arr[mid+1] == x)
            return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid]+arr[mid+1] > x)
            return binary_Search(arr, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binary_Search(arr, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return r;
}





int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return -1;
}





int Find(int k, int low, int high)
{
    int l=low, r=high;//,t= (l+r) /2;
    while (r-l>1)
    {
        int mid= (l+r) /2;
        if (sum[mid]==k)
        {
            return mid;
        }
        /*else if (r-1==l)
        {
            return r;
        }*/
        else if (sum[mid]>k)
            r=mid;
        else if (sum[mid]<k)
            l=mid;
    }

    return r;
}






int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sum[0]=0;

    for (int i=1; i<=n; i++)
        sum[i]=sum[i-1]+a[i-1];


    cin >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> q[i];
        cout << Find (q[i], 0, n) << endl;
    }
/*
    for(int i=1;i<=m;i++)
    {
        cout << binary_Search(a,1,n,q[i]) << endl;
    }
*/













    return 0;
}
