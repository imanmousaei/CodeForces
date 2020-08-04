#include <iostream>

using namespace std;

int n,x[101],y[101]; // x=up , y=down

bool is_even()
{
    int sx=0,sy=0;
    for(int i=0;i<n;i++)
    {
        sx += x[i];
        sy += y[i];
    }

    return sx%2==0 && sy%2==0;

}

bool can_swap()
{

    for(int i=0;i<n;i++)
    {
        if(x[i]%2==1 ^ y[i]%2==1)
        {
            swap(x[i],y[i]);
            if(is_even())
                return true;
        }

    }

    return false;

}

/*
int count_changes()
{
    int cx=0,cy=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==1 )
            cx++;
        if(y[i]%2==1 )
            cy++;
        if(x[i]%2==1 && y[i]%2==1)
        {
            cx--;
        }
    }
    cx %= 2;
    cy %= 2;

    int c = cx + cy;

    if(n==1 && (cx%2==1 || cy%2==1) )
        return -1;

    if(c%2==0)
        return c/2;
    return -1;


}
*/


int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x[i] >> y[i] ;
    }

    //cout << count_changes();

    if(is_even())
        cout << 0;
    else if(can_swap())
        cout << 1;
    else
        cout << -1;



    return 0;
}