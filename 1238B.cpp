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
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

int q,n,r, x[MAX];

int main()
{

    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> n >> r;
        set<int> s;
        bool wrote = false;
        for(int j=0;j<n;j++){
            int in;
            cin >> in;
            s.insert(in);
        }

        int k=0;
        for(auto t:s){
            x[k] = t;
            //cout << t << " , " ;
            k++;
        }

        if(k==1){
            cout << 1 << endl;
            continue;
        }

        int cnt=1;
        //n = s.size();
        for(int j=k-2;j>=0;j--){


            //cout << j << " : " << x[j] << endl;
            
            if(x[j]<=r*cnt){
                cout << cnt << endl;
                wrote = true;
                break;
            }
            else{
                cnt++;
            }

        }

        if(wrote==false){
        cout << cnt << endl;
        }

    }


    return 0;
}