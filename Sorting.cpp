//  Selection sort  com - O(n^2)
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

//     int selectionSort(int arr[], int size){
//         for(int i=0; i<size-1; i++){
//             int minIndex= i;
//             for(int j=i+1; j<size; j++){
//             if(arr[minIndex] > arr[j])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }
//     void printArr(int arr[], int size){
//         for(int i=0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// int main() {
//     int arr[6] = {6,4,2,8,3,9};
//     int size = 6;
//     selectionSort(arr, size);
//     printArr(arr, size);
// }



// Bubble sort    com - O(n^2)
// #include<iostream>
// using namespace std;

//     int selectionSort(int arr[], int size){
//         for(int i=0; i<size-1; i++){           // i=1, i<size
//             for(int j=0; j<size-i-1; j++){     // j=0, j<size-i
//                 if(arr[j] > arr[j+1])
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }  

//     void printArr(int arr[], int size){
//                 for(int i=0; i<size; i++){
//                     cout<<arr[i]<<" ";
//                 }
//             }
  
// int main() {
//     int arr[6] = {6,4,2,8,3,9};
//     int size = 6;
//     selectionSort(arr, size);
//     printArr(arr, size);
// }



// Inseration sort  com - O(n^2)
#include<bits/stdc++.h>
using namespace std;

    int insertionSort(int arr[], int size){
            for(int i=1; i<size; i++){
                int temp = arr[i];
                int j=i-1;
                while(j>=0){
                    if(arr[j] > temp){
                        arr[j+1] = arr[j];
                        j--;
                    }else{
                        break;
                    }
                }
                arr[j+1] = temp;
            }
        }  
    
        void printArr(int arr[], int size){
                    for(int i=0; i<size; i++){
                        cout<<arr[i]<<" ";
                    }
                }
  
int main() {
    int arr[6] = {2,4,9,8,2,1};
        int size = 6;
        insertionSort(arr, size);
        printArr(arr, size);
   
}