#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 7 ;

int main()
{
    pair <int,int> ms[MAX]; // money , s = friendship factor
    int n,d,Min = 0,ff=0;
    cin >> n >> d;

    for(int i=0;i<n;i++)
    {
        cin >> ms[i].first; //money
        cin >> ms[i].second; // friendship factor
    }


    sort(ms,ms+n);

    //ff = ms[0].first;

    for(int i=0;i<n;i++)
    {
         if(ms[i].first - ms[0].first >=d)
         {
            if( ms[i].second>ms[0].second)
            {
                ff += ms[i].second ;
                ff -= ms[0].second;
            }

         }
         else
         {
             ff += ms[i].second;
         }
    }

    cout << ff;

    return 0;
}
