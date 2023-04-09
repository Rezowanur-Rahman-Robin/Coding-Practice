#include<bits/stdc++.h>
using namespace std;

bool isTrending(string s){
 return s[s.length()-1]=='#';
}
int getLengthScore(string s){
int uniqueCount = 0;
unordered_map<char,int> mp;
for(auto i:s){
    mp[i]++;
    if(mp[i]==1) uniqueCount++;
}
return uniqueCount*s.length();
}

string getName(string str){
string ans="";
for(int i=0;i<str.length();i++){
    if(str[i]==' '){
        ans =str.substr(0,i+1);
        return ans;
    }

}
return ans;
}
string getFollower(string str){
int first,second;
for(int i=0;i<str.length();i++){
    if(str[i]==' ')
        {
            first = i+1;
            break;
        }
}
for(int i=0;i<str.length();i++){
    if(str[i]==' ' && i!=first-1)
        {
            second = i;
            break;
        }
}
return str.substr(first,second-first);
}
string getValue(string str){
    int first,second;
for(int i=0;i<str.length();i++){
    if(str[i]=='<'){
        first = i+1;
    }else if(str[i]=='>'){
        second = i;
        break;
    }
}
return str.substr(first,second-first);
}

class Tweet{

public:
string value;
bool trending;
int lengthScore;
int follower;

Tweet(string v){
value = getName(v);
trending = isTrending(v);
follower = stoi(getFollower(v));
lengthScore = getLengthScore(getValue(v));
}
void printTweet(){
cout<<value<<" "<<follower<<endl;
}
};
bool compare(Tweet* t1,Tweet* t2){
if(t1->lengthScore!=t2->lengthScore){
    return t1->lengthScore>t2->lengthScore;
}else if(t1->follower!=t2->follower){
    return t1->follower>t2->follower;
}else{
    return t1->value<t2->value;
}
}

vector<Tweet*> trendingSort(vector<Tweet*> t){
vector<Tweet*>first,second;
for(auto item:t){
    if(item->trending){
        first.push_back(item);
    }else{
        second.push_back(item);
    }
}
sort(first.begin(),first.end(),compare);
sort(second.begin(),second.end(),compare);
first.insert(first.end(),second.begin(),second.end());
return first;
}

int main(){

string tweet;
vector<Tweet*> vec;
while(1){
    getline(cin,tweet);
    Tweet* t=new Tweet(tweet);
    vec.push_back(t);
    vec = trendingSort(vec);
    for(auto item : vec){
    item->printTweet();
    }
}
return 0;
}
