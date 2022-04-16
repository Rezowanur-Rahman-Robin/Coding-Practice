 #include<bits/stdc++.h>
using namespace std;

void printPermutations(string str, int i=0 ){

    if(str[i] == '\0'){
        cout<<str<<endl;
        return;
    }

    for(int j=i;str[j]!='\0' ; j++){
        swap(str[i],str[j]);
        printPermutations(str,i+1);
        swap(str[i],str[j]); ///returning back to the actual sequence

    }


}

int main(){

string str = "abcde";

printPermutations(str);

}
