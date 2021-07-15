#include<bits/stdc++.h>
using namespace std;

int numOfLetters(char a,string str){
   int cnt=0;
   for(int i=0;str[i]!='\0';i++){
    if(str[i]==a){
        cnt++;
    }
   }
   return cnt;
}


int main(){

 int z=0,n;
 cin>>n;

 while(z<n){

     string str;
     int m,n;

     cin >>m>>n;
     cin >> str;

     int p=0,q=0;

     for(int i=0;str[i]!='\0';i++){
    if(str[i]=='U'){
        q++;
    }else if(str[i]=='D'){
         q--;
    }else if(str[i]=='R'){
         p++;
    }else if(str[i]=='L'){
         p--;
    }
   }
   if(p==m && q==n){
    cout<<"YES"<<endl;
   }else{

     if(m>0){
        if(n>0){
            if(numOfLetters('R',str)>=abs(m) && numOfLetters('U',str)>=abs(n)){
                cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;
            }
        }else{

             if(numOfLetters('R',str)>=abs(m) && numOfLetters('D',str)>=abs(n)){
                cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;
            }

          }
     }else{

     if(n>0){
            if(numOfLetters('L',str)>=abs(m)  && numOfLetters('U',str)>=abs(n) ){
                cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;
            }
        }else{

             if(numOfLetters('L',str)>=abs(m)  && numOfLetters('D',str)>=abs(n) ){
                cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;
            }

          }
     }

   }







    z++;
 }

}
