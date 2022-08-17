#include<bits/stdc++.h>
using namespace std;
bool checkVector(vector<int> myVector , int elem){


for(int it : myVector){
if(it == elem){
      return true;
}

}

return false;

}

int main(){
int t;
cin>>t;
vector <int> used;
int n;
long long k;
int counting;
while(t--){
    bool firstTime = true;
    cin>>n>>k;
    counting = 0;
    used.clear();
    for(int i=1;i<n;i++){
              //cout<<counting<<endl;

        for(int j=i+1;j<=n;j++){

            if(((i+k)*j) %4 == 0  ){
              if( (!checkVector(used,i)) && (!checkVector(used,j))){


                          if(firstTime){
                        cout<<"YES"<<endl;
                        cout<<i<<" "<<j<<endl;
                        firstTime=false;


                    }else{
                        cout<<i<<" "<<j<<endl;

                     }
                     used.push_back(i);
                     used.push_back(j);
                         counting++;
                         break;
                    }



            }else if(((j+k)*i) %4 ==0 ){
                       if( (!checkVector(used,i)) && (!checkVector(used,j))){


                          if(firstTime){
                        cout<<"YES"<<endl;
                        cout<<j<<" "<<i<<endl;
                        firstTime=false;

                    }else{
                        cout<<j<<" "<<i<<endl;

                     }
                     used.push_back(i);
                     used.push_back(j);
                         counting++;
                         break;
                    }


            }
        }
    }
    if(counting != n/2){
            //cout<<"Counting:"<<counting<<endl;
        cout<<"NO"<<endl;
    }



}

return 0;
}
