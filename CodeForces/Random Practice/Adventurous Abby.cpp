
#include<bits/stdc++.h>
using namespace std;


int flightAvailability(int starts[], vector<pair<int,int> > flight_available,int Q, int current_city){
       int j=0;
    int ans=1;
    while(j<flight_available.size()){
        if(flight_available[j].first==current_city || flight_available[j].second==current_city){
            ans++;
             if(flight_available[j].first==current_city){
                     current_city=flight_available[j].second;
            }else{
                current_city=flight_available[j].first;

            }

                    cout<<flight_available[j].first<<" "<<current_city<<" "<<flight_available[j].second<<endl;

        }
        j++;
}

int main(){
  int N,E,Q;
  cin>>N>>E>>Q;
  vector<pair<int,int> > flight_available;
  for(int i=0;i<E;i++){
        int x,y;
  cin>>x>>y;
    flight_available.push_back(make_pair(x,y));
  }

  int starts[Q];
  for(int i=0;i<Q;i++){
    cin>>starts[i];


  }

  for(int i=0;i<Q;i++){

    cout<<flightAvailability(starts,flight_available,Q,starts[i]);
    }
    cout<<ans<<endl;
  }




}
