#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

   vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
        while(k>0 and i>=0){
           num[i] += k;
           k=num[i]/10;
           num[i]%=10;

           i--;
        }
        while(k>0)
        {
            num.insert(num.begin(),k%10);
            k/=10;
        }

        return num;
    }

};

int main(){

vector <int> numbers;
int n;

cin>>n;

for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    numbers.push_back(temp);
}
int k;
cin>>k;

Solution s;

vector <int> answers;

answers=s.addToArrayForm(numbers,k);

for(int i=0;i<answers.size();i++){
    cout<<answers[i]<<" ";
}
cout<<endl;


return 0;
}

