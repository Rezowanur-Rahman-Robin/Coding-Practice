#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;

    int k=0;
    while(k<t){
            char str[10000];
            cin.getline(str,10000);
            int length = str.length();
            cout<<length;

            int i=0;
            while(i<length){
                if(str[i]!=' '){
                    count++;
                    int j=i+1;
                    while(str[j]!=' ' && j<length){
                        j++;
                    }
                    i=j;
                }

                i++;
            }
            cout<<"i:"<<i<<"  "<<count<<endl;



        k++;
    }


    return 0;
}
