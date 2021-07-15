#include<bits/stdc++.h>
using namespace std;

bool isSubSequence(char str1[], char str2[], long long m, long long n)
{
 // For index of str1 (or subsequence
    long long temp[n]={0};
    long long iteration=n/3;

    long long found=0;



    for(long long k=0;k<iteration;k++){
            long long j = 0;



                for (long long i = 0; i < n && j < m; i++){
                        if(j==m-1){
                                            for (long long i = n-1; i > 0 && j < m; i--){

    if (str1[j] == str2[i] && temp[i]==0 ){

                 j++;
                 temp[i]=1;


 break;
        }




    }
                        }else{
                          if (str1[j] == str2[i] && temp[i]==0 ){

                 j++;
                 temp[i]=1;


        }

                        }


    }

    if(j==m)
    {

        found++;
    }

    }


    // If all characters of str1 were found in str2
    return (found == iteration);
}


int main(){

long long t;
cin>>t;

while(t--){

    long long n;
     cin>>n;
     char str[n];
     cin>>str;

     if(isSubSequence("TMT",str,3,n)){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

}


}

