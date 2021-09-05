#include<bits/stdc++.h>
using namespace std;

void optimalPageReplacement(string pages,int capacity){
  int length = pages.size();

  vector<char> frame;
  int hitcount=0;

  for(int i=0;i<length;i++){
    if(frame.size()<capacity){
        frame.push_back(pages[i]);
    }else{
        bool found=false;
        for(int j=0;j<capacity;j++){
            if(pages[i]==frame[j]){
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
                    if(frame[j]==pages[k]){
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
            frame[target]=pages[i];
        }
    }
  }
  cout<<"No of Hit:"<<hitcount<<endl;
  cout<<"No of Miss:"<<pages.size() - hitcount<<endl;
}

int main(){

string str;
int capacity;

cout<<"Enter reference string:"<<endl;
cin>>str;

cout<<"Enter Frame Capacity:"<<endl;
cin>>capacity;

optimalPageReplacement(str,capacity);

return 0;
}
