#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

        string addBinary(string a, string b) {

        string res="";
        int i=a.length()-1,j=b.length()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry)
        {  int sum1= (i>=0 && a[i]=='1')?1:0;
           int sum2= (j>=0 && b[j]=='1')?1:0;

		   res= (((sum1+sum2+carry)%2==0)?"0":"1" )+res;
           carry=(sum1+sum2+carry)/2;
           i--;j--;
        }

        return res;

    }
};

int main(){

    string a,b;
    cin>>a;
    cin>>b;

    Solution s;

    string result = s.addBinary(a,b);

    for(int i = 0 ; i<result.size(); i++){
        cout<<result[i];
    }


return 0;
}
