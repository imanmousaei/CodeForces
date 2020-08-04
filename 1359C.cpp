#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i] << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<double,int> pdi;
typedef pair<ll,ll> pll;

const int INF32 = 1e9;
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 100 + 7;
const ll maxm = 1000 + 7;

int T;
double t,h,c;
pdi bestTemp; // .F = closest temperature , .S = cups

void cmp(double temp,int cups){
	double f = abs(bestTemp.F-t);
	double s = abs(temp-t);

	// ERR(f,s);

	if( f > s || (f==s && cups<bestTemp.S) ){
		bestTemp.F = temp;
		bestTemp.S = cups;
	}
}

bool isGettingClose(double lastTemp, int i,int cups){
	double temp = ( (i+1)*h + i*c ) / (2*i+1);

    double f = abs(lastTemp-t);
	double s = abs(temp-t);

	if( f > s || (f==s && cups<bestTemp.S) ){
		return true;
	}
	return false;
}

int main(){
    fastIO;
    cin >> T;
    while(T--){
    	cin >> h >> c >> t;
    	bestTemp = {h,1};

    	double avg = (h+c)/2;
    	cmp(avg,2);


    	int cups = 3;
    	double lastTemp = h;
    	double i = 1;

    	// ERR(bestTemp.F,bestTemp.S);

    	while(bestTemp.F!=t && isGettingClose(lastTemp,i,cups)){
    		// ER(i);
    		// lastTemp = lastTemp + (c-h) / ( (2*i+3)*(2*i+1) );

    		lastTemp = ( (i+1)*h + i*c ) / (2*i+1);

    		// ER(lastTemp);
    		cmp(lastTemp,cups);
	    	// ERR(bestTemp.F,bestTemp.S);

    		i += 1;
    		cups += 2;
    	}

    	// lastTemp = lastTemp + (c-h) / ( (2*i+3)*(2*i+1) ); 
		lastTemp = ( (i+1)*h + i*c ) / (2*i+1);
		cmp(lastTemp,cups);

    	// ERR(bestTemp.F,bestTemp.S);

    	cout << bestTemp.S << endl;
    	

    }



    return 0;
}