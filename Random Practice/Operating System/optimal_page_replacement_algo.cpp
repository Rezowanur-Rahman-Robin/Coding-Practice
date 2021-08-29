#include<bits/stdc++.h>
using namespace std;

void optimalPageReplacement(string str,int capacity){
  int length = str.size();

  vector<char> vec;

  int hitcount=0;

  for(int i=0;i<length;i++){
    if(vec.size()<capacity){
        vec.push_back(str[i]);
    }else{

        bool found=false;
        for(int j=0;j<capacity;j++){
            if(str[i]==vec[j]){
                hitcount++;
                found=true;
                break;
            }
        }

        if(!found){
                int maxdis=0;
                int target;

            for(int j=0;j<capacity;j++){
                bool elementFound= false;
                for(int k=i+1;k<length;k++){
                    if(vec[j]==str[k]){
                            elementFound = true;

                        int distance = k-i;
                        if(distance>maxdis){
                            maxdis = distance;

                            target=j;
                        }
                    }
                }
                if(!elementFound){
                    target = j;
                    break;
                }
            }

            vec[target]=str[i];
        }


    }

    for(int j=0;j<capacity;j++){
        cout<<vec[j]<<" ";
    }
    cout<<endl;
  }

  cout<<hitcount<<endl;
}

int main(){

string str;
int capacity;

cin>>str;
cin>>capacity;
optimalPageReplacement(str,capacity);

return 0;
}
