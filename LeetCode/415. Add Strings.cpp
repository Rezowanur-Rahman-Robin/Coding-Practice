#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size()-1,m=num2.size()-1,carry=0;
        string ans;
        while(n>=0 && m>=0)
        {
            int sum = (num1[n--]-'0') + (num2[m--]-'0') + carry;
            ans += to_string(sum%10);
            carry = (sum>9)?1:0;
        }
        while(n>=0)
        {
            int sum =  (num1[n--]-'0') + carry;
            ans += to_string(sum%10);
            carry = (sum>9)?1:0;
        }
        while(m>=0)
        {
            int sum =  (num2[m--]-'0') + carry;
            ans += to_string(sum%10);
            carry = (sum>9)?1:0;
        }
        if(carry)   ans += "1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    string s1,s2;

    cout<<"Enter first String:"<<endl;
    cin>>s1;
    cout<<"Enter 2nd String:"<<endl;
    cin>>s2;

    Solution s;
    cout<<s1<<endl<<s2<<endl;
    cout<<s.addStrings(s1,s2);

}
