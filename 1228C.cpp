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

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll sq,x,n,p=1LL;

int main()
{

    cin >> x >> n;

    sq = sqrt(x);

    for (int i=2; i<=min(n,sq); i++) 
    { 
        if (x%i == 0) 
        { 
            if (x/i == i) {
                for(int k=i;k<=n;k+=x){
                    p = (p*i)%MOD;
                }
                //printf("%d ", i);
            } 
  
            else{ 
                for(int k=i;k<=n;k+=x){
                    p = (p*i)%MOD;
                }
                ll t = x/i;
                for(int k=t;k<=n;k+=x){
                    p = (p*t)%MOD;
                    
                }
                //printf("%d %d ", i, n/i); 
            }
        } 
    } 

    for(int i=x;i<=n;i+=x){
        p = (p*i)%MOD;
        
    }


    cout << p << endl;







	cout << endl;

	return 0;
}