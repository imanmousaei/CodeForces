#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;

string s,ans;
int l,r,n;

bool exists(string a,int len,int start)
{
    bool f = false;
    string s1 = s.substr(n-1-len,len);
    cout << "s1 = " << s1 << endl;
    if(!s1.compare(a))
        return false;


    for(int i=start;i+len<n-len;i++ )
    {
        string s2 = s.substr(i,len);
        cout << "s2 = " << s2 << endl;
        if (s2.compare(a))
            return true;

    }


    return false;
}




int main()
{
    bool flag = false;

    cin >> s;
    n = s.size();
    //s[n] = '\0';
    //cout << s[n-1] << endl << endl << s.substr(10,n-10) << endl << endl << n << endl << endl;

    for(int i=0;i<=n-1;i++ )
    {
        for(int j=n-i-1;j>0;j--)
        {
            string str = s.substr(i,j);
            cout << i << "  " << j << "  " << str << "  " << exists(str,j,i) << endl;
            if( exists(str,j,i)  )
            {
                //cout << str << endl;
                flag = true;
                break;
            }

        }
    }



    if(!flag)
        cout << "Just a legend";




    return 0;
}
