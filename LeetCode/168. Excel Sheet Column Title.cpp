#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {

        string answer;
        int division,reminder;

        while(columnNumber != 0){
                division = columnNumber/26;

                reminder = columnNumber%26;
                columnNumber = reminder == 0 ? division-1 : division;
                reminder = reminder == 0 ? 26 : reminder;

                answer.push_back(char(reminder + 64));


        }
        reverse(answer.begin(), answer.end());
        return answer;

    }


    ///better way
/*
public:
    string convertToTitle(int n) {
        string s="";

        while(n>0) {
        n--;
       int mod=n%26;
        s+=(mod+65);
        n=n/26;

        }
        reverse(s.begin(),s.end());
        return s;
    }
};
*/
};



int main(){

 int columnNumber;
 cin>>columnNumber;

 Solution s;

 cout<<s.convertToTitle(columnNumber)<<endl;

return 0;
}
