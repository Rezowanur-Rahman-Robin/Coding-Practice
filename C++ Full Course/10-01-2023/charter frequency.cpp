#include<iostream>
using namespace std;

int findLength(char s[100]){
    int i=0;
  while(s[i]!='\0'){
    i++;
  }
  return i;
}

void charFreq(char s[100]){
 int n = findLength(s);
 //cout<<n<<endl;

 int frequency[26]={0};
//cout<<frequency[0]<<frequency[1]<<endl;

 for(int i=0;i<n;i++){
    frequency[s[i]-'a']++;
 }
 /*
 for(int i=0;i<26;i++){
    cout<<"i:"<<i<<"    "<<"f[i]:"<<frequency[i]<<endl;
 }

 */
 cout<<endl<<endl;
for(int i=0;i<26;i++){
    if(frequency[i]!=0){
        int asciiVal= i + 'a';
        char ch = char(asciiVal);
        cout<<ch<<":"<<frequency[i]<<endl;
    }
}

}

int main(){

char str[100]="bangladesh";

charFreq(str);


}
