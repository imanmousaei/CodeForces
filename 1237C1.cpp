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

const ll MAX = 5e4 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }


class P{
    public : 
        int x,y,z,i;
        bool removed = false;
        bool isBetween(P p1,P p2){
            return( p2.x <= x && x >= p1.x &&   p2.y <= y && y >= p1.y &&   p2.z <= z && z >= p1.z );
        }
};

bool compareP(P i1, P i2) 
{ 
    if(i1.x == i2.x){
        if(i1.y==i2.y){
            return i1.z<i2.z;
        }

        return i1.y<i2.y;
    }
    return (i1.x < i2.x); 
} 

P a[MAX];
int n;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i].x >> a[i].y >> a[i].z;
        a[i].i = i;
    }

	cout << endl;

    sort(a,a+n,compareP);

/*
    for(int i=0;i<n;i++){
        cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
    }
    */
    

    for(int i=0;i<n;i++){

        if(a[i].removed){
            continue;
        }

        if(i+2<n && a[i+2].isBetween(a[i],a[i+1])){
            continue;
        }

        //cout <<" @ " << i << " " << a[i+2].isBetween(a[i],a[i+1]) << endl; 

        cout << a[i].i + 1 << " " << a[i+1].i + 1 << endl;
        a[i].removed = a[i+1].removed = true;
    }

    bool nl = false;

    for(int i=0;i<n;i++){
        if(a[i].removed==false){
            cout << a[i].i + 1 << " ";
            if(nl){
                cout << endl;
            }
            nl = !nl;
        }
    }




	return 0;
}