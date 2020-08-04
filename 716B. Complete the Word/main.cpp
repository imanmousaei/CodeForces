#include <iostream>

using namespace std;

typedef long long int I;

bool is[27]; // is ::  A=0 , B=1 , ... , Z=25   ; harchi = ascii - 65
string str;


int count_str(char ch)
{
    int c=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
            c++;
    }
    return c;
}

int count_is()
{
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(!is[i])
            c++;
    }
    return c;
}


bool is_it_there()
{
    for(int i=0;i<str.length();i++)
    {
        int index = int(str[i])-65;

        if(str[i]=='?')
            continue;

        else
        {
            is[index] = true;
        }


    }

    return count_str('?') >= count_is();

}

int first_false()
{
    for(int i=0;i<26;i++)
    {
        if(!is[i])
            return i;
    }

    return -1;

}

void fix_it()
{
    //for(int i=0;i<str.length();i++)
    for(int i=str.length()-1;i>=0;i--)
    {
        /*if(count_str('?') > count_is())
        {
            if(count_str('?') >= count_is()+i+1)

        }

        else*/ if(first_false()!=-1)
        {
            if (str[i] == '?')
            {
                str[i]= char(first_false()+65);
                int index = int(str[i]) - 65;
                is[index] = true;
            }

        }
        else
        {
            if (str[i] == '?')
                str[i]='A';
        }

    }

    cout << str;
}


int main()
{

    cin >> str;

    if(str.length()<26)
        cout << -1;
    else
    {
        if(is_it_there())
            fix_it();
        else
            cout << -1;
    }

    //cout << int(s[0])-65;

    //cout << endl << is[25];

    return 0;
}