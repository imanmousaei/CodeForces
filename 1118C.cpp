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

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

int single,n,mx=0,cnt[MAX],a[15][15];
set<int> v4k,v2k;


int main()
{
    cin >> n;
    for(int i=0;i<n*n;i++){
        int a;
        cin >> a ;
        cnt[a]++;
        mx = max(mx,a);
    }

    //cout << "max = " << mx << endl;

    int not4k = 0;
    int not2k = 0;
    for(int i=0;i<=mx;i++){
        if(cnt[i]==0){
            continue;
        }
        if(cnt[i]%4==0){
            //cout << " ! " << i ;
            v4k.insert(i);

        }
        else if(cnt[i]%2==0){
            v2k.insert(i);
            not4k++;
        }
        else{
            not2k++;
            single = i;
            if(not2k>1){
                cout << "NO" << endl;
                return 0; 
            }
            if(not2k>0 & n%2==0){
                cout << "NO" << endl;
                return 0;
            }

        }

        if(n%2==0 && not4k>0){
            cout << "NO" << endl;
            return 0;
        }

        if(n%2==1 && not4k>2){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    int i=0;
    for(auto f:v4k){
        //cout << " # " << f ;
        a[i][n-i-1] = f;
        a[i][i] = f;
        a[n-i-1][i] = f;
        a[n-i-1][n-i-1] = f;
        i++;

    }
    //cout << endl;

    if(n%2==1){
        int mid = n/2;
        int k = 0;
        a[mid][mid] = single;
        for(auto f =v2k.begin();f!=v2k.end(); f++){
            a[mid][k] = *f;
            a[mid][i-k-1] = *f;
            f++;
            a[k][mid] = *f;
            a[i-k-1][mid] = *f;


        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }





	return 0;
}