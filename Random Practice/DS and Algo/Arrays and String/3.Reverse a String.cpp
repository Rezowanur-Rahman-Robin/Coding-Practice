#include<bits/stdc++.h>
using namespace std;

void reversePrintString(string str){
 int l=str.length();

 for(int i=l-1;i>=0;i--){
    cout<<str[i];
 }
}

void reverseTheActualString(string str){
int l=str.length();
int s=0,e=l-1;

while(s<=e){
    swap(str[s],str[e]);
    s++;
    e--;
}
cout<<str;

}

int main(){

string input;
cin>>input;


reversePrintString(input);
cout<<endl;
reverseTheActualString(input);

return 0;
}
