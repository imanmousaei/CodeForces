/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = INT_MAX - 7;

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

int n,a,player[3];

int main()
{
    player[0] = 1;
    player[1] = 2;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==player[0])
        {
            player[1]=6-a-player[1];
            //cout << player[0] << " " << player[1] << endl;
        }
        else if(a==player[1])
        {
            player[0]=6-a-player[0];
            //cout << player[0] << " " << player[1] << endl;
        }
        else
        {
            cout << "NO";
            return EXIT_SUCCESS;
        }


    }

    cout << "YES";



	return EXIT_SUCCESS;
}
