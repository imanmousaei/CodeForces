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



ll a,b,c,d,h;

int main()
{
    cin>>a>>b>>c>>d;

    cin >> h;

    if(a<=d && a>=c&& b>=c&& b<=d){
        cout<<(b-a)*h;
    }

    else if(c<=b && c>=a && d>=a&& d<=b){
        cout<<(d-c)*h;
    }

    else if(b>=c && b<=d&& a<=c){
        cout<< (b-c)*h;
    }
    else if(a>=c && a<=d&&b>=d){
        cout<<(d-a)*h;
    }
    else if(c>=a && c<=b&&d>=b){
        cout<<(b-c)*h;
    }
    else if(d>=a&& d<=b&&c<=a){
        cout<<(d-a)*h;
    }
    else{cout<<"0";}
    









	cout << endl;

	return 0;
}