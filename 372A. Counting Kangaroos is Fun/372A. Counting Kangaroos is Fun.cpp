/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = 1e5 + 7;

const int MAX = 5e5 + 7;
const int MOD = 1e9 + 7;

int a,n,cnt = 0;
vector<int> s;
//bool mark[MAX];

void print()
{
    cout << endl;
    for(int i=0;i<n;i++)
    {
        cout << s[i] << " ";
    }
}

/*
void print_mark()
{
    cout << endl;
    for(int i=0;i<n;i++)
    {
        cout << mark[i] << " ";
    }
}
*/

int binarySearch(int a)
{
    int r=n-1,l=0;
    if(s[r]<a)
    {
        //cout << endl << "a = " << a <<" r = " << r << " s[r] = " << s[r];
        return -1;
    }
    while(r-l>1)
    {
        int mid = (r+l)/2;
        if( s[mid]>=a )
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }


    return r;
}


int main()
{
    cin >> n;
    int m = n;
    for(int i=0;i<n;i++)
    {
        //cin >> s[i];
        cin >> a;
        s.push_back(a);
    }

    sort(s.begin(),s.end());

    print();

    int i=n-1;//0;
    while(i>=0) //(i<n)
    {
        int j = binarySearch(s[i]*2);
        //cout << endl << i << " , " << j << " * n = " << n ;

        if(j!=-1)
        {
            //cout << endl << i << " , " << j;
            cnt++;
            cout << endl << s[i] << "  * 2 =  " << 2 * s[i] << " , " << s[j] << " , cnt = " << cnt << endl;

            //mark[i] = true;
            //mark[j] = true;
            if(i<j)
            {
                s.erase(s.begin()+i);
                n--;
                s.erase(s.begin()+j-1);
                n--;
            }
            else
            {
                s.erase(s.begin()+j);
                n--;
                s.erase(s.begin()+i-1);
                n--;
            }
            print();
        }
        else
        {
            i--;
        }


    }

    //print_mark();

    cout << m-cnt;


	return EXIT_SUCCESS;
}
