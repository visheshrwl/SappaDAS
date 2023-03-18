#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;

    cout << "Enter the number you want to find" << endl;
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result == -1)
    {
        cout << "Element not found!!";
    }
    else{
        cout << "Element is found at index \t" <<result;
    }
    
    
    return 0;
}



#include<iostream>
#include<vector>

using namespace std;

vector<int> linearSearch(int arr[], int n, int key) {
    vector<int> indices;
    for(int i = 0; i< n; i++) {
        if(arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main(){
    int arr[] = {4,7,3,8,3,9,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    vector<int> indices = linearSearch(arr, n, key);

    if(indices.size() > 0){
        cout << "The number" << key << "Appears at the following indices: "<<endl;
        for (int i = 0; i < indices.size(); i++)
        {
            cout << indices[i] << " ";
        }
        
    }
    else{
        cout << "The Entered number does not appear in the array"; 
    }

    return 0;
}