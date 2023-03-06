#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    int a,b,c;
    int i=0;
    while(i<t){

        cin>>a>>b>>c;
        if(a>b){
            if(a>c){
                if(b>c){
                    cout<<c<<" "<<b<<" "<<a<<endl;
                }else{
                    cout<<b<<" "<<c<<" "<<a<<endl;
                }
            }else{
                if(a>b){
                    cout<<b<<" "<<a<<" "<<c<<endl;
                }else{
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }else{
            if(b>c){
                if(a>c){
                    cout<<c<<" "<<a<<" "<<b<<endl;
                }else{
                    cout<<a<<" "<<c<<" "<<b<<endl;
                }
            }else{
                if(a>b){
                    cout<<b<<" "<<a<<" "<<c<<endl;
                }else{
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }

        }


        i++;

    }

}
