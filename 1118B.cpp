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

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll n,a[MAX],cnt = 0,odd[MAX],even[MAX];


int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i] ;
    }
    odd[1] = a[1];
    even[0] = a[0];
    even[1] = a[0];

    for(int i=2;i<n;i++){
        if(i%2==1){
            odd[i] = odd[i-2] + a[i];
            even[i] = even[i-1];
        }
        else{
            even[i] = even[i-2] + a[i];
            odd[i] = odd[i-1];
        }


        //cout << i << " " << odd[i] << " ! " << even[i] << endl;
	    //cout << cnt << "\n";
    }
// YEEES

    for(int i=0;i<n;i++){
        
        int od = even[n-1] - even[i];
        int ev = odd[n-1] - odd[i];

        if(i>=1){
            od += odd[i-1];
            ev += even[i-1];
        }


        if(ev==od){
            //cout << i << " ";
            cnt++;
        }

        //cout << i << " @ " << ev << " @ " << od << endl;

        
    }

    cout << cnt << endl;


	return 0;
}