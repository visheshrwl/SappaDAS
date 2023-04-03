// #include<iostream>
// using namespace std;


// //Binary Search Will always be performed upon monotonic functions only or you can sort if you want

// // void bubbleSort(int arr[], int n){
// //     for (int i = 0; i < n - 1; i++) {
// //         for (int j = 0; j < n - i - 1; j++) {
// //             if (arr[j] > arr[j+1]) {
// //                 int temp = arr[j];
// //                 arr[j] = arr[j+1];
// //                 arr[j+1] = temp;
// //             }
// //         }
// //     }
// // }

// // void selectionSort(int arr[], int n){
// //     for (int i = 0; i < n - 1; i++) {
// //         int minIndex = i;
// //         for (int j = i + 1; j < n; j++) {
// //             if (arr[j] < arr[minIndex]) {
// //                 minIndex = j;
// //             }
// //         }
// //         int temp = arr[i];
// //         arr[i] = arr[minIndex];
// //         arr[minIndex] = temp;
// //     }
// // }

// // void insertionSort(int arr[], int n){
// //     for (int i = 1; i < n; i++) {
// //         int key = arr[i];
// //         int j = i - 1;
// //         while (j >= 0 && arr[j] > key) {
// //             arr[j+1] = arr[j];
// //             j--;
// //         }
// //         arr[j+1] = key;
// //     }
// // }

// int binarySearch(int arr[], int size, int key){
//         int start = 0;
//         int end = size - 1;
//         int mid = (start + end)/2;

//         while (start<=end)
//         {
//             if(arr[mid] == key){
//                 return mid;
//             }
//             else if(arr[mid] < key){
//                 start = mid + 1;
//             }
//             else if(arr[mid] > key){
//                 end = mid - 1;
//             }

//             mid = (start+end)/2;
//         }
//         return -1;
// }

// int main()
// {
//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,14,16};

//     int index = binarySearch(even, 6, 12);
//     int indexo = binarySearch(odd, 5, 11);

//     cout << "Index of 12 is " <<index <<endl;
//     cout << "Index of 11 is " <<indexo <<endl;

//     return 0;
// }



#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid =start +  (end - start) /2;
    }
    return -1;
}

int main(){
    int arr1[5] = {2,4,6,8,10};
    int arr2[6] = {3,6,9,12,15,18};

    int index1 = binarySearch(arr1, 5, 8);
    int index2 = binarySearch(arr2, 6, 15);

    cout << index1<<endl;
    cout << index2<<endl;

    return 0;
}