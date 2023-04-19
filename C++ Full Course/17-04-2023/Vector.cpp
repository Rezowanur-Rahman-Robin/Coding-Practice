#include<bits/stdc++.h>
using namespace std;
int main(){
/*
vector<int> vec;
for(int i=0;i<5;i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);
}

for(int i=0;i<5;i++){
    cout<<vec.at(i)<<" ";
}
cout<<endl;
vec.pop_back();
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}


///Capacity

vector<int> vec2;

for(int i=0;i<10;i++){
        vec2.push_back(i+1);
        cout<<"Capacity:"<<vec2.capacity()<<endl<<endl;
        cout<<"Size:"<<vec2.size()<<endl<<endl;
}

for(auto it=vec2.begin();it!=vec2.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
///or
for(auto it : vec2){
    cout<<it<<" ";
}
cout<<endl;


vector<int> vec3 = {1,2,3,4,5};
vector<int> vec4 = {1,2,3,4,5};
vec3.erase(vec3.begin()+1,vec3.begin()+4);
//vec.erase(vec.begin()+1,vec.end()-1);
///Swapping
vec3.swap(vec4);
for(auto it : vec3){
    cout<<it<<" ";
}
cout<<endl;

for(auto it : vec4){
    cout<<it<<" ";
}
cout<<endl;
///Clear
///vec4.clear();


///Empty kina
if(vec4.empty()){
    cout<<"Empty"<<endl;
}else{
    cout<<"Not Empty"<<endl;
}


vector<int>vec5={4,2,1,6,7};
//before sort
for(auto it : vec5){
    cout<<it<<" ";
}
cout<<endl;
sort(vec5.begin(),vec5.end());

//after sort
for(auto it : vec5){
    cout<<it<<" ";
}
*/
vector<int> v1 = { 1, 5, 7, 3, 8, 3 };

// declaring destination vectors
vector<int> v2(6);
vector<int> v3(6);

// using copy() to copy 1st 3 elements
copy(v1.begin(), v1.begin()+3, v2.begin());

// printing new vector
cout << "The new vector elements entered using copy() : ";
for(int i=0; i<v2.size(); i++)
cout << v2[i] << " ";

cout << endl;
///insert at an index
v1.insert(v1.begin()+3,2);
for(int i=0; i<v1.size(); i++)
cout << v1[i] << " ";

cout << endl;

return 0;
}
