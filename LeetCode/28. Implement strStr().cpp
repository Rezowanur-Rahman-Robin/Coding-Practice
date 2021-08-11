#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {

        if(needle.empty()){
            return 0;
        }

        int targetIndex = -1;


        for(int i=0 ; i< haystack.size() ; i++){
            if(haystack[i]==needle[0]){
                targetIndex=i;
                 int k=0;
                for(int j=targetIndex+1;j< targetIndex + needle.size();j++){
                    if(haystack[j] == needle[j-targetIndex]){
                        k++;
                    }else{
                     break;
                    }
                }

                if(k==needle.size()-1 ){
                    return targetIndex;
                }
            }
        }
        return -1;
    }

int main(){

string str1,str2;

cin>>str1>>str2;

cout<<str1<<" "<<str2<<endl;
cout<<strStr(str1,str2)<<endl;

return 0;
}

//better solution
/*
 int strStr(string haystack, string needle) {
        int lenh=haystack.length();
        int lenn=needle.length();
        if (lenn==0) return 0;
        int ind=0,c=0,j=0;
        for(int i=0;i<lenh;i++){
            if(haystack[i]==needle[j]){
                j++;c++;
                if(c==lenn) {
                    return i-c+1;
                }
            }else{
                i=i-c;
               c=0;j=0;
            }
        }
        return -1;
    }
*/
