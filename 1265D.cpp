#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int n,cnt[10],cnt2[10];

bool check(string s){
    fore(i,1,n-1){
        if(s[i]-s[i-1]!=1){
            return 0;
        }
    }
    return 1;
}

int main(){
    fastIO;
    fore(i,0,3){
        cin >> cnt[i];
        n += cnt[i];
        cnt2[i] = cnt[i];
    }


    int k = 0;
    while(cnt[k]<=0 && k<=n){
    	k++;
    }

    int j = k+1;
    while(cnt[j]<=0 && j<=n){
    	j++;
    }

    bool found1 = 1 , found2 = 1;

    if(cnt[k]<=0){
    	found1 = 0;
    }
    if(cnt[j]<=0){
    	found2 = 0;
    }

    
    string s = to_string(k) , s2 = to_string(j);
    cnt[k]--;
    cnt2[j]--;


    //cerr << s << endl << s2 << endl;

    fore(i,1,n-1){
    	//cerr << s << endl;

    	int last = s[i-1] - '0';
    	if(last-1>=0 && cnt[last-1]>0){
    		s += (char)(last-1+'0');
    		cnt[last-1]--;
    	}
    	else if(cnt[last+1]>0){
    		s += (char)(last+1+'0');
    		cnt[last+1]--;
    	}
    	else{
    		//cout << "NO" << endl;
    		//return 0;
    		//cerr << "# " << i << endl;
    		found1 = 0;
    		break;
    	}
    }

	fore(i,1,n-1){
    	//cerr << s << endl;

    	int last = s2[i-1] - '0';
    	if(last-1>=0 && cnt2[last-1]>0){
    		s2 += (char)(last-1+'0');
    		cnt2[last-1]--;
    	}
    	else if(cnt2[last+1]>0){
    		s2 += (char)(last+1+'0');
    		cnt2[last+1]--;
    	}
    	else{
    		//cout << "NO" << endl;
    		//return 0;
    		found2 = 0;
    		//cerr << "# " << i << endl;
    		break;
    	}
    }

    if(found1){
	    cout << "YES" << endl;

	    for(char c:s){
	    	cout << c << " ";
	    }
	}
	else if(found2){
		cout << "YES" << endl;

	    for(char c:s2){
	    	cout << c << " ";
	    }

	}
	else{
		cout << "NO" << endl;
	}

    //cout << s << endl;


    return 0;
}