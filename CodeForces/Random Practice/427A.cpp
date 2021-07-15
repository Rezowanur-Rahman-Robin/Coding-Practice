#include<iostream>
using namespace std;
int main()
{
    int n,i,s,sum = 0, counter = 0;
    cin >> n;
    for(i = 0 ; i < n; i++)
    {
        cin >> s;
        if(s >= 0)
            sum += s;
        else
        {
            if(sum == 0)
                counter++;
            else
                sum--;
        }
    }
    cout << counter << endl;
    return 0;
}
