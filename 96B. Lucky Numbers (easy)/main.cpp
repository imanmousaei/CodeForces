#include <bits/stdc++.h>

using namespace std;

typedef long long int I;

const int MAX = 1e9 + 1;
/*
//int arr[MAX];
int n,a;
string s,ans;

string i2s(int a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

int c2i(char c)
{
    return c - 48;
}

int counter(int number,int x)
{
    int cnt=0;
    while(number)
    {
        if(number%10 == x)
            cnt++;
        number=number/10;
    }

    return cnt;
}


bool is_super_lucky(int number)
{
    int cnt4=0,cnt7=0;

    if (n&1)
        return false;
    while(number)
    {
        int digit = number%10;
        if(digit == 4)
            cnt4++;
        else if(digit==7)
            cnt7++;
        else
            return false;

        number=number/10;
    }

    return cnt4==cnt7;
}


void fuck_it(string num,int len,int cnt4,int cnt7)
{
    while (cnt4 <= n/2)
    {
        ans += "4";
        cout << "fuck " << ans;
    }

    while (cnt7 <= n/2)
    {
        ans += "7";
        cout << "fuck " << ans;
    }

}

void next_super_lucky_number(int first,string num,int len,int cnt4=0,int cnt7=0)
{
    if(cnt4==n/2 && cnt7==n/2)
    {
		if( >= a)
        {
            cout << num;
            return;
        }
    }

    if(len==0)
        return;

    int t = c2i( s[first] );
    //cout << t;

    if(t>=0 && t<=4)
    {
        if (cnt4 < n/2)
        {
            ans += "4" ;
            //cout << ans;
            next_super_lucky_number(++first,num,--len,++cnt4,cnt7);
        }
        else
            fuck_it(num,len,cnt4,cnt7);
    }

    else if( t>4 && t<=7 )
    {
        if (cnt7 < n/2)
        {
            ans += "7" ;
            //cout << ans;
            next_super_lucky_number(++first,num,--len,cnt4,++cnt7);
        }
        else
            fuck_it(num,len,cnt4,cnt7);
    }

    else
    {
        fuck_it(num,len,cnt4,cnt7);
    }

}



int main()
{
    cin >> a;
    s = i2s(a);
    n = s.length();

    //cout << endl << s << endl << n << endl << s[2];

    if( is_super_lucky(a) )
        cout << a;
    else
    {
        next_super_lucky_number(0,s,n);
        cout << ans;
    }


/*
    if(is_super_lucky(a))
        ans = a;
    else if(n&1)
    {
        ans = next_super_lucky_number(0,s,n+1);
    }
    else
    {
        ans = next_super_lucky_number(0,s,n);
    }
*/

    //cout << "hi " + s;


/*
// if O(n^2) <= 2 seconds -> n<=44721
    while(true)
    {
        cout << i << endl;
        if(is_super_lucky(i) || i>=n+10)
        {
            cout << i;
            break;
        }
        i++;
    }
*/
/*
    if( is_super_lucky(n) )
        cout << "YES\n";
    else
        cout << "NO\n";
*/
/*

    return 0;
}



}
*/

I a;

void next_super_lucky(I num, int cnt4, int cnt7, int n)
{
	if(cnt4==n/2 && cnt7==n/2)
	{
		if(num >= a)
        {
            cout << num;
            exit(0);
		}

		return;
	}

	if(cnt4 < n/2)
		next_super_lucky(num*10+4, cnt4+1, cnt7, n);

	if(cnt7 < n/2)
		next_super_lucky(num*10+7, cnt4, cnt7+1, n);

	return;
}

void fuck(int n)
{
    for(int i = 0; i < n/2; i++)
        cout << 4;
    for(int i = 0; i < n/2; i++)
        cout << 7;
}

int main()
{
	cin >> a;

	I n = 0, num = a;
	while(num)
    {
        n++;
        num /= 10;
    }

	if(n % 2)
    {
        fuck(n+1);
        return 0;
    }

    next_super_lucky(0, 0, 0, n);
    next_super_lucky(0, 0, 0, n+2);

}

