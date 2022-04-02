#include<bits/stdc++.h>
using namespace std;

///PAYPALISHIRINGSTUVWXYZ
class Solution {
public:
    string convert(string s, int numRows){

        string answerString;

       char holder[numRows-1][s.size()];
       int k=0;
       int j=0;
       int maxj=0;
       while(k<s.size()){
        for(int i = 0 ; i< numRows ; i++){

                numRows = numRows == 1 ? 2 : numRows;

            if(j%(numRows-1)==0){
              //cout<<"Y"<<endl;

                holder[i][j]= s[k];

                k++;
            }else{
                //cout<<"N"<<endl;
                int target = numRows-1 - (j % (numRows-1) );
                if(target == i){
                    holder[target][j]= s[k];
                    k++;
                }else{
                    holder[i][j] = 'a';
                }

            }

        }
        j++;
        maxj = maxj<j? j: maxj;
       }


       for(int i = 0; i<numRows ; i++){
        for(int j =0 ; j<maxj ; j++ ){
            cout<<holder[i][j];
            if(holder[i][j] != 'a' ){
                answerString.push_back(holder[i][j]);
            }
        }
        cout<<endl;
       }

return answerString;
    }
};
int main(){

 string str;
 int n;

 cin>>str;

 cin>>n;

 Solution s;
 cout<<s.convert(str,n);


}
