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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 500 + 7;
const ll MOD = 1e9 + 7;


int mx,n,m,k,cnt;

int main()
{
    cin >> n >> m >> k;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        mx = max(mx,a);
        if(a>m){
            cnt++;
        }
    }

    if(mx==m){
        cout << "YES" << endl;
        return 0;
    }
    else if(k==0){
        cout << "NO" << endl;
        return 0; 
    }

    if(cnt<=k){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }





	cout << endl;

	return 0;
}