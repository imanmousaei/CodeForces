#include <iostream>
#include <math.h>

#define DELTA 1000000007

typedef long long int I ;

using namespace std;


//* Global variables :

I arr[302];


////////////////////*/


void input_n_num(int n , I arr[])
{
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

}


int a_Mod_n(int a,int n)
{
    if(a<n)
        return a;
    return a%n;
}


bool isPerfectSquare(I a)
{
    float sq = sqrt(a);
    I sqInt = (int)sqrt(a);

    if (  sq != (int)sq )
        return false;

    else if(sqInt*sqInt != a)
        return false;

    else if(a<0)
        return false;

    return true;
}


// arr[i] * arr[i+1] != perfect square  <->  right permutation
int rightPermutations(int startIndex,int endIndex)
{
    int d = endIndex - startIndex + 1 ;
    if(d == 1)
        return 1;
    else if (d==2)
    {

    }


}






int main()
{
    int n;

    cin >> n;

    //input_n_num(n,arr);

    cout << isPerfectSquare(n);



    return 0;
}
