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

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

ll a[MAX], n, m, dp[MAX];

int main()
{
    cin >> n >> m >> a[0];
    dp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        dp[i] = dp[i - 1] + a[i];
        //cout << dp[i] << " ! " ;
    }
    if (n == 1)
    {
        cout << m << endl;
        return 0;
    }
    cout << dp[n - 1] - dp[0] << " ";

    for (int i = 1; i < n; i++)
    {
        ll lf = dp[i - 1];
        ll rt = dp[n - 1] - dp[i];
        ll all = dp[n-1] - a[i] + m;
        //cout << lf << " " << rt << " " << all << endl;
        lf = max(lf,all);
        cout << max(lf, rt) << " ";
    }

    cout << endl;

    return 0;
}