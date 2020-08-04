#include <bits/stdc++.h>

using namespace std;

const int MAX = 3000;

int a[MAX],b[MAX];

int main()
{


    int n,cnt=0;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];

    }


    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(b[i] != a[i])
            cnt++;

    }

    cnt /=2;
    cout << cnt;


    /*
    int n,cnt=0;
    vector<int> numsi;
    vector<int> numsj;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j] && i>j)
            {
                cnt++;
                swap(a[i],a[j]);
                numsi.push_back(i);
                numsj.push_back(j);

            }
        }
    }

    //cout << cnt;

    for(int i=0;i<cnt;i++)
    {
        cout << numsi[i] << " " << numsj[i] << endl;
    }

*/


    return 0;
}
