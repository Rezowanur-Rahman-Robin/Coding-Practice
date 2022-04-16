#include<bits/stdc++.h>
using namespace std;

int length(char arr[]){

if( arr[0]=='\0'){
    return 0;
}
return 1 + length(arr+1);
}

int convertStringtoInteger(char str[], int n ){
if(n==0){
    return 0;
}
int smallAns = convertStringtoInteger(str, n-1);
int lastElement = str[n-1] - '0' ;
int ans = smallAns * 10 + lastElement;

return ans;
}


int main(){

    char str[] = "12345";

    int n = length(str);

    cout<< convertStringtoInteger(str,n)<<endl;

return 0;

}
