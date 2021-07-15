
#include<bits/stdc++.h>
using namespace std;



int findTheIndex(int c,pair<int, int> arr[],int n,int checker[],bool used[]){
 for(int i =0;i<n;i++){
    if(checker[i]==-2 && arr[i].second==c && used[i]==false){
        return i;
    }else if(checker[i]==-1 && arr[i].second==c && used[i]==false){
        return i;
    }
 }
 return -5;
}

int replacer(int c,pair<int, int> arr[],int n,int checker[],int x,int m,int painter[],bool used[]){
  for(int i=x+1;i<m;i++){
            int index=findTheIndex(painter[i],arr,n,checker,used);

            if(index!=5){
               return index;
            }
  }
  return -5;
}

int main(){

 int z=0,t;
 cin>>t;

 while(z<t){
      int n,m;
      bool check=false;
      cin>>n>>m;
      int checker[n];
      int painter[m];
      bool used[n]={false};

      pair<int, int> arr[n] ;
      for(int i=0;i<n;i++){
        cin>>arr[i].first;
      }
       for(int i=0;i<n;i++){
        cin>>arr[i].second;

        if(arr[i].first==arr[i].second){
            checker[i]=-1;
        }
        else{
            checker[i]=-2;
        }
      }

      for(int i=0;i<m;i++){
        cin>>painter[i];
      }

      int tracker[m];


      for(int i=0;i<m;i++){
            int index=findTheIndex(painter[i],arr,n,checker,used);
        if( index== -5){

           int index2=replacer(painter[i],arr,n,checker,i, m,painter,used);


           if(index2==-5){
            cout<<"NO"<<endl;
            check=true;
            break;
           }else{

                tracker[i]=index2+1;
                used[i]=true;

             }


        }else{
          //arr[index].first=painter[i];
          tracker[i]=index+1;
          used[i]=true;

        }
      }

if(!check){
    cout<<"YES"<<endl;
for(int i=0;i<m;i++){

    cout<<tracker[i]<<" ";
}
cout<<endl;
}
    z++;
 }

}

