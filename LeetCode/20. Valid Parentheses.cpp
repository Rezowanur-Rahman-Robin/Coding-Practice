#include<bits/stdc++.h>
using namespace std;

      bool isvalid_stack(string str)
    {
        stack<char>s;
        for(auto ch:str)
        {
                if(ch =='(')
                    s.push(')');
                else if( ch == '{')
                    s.push('}');
                else if(ch == '[')
                    s.push(']');
                else
                {
                    if(s.empty()==false && ch==s.top())
                        s.pop();
                    else
                        return false;
                }
        }
        if(s.empty())
        return true;
        else
        return false;
    }

int main(){


string demo;
cin>>demo;
cout<<isvalid_stack(demo)<<endl;



return 0;
}

