
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

     int p,q;
     cin>>p>>q;
     int a[p];

     for(int i=0;i<p;i++){
        cin>>a[i];
     }
     int j=1;
     int k=1;
     bool isPrinted=false;


     while(j<=q){

              k=0;
          while(k<p-1){
              if(a[k]>=a[k+1]){
            k++;
        }else{
         a[k]++;
         break;
        }

          }



           if(k==p-1){
            cout<<"-1"<<endl;
            isPrinted=true;
            break;
        }





        j++;

     }
     if(!isPrinted){
         cout<<k+1<<endl;
     }







    z++;
 }

}
