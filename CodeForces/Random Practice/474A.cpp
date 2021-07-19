#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define pf printf
#define sf scanf
using namespace std;

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./'";
    string s1;
    int i, j, len;
    char input;
    sf("%c",&input);
    cin >> s1;
    len = s1.length();

    if(input == 'R')
    {
        for(i=0; i<len; i++)
        {
            for(j=0; j<31; j++)
            {
                if(s1[i]== s[j])
                {
                    pf("%c", s[j-1]);
                }
            }
        }
        pf("\n");
    }
    else if(input == 'L')
    {
        for(i=0; i<len; i++)
        {
            for(j=0; j<31; j++)
            {
                if(s1[i]== s[j])
                {
                    pf("%c", s[j+1]);
                }
            }
        }
        pf("\n");
    }
    return 0;
}

