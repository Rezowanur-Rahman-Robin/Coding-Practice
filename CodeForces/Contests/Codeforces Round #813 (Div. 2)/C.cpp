
#include<bits/stdc++.h>
using namespace std;


bool increasing(vector<int>a){
	for(int i=1;i<a.size();i++){
		if(a[i]<a[i-1]){
			return false;
			break;
		}
	}
return true;
}
int getMax(map<int, int> ab)
{
    int maximum=0, maxContainer;
    for(auto it:ab){
        if(it.second>maximum){
            maximum=it.second;
            maxContainer = it.first;
        }
    }

    return maxContainer;
}



int main(){
int t;
cin>>t;

while(t--){
    levelend:
    int n;

    cin>>n;
    vector<int> vec;
    int temp;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
        if(mp.count(temp)){
            mp[temp]++;
        }else{
            mp[temp]=1;
         }
    }



    int counter=0;

    if(increasing(vec)){
        cout<<counter<<endl;
    }else{
        level:
        int tempMax = getMax(mp);
        //cout<<tempMax<<endl;

        int x=tempMax;
        counter++;

        for(int i =0;i<n;i++){
           if(vec[i]==x){
            vec[i]=0;
           }
        }
        if(increasing(vec)){
            cout<<counter<<endl;
            goto levelend;

        }else{
            mp[tempMax] = 0;
            goto level;
        }

    }




}


return 0;
}

