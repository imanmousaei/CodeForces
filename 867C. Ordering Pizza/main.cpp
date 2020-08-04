#include <iostream>

using namespace std;

int main() {

    int n;
    int S;
    int typeA = 0;
    int typeB = 0;

    cin>>n>>S;

    int *s = new int [n];
    int *a = new int [n];
    int *b = new int [n];


    for(int i=0;i<n;i++)
    {
        cin >> s[i] >> a[i] >> b[i];
    }


    for(int i=0;i<n;i++)
    {
        typeA += s[i] * a[i];
        typeB += s[i] * b[i];
    }


    if(typeA >= typeB)
        cout << typeA;
    else
        cout << typeB;



    return 0;
}