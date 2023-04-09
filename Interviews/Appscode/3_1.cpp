#include<bits/stdc++.h>
using namespace std;

vector<string> vec;
int branch=1;
unordered_map<string,int> mp;
unordered_map<string,int> started;

void add(string str){
if(mp[str]>0){
    return;
}else{
    branch++;
   for(auto m : mp){
     mp[m.first]=branch;
   }
   mp[str]=branch;
   started[str]=branch;
}
}

void modify(string str1,string str2){
   branch++;
   for(auto m : mp){
     if(m.first != str1){
        mp[m.first]=branch;
     }
   }
   mp[str2]=branch;
   started[str2]=branch;
}

bool checkVersion(int version,string str){
if(version>=started[str] && version<=mp[str]){
    return true;
}else{
    return false;
}
}

void printCurrent(){
cout<<endl;
for(auto i : mp){
    cout<<i.first<<" : "<<i.second<<endl;
}
cout<<endl;
}

void getInitialInput(string str){
int first=-1,second=-1;
for(int i=0;i<str.length();i++){
    if(str[i]=='[' || str[i]==' ') first = i+1;
    if(str[i]==']' || str[i]==',') second = i;
    if(first!=-1 && second != -1){
        string s = str.substr(first,second-first);
        mp[s]=1;
        started[s]=1;
        first = -1;
        second = -1;
    }

}

}

void checkOperation(string str){
if(str.find("Add")!=string::npos){
    size_t position = str.find(' ');
    if(position != string::npos){
        string newFeature;
        newFeature =str.substr(position+1,str.length()-position-1);
        add(newFeature);

    }
}else if(str.find("Check version")!=string::npos){
    size_t position = str.find(':');
    if(position != string::npos){
        int secondSpace=-1;
        for(int i=position+1;i<str.length();i++){
            if(str[i]==' ') {
                secondSpace = i;
                break;
            }
        }
        string b,F;
        b = str.substr(position+1,secondSpace-position-1);
        int version = stoi(b);
        F = str.substr(secondSpace+1,str.length()-secondSpace-1);
        if(checkVersion(version,F)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}else if(str.find("Modify")!=string::npos){
    size_t position = str.find(' ');
    if(position != string::npos){
        int secondSpace=-1;
        for(int i=position+1;i<str.length();i++){
            if(str[i]==' ') {
                secondSpace = i;
                break;
            }
        }
        string prev,newF;
        prev = str.substr(position+1,secondSpace-position-1);
        newF = str.substr(secondSpace+1,str.length()-secondSpace-1);
        modify(prev,newF);

    }
}

}

int main(){
string str;
getline(cin,str);
getInitialInput(str);

while(1){
    getline(cin,str);
    checkOperation(str);
}
return 0;
}
