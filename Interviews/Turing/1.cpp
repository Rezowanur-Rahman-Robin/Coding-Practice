#include<bits/stdc++.h>
using namespace std;

bool isNumber(string str){

   for (int i = 0; i < str.length(); i++) {

      if(!isdigit(str[i]))
      return false;
   }
   return true;
}

int main(){

vector<string> vec;
vector<int> result;
int score=0;
string sample;
do{
    cin>>sample;
    vec.push_back(sample);
}while(sample!=";");

for(int i=0;i<vec.size()-1;i++){
    cout<<vec[i]<<endl;

    if(isNumber(vec[i])){
        result.push_back(stoi(vec[i]));
        score += stoi(vec[i]);
    }else if(vec[i]=="+"){
        int nm = result[result.size()-1]+result[result.size()-2];
        result.push_back(nm);
        score += nm;

    }

    else if(vec[i]=="D"){
        int nm = result[result.size()-1] * 2;
        result.push_back(nm);
        score += nm;
    }

    else if(vec[i]=="C"){
        int nm = result.back();
        result.pop_back();
        score -= nm;
    }
    cout<<"Score:"<<score<<endl;

}
cout<<score<<endl;

}
