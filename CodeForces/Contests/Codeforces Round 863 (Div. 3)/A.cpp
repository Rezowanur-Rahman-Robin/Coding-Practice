#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int len,n,d;
    string number;
    cin>>len>>d;
    cin>>number;
    char nw=char(d+48);

    int i=0;
    for(i=0;i<number.length()-1;i++){
        if(nw=='0'){
            number.insert(number.length(),1,nw);
            break;
        }else if(number[i]<=nw && number[i+1]<=nw){
            number.insert(i,1,nw);
            break;
        }
    }
    if(i==number.length()-1){
        number.insert(number.length(),1,nw);
        cout<<number<<endl;
    }else{
    cout<<number<<endl;
    }

}

return 0;
}
