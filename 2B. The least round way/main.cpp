#include <iostream>

using namespace std;

string way[1002][1002];
int n,matrix[1002][1002];
//int count0 [1002][1002];


void input()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
}


// !!! doesnt work cuz it never stops ; e.g. : row<n & col=n
int least_round_way(int row,int col)
{
    if(row==n-1 && col==n)
    {
        way[row][col] = "R";

        if(matrix[row][col]==0)
            return 1;
        return 0;
    }

    else if(row==n && col==n-1)
    {
        way[row][col] = "D";

        if(matrix[row][col]==0)
            return 1;
        return 0;
    }

    if (  least_round_way(row+1,col) < least_round_way(row,col+1)  )
    {
        way[row][col] = "R";
        return least_round_way(row+1,col);
    }

    way[row][col] = "D";
    return least_round_way(row,col+1);


    //return min(least_round_way(row+1,col),least_round_way(row,col+1));

}



int main()
{
    cin >> n;

    input();

    cout << least_round_way(0,0);

    return 0;
}
