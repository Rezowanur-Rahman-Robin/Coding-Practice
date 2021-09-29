#include<iostream>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);;
}

void removeConsecutiveDuplicates(char input[]){
     if(input[0]=='\0'){
        return;
     }
     if(input[0] != input[1]){
        removeConsecutiveDuplicates(input + 1);
     }else{
        for(int i = 0;input[i]!='\0';i++){
            input[i] = input[i+1];
        }
        removeConsecutiveDuplicates(input);
     }
}

int main(){
  char input[100];
  cin>>input;

  cout<<input<<endl;

  removeConsecutiveDuplicates(input);

  cout<<input<<endl;
  return 0;
}

