
#include<bits/stdc++.h>
using namespace std;

int countFrequency(string &main_string,string &patttern_string){
int M = patttern_string.length();
int N = main_string.length();
int count_pattern=0;
int j;

for(int i=0;i<=N-M;i++){

    for( j=0;j<M;j++){
        if(main_string[i+j]!= patttern_string[j]){
            break;
        }
    }
    if(M==j){
        count_pattern++;
    }
}
return count_pattern;
}

int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){

             string A,B;
             cin>>A;
             cin>>B;



       cout<<"case "<<i+1<<": "<<countFrequency(A,B)<<endl;

        i++;
    }


}
