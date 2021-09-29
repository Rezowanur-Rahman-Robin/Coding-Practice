#include<iostream>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);;
}


void replaceChar(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='a'){
        input[0] = 'x';
    }
    replaceChar(input + 1);

}

int main(){
  char input[100];
  cin>>input;
  int l = length(input);
  cout<<l<<endl;
  cout<<input<<endl;
  replaceChar(input);
  cout<<input<<endl;

  return 0;
}
