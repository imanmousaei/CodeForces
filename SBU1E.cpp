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
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>

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
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vvi;
typedef vector<ll> vll;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}



int main()
{
    ll t;
    cin >> t;
    for(ll i=1;i<=t;i++){
        ll x,d;
        cout << "Case " << i << ": "; 
        cin >> d >> x;
        ll fr = d+1;
        ll mx = ( 1LL << fr ); // 2^(d+1)
        mx--;
        if(x>mx){
            cout << "NO" << endl;
        }
        else{
            cout << "YES ";
            for(ll j=0;d-j>=0;j++){
                ll q = d-j;
                ll pw = (1LL<<q);
                if(x%pw==0){
                    cout <<  j+1 << endl;
                    break;
                }
            }

        }



    }

	return 0;
}