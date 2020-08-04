#include <iostream>

using namespace std;

int h, m, s, t1, t2;

bool can_reachL()
{
    int t = t1*60;

    while(1)//for(int i=1;i<=12;i++)
    {
        t--;
        if(t<=0)
            t = t+60;
        if(t==h || t==m || t==s)
        {
            return false;
        }

        if(t==t2)
            return true;
    }
}


bool can_reachR()
{
    int t = t1;

    while(1)//for(int i=1;i<=12;i++)
    {
        t++;
        t%=60;
        if(t==h || t==m || t==s)
            return false;
        if(t==t2)
            return true;
    }
}


int main()
{

    cin >> h >> m >> s >> t1 >> t2;

    m %= 60;
    s %= 60;

    t2*=60;

    if(can_reachL()||can_reachR())
        cout << "YES";
    else
        cout << "NO";





    return 0;
}