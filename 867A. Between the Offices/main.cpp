#include <iostream>

using namespace std;

int s2f=0,f2s=0,n;
string str;

void count()
{
    for(int i=0;i<=n-2;i++)
    {
        if(str[i]=='S' && str[i+1]=='F')
            s2f++;
        else if(str[i]=='F' && str[i+1]=='S')
            f2s++;

    }
}


int main()
{
    cin >> n;

    cin >> str;

    count();

    if(s2f>f2s)
        cout << "YES";
    else
        cout << "NO";

    //cout << endl << "S2F = " << s2f << endl << "F2S = " << f2s << endl << str[0] << str[1];

    return 0;
}