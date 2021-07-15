#include<bits/stdc++.h>
using namespace std;

int lengthFinder(string input){
 int temp=0;

 for(int i=0;input[i]!='\0' ; i++){
    temp++;
 }
 return temp;
}

int main(){

string str;
cin>>str;

cout<<lengthFinder(str)<<endl;

return 0;
}
