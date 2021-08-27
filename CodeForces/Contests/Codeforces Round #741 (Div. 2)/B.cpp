#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (long long i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


string deleteAsmuch(string nums){

    if(nums.size() == 0){
        return "1";
    }
    string tempString = nums;
    for(long long i=0;i<nums.size();i++){

   int firstNumber= int(tempString[i]);

   if(isPrime(firstNumber)){
      tempString.erase(i,1);

      if(isPrime(stoll(tempString))){
          nums.erase(i,1);
                return deleteAsmuch(nums);

         }else{
          i++;
         }

   }

    }



}


int main(){

int t;
cin>>t;
int j=0;

while(j<t){

  int length;
  cin>>length;
  long long number;
  cin>>number;

  string nm = to_string(number);

  nm = deleteAsmuch(nm);

  cout<<stoll(nm)<<endl;

j++;
}




}

