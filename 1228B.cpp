/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <stdio.h>
#include <string.h>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
// memset (num,0,sizeof(num));

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

ll  power(ll a,ll b){
    if(b==1){
        return a%MOD;
    }
    else if(b==0){
        return 1;
    }
    ll ans=1LL;
    if(b%2==1){
        ans = a%MOD;
    }
    b/=2;
    ll p = power(a,b)%MOD;
    ans = ll(ans*p*p)%MOD;

    return ans;
}

int h,w;
ll cnt = 0;
int a[MAX][MAX]; // 1 = white , -1 = black

int main()
{
    cin >> h >> w;
    for(int i=1;i<=h;i++){
        int r;
        cin >> r;
        r++;
        if(a[i][r]==-1){
            cout << 0 << endl;
            return 0;
        }
        a[i][r] = 1;
        while(r--){
            if(a[i][r]==1){
                cout << 0 << endl;
                return 0;
            }
            a[i][r] = -1;
        }
        
    }
    for(int i=1;i<=w;i++){
        int c;
        cin >> c;
        c++;
        if(a[c][i]==-1){
            cout << 0 << endl;
            return 0;
        }
        a[c][i] = 1;
        while(c--){
            if(a[c][i]==1){
                cout << 0 << endl;
                return 0;
            }
            a[c][i] = -1;
        }
        
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if( a[i][j] == 0){
                cnt++;
            }
        }
    }




	cout << power(2,cnt) << endl;

	return 0;
}