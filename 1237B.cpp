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
// memset (arr,0,sizeof(num));

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
int ceil(int d){ 
    if(d>0){
        return (int)((double)d + 0.5);
    }
    else{
        return (int)((double)d - 0.5);
    }
}

int n,a[MAX],b[MAX],cnt=0,t=0;



int main()
{
    cin >> n;


    for(int i=n;i>=1;i--){
        int tmp;
        cin >> tmp;
        a[tmp] = i;
    }
    for(int i=n;i>=1;i--){
        int tmp;
        cin >> tmp;
        b[i] = a[tmp];
        cout << b[i] << " ";
    }
    cout << endl;

    for(int i=n;i>=2;i--){
        while(b[i]>b[i-1]){
            t++;
            i--;
        }
        if(i>=2 && b[i-1]>b[i]){
            cnt += t+1;
            t = 0;
        }
    }


    cout << cnt;



	cout << endl;

	return 0;
}