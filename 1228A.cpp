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
#include <stdio.h>
#include <string.h>i

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
//memset (num,0,sizeof(num));

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

int l,r;
bool num[15];

bool digitDif(int a){
    memset (num,0,sizeof(num));
    while(a>0){
        int d = a%10;
        if(num[d]==true){
            //cout << " @ " << d << endl;
            return false;
        }
        num[d] = true;
        a/=10;
    }
    return true;
}

int main()
{
    cin >> l >> r;

    for(int i=l;i<=r;i++){
        //cout << i << " " << digitDif(i) << endl;
        if(digitDif(i)==true){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;


	return 0;
}