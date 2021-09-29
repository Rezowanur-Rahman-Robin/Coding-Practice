#include<bits/stdc++.h>
using namespace std;

void printCharArray(string str,int i){
  if(i == str.size()){
    return;
  }
  cout<<str[i]<<" ";
  printCharArray(str,i+1);
}

void reversePrintCharArray(string str,int i){
  if(i == -1){
    return;
  }
  cout<<str[i]<<" ";
  reversePrintCharArray(str,i-1);
}

///another way

void print(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    cout<<input[0];
    print(input+1);
}

void revPrint(char input[]){
      if(input[0]=='\0'){
        return ;
    }
   revPrint(input+1);
   cout<<input[0];
}

int main(){

string str;
cin>>str;
printCharArray(str,0);
cout<<endl;
reversePrintCharArray(str,str.size()-1);
cout<<endl;

char input[] = "abc";
print(input);
cout<<endl;
revPrint(input);

return 0;
}
