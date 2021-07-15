#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;



bool alphabeticalCheck(string str,string mainStr,char alphabate ){

    if(alphabate>'z'){
        cout<<"NO"<<endl;
        return false;
    }

string tempStr1,tempStr2;

if(str.length()==0){
    tempStr1=str+'a';
    tempStr2='a'+str;
}else{
tempStr1=str.insert(0,1,alphabate);
tempStr2=str.insert(str.length()-1,1,alphabate);
}



cout<<"TEMP1:"<<tempStr1<<endl;
cout<<"TEMP2:"<<tempStr2<<endl;


 if(tempStr1 == mainStr || tempStr2== mainStr){
    cout<<"YES"<<endl;
 }else{
  alphabeticalCheck(tempStr1,mainStr,alphabate++);

 }

}


int main(){

int t;
cin>>t;

while(t--){
   string str;
   cin>>str;
   char alphabate='a';

alphabeticalCheck("",str,alphabate);


}

return 0;
}

