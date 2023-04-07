#include<bits/stdc++.h>
using namespace std;

bool isTrending(string s){
 return s[s.length()-1]=='#';
}
int getLengthScore(string s){
int uniqueCount = 0;
unordered_map<char,int> mp;
for(i:s){
    mp[i]++;
    if(mp[i]==1) uniqueCount++;
}
return uniqueCount*s.length();
}

string getName(string str){
//cout<<str<<endl;
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
cout<<value<<endl;
cout<<"Trending:"<<trending<<endl;
cout<<"Follower:"<<follower<<endl;
cout<<"LengthScore:"<<lengthScore<<endl<<endl;
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
for(item:t){
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
Tweet* t1=new Tweet("robin 12 <a good boys>");
Tweet* t2=new Tweet("hasan 20 <a good boy>#");
Tweet* t3=new Tweet("nahid 10 <a good boy>#");
Tweet* t4=new Tweet("shihab 20 <a good boy>");
Tweet* t5=new Tweet("aman 12 <a good boy>#");
Tweet* t6=new Tweet("bman 12 <a good boy>");
Tweet* t7=new Tweet("cman 12 <a good boy>");


vector<Tweet*> vec;
vec.push_back(t1);
vec.push_back(t2);
vec.push_back(t3);
vec.push_back(t4);
vec.push_back(t5);
vec.push_back(t6);
vec.push_back(t7);


vec = trendingSort(vec);

for(item : vec){
    item->printTweet();
}

return 0;
}
