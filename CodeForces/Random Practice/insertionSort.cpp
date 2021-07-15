#include <bits/stdc++.h>
using namespace std;

/* Function to sort an array using insertion sort*/
void insertionSort(string arr)
{
    int i, key, j;
    for (i = 1; i < arr.length(); i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

     for (i = 0; i < arr.length(); i++)
        cout << arr[i];
    cout << endl;
}



/* Driver code */
int main()
{
    string str;
    cin>>str;

    insertionSort(str);


    return 0;
}

