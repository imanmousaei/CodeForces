#include <bits/stdc++.h>

using namespace std;

bool is_triangular(int a)
{
    for(int i=1;i*(i+1)<=2*a;i++)
    {
        if (2*a == i*i + i)
            return true;
    }

    return false;
}

bool is_funky(int n)
{
    for(int i=1;i*(i+1)<=2*n;i++)
    {
        if (is_triangular( n - i*(i+1)/2 ) )
        {
            return true;
        }
    }
    return false;

}


long long tri(int a)
{
	return (a * (a + 1));
}


void f(int n)
{

	n *= 2;
	for(int i = 1 ; i * i <= n ; i++)
    {
		int n1 = n - tri(i);
		int j = sqrt(n1);
		if(j > 0 && tri(j) == n1)
		{
			cout << "YES" ;
			return;
		}
	}
	cout << "NO" ;
	return;
}

/*
int main()
{

	long long n;
	cin >> n;

	f(n);

	return 0;
}
*/




int main()
{
    int n;
    cin >> n;


    if(is_funky(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

