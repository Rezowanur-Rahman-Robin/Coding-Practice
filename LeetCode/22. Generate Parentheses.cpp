#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void addParenthesis(vector<string> &result, string s, int opening, int closing) {
//         if there are no opening or closing brackets then we've got a new combination
        if(opening == 0 && closing == 0) {
            result.push_back(s);
            return;
        }



//         if we can add a closing bracket then add it and decrement closing count
        if(closing > 0){
                cout<<"B";
            addParenthesis(result, s + ")", opening, closing - 1);

        }
//         if we can add an opening bracket then add the opening bracket and decrement opening count.
//         adding an opening bracket also means we can add a closing bracket for it. so increment closing
        if(opening > 0){
                cout<<"A";
            addParenthesis(result, s + "(", opening - 1, closing + 1);

        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        addParenthesis(result, "", n, 0);
        return result;
    }
};


int main(){
int n;
cin>>n;

Solution s;
vector<string> result;

result = s.generateParenthesis(n);

for(int i=0;i<result.size();i++){
    cout<<result.at(i);
}

return 0;
}
