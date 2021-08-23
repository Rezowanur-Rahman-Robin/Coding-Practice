#include<bits/stdc++.h>
using namespace std;

int main(){
    ///dynamic
    vector<int> *vc = new vector<int>();

    ///Static
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    vec[1] = 100;
    vec[4] = 1002;
    vec[5] = 1222;

    vec.push_back(40);
    vec.push_back(50);

    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
    cout<<vec[5]<<endl;
    cout<<vec[6]<<endl;

    ///never use [] to insert elements.As the size of the array never be double.


    ///cout<<vec.at(6)<<endl;

    ///vec.at(n) is much much safer than vec[n]



    //pop_back

    vec.pop_back();


    //size
    cout<<vec.size()<<endl;

    //capacity
    ///print the current capacity of the vector;
    cout<<vec.capacity()<<endl<<endl;



///using loop
    vector<int> vec2;

     ///for loop for input in vector
     for(int i=0;i<5;i++){
        vec2.push_back(i+1);
         cout<<vec2.capacity()<<endl<<endl;
    }


    ///for loop for output
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<endl;

    }

    for (auto it = vec2.begin(); it != vec2.end(); it++) {
		cout << *(it) << " ";
	}
	cout<<endl;


	for (auto it : vec2) {
		cout << it << " ";
	}

		cout<<endl;

    ///sort the vector

    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;

    }

    ///from stl


    /*

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(12);
    v.push_back(23);


    	// {10, 20, 12, 23}
	v.erase(v.begin()+1);

		for (auto it : v) {
		cout << it << " ";
	}





	cout<<endl;

	// {10, 20, 12, 23, 35}
	v.erase(v.begin() + 2, v.begin() + 4); // // {10, 20, 35} [start, end)


	// Insert function

	vector<int>v(2, 100); // {100, 100}
	v.insert(v.begin(), 300); // {300, 100, 100};
	v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

	// {10, 20}
	cout << v.size(); // 2

	//{10, 20}
	v.pop_back(); // {10}

	// v1 -> {10, 20}
	// v2 -> {30, 40}
	v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

	v.clear(); // erases the entire vector

	cout << v.empty();





*/



return 0;

}
