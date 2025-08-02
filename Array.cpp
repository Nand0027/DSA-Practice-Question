// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i] <<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     int third[15] = {2,7};
//     printArray(third, 15);

//     int forth[10] = {0};
//     printArray(forth, 10);

//     int fifth[10] = {1};
//     printArray(fifth, 10);

//     cout<<sizeof(fifth)/sizeof(int);
// }





// #include<iostream>
// #include<climits>
// using namespace std;

//     int getMin(int num[], int n){
//         int min = INT_MAX;
//         for(int i=0; i<n; i++){
//             if(num[i] < min){
//             min = num[i];
//         }
//         }
//         return min;
//     }

//     int getMax(int num[], int n){
//         int max = INT_MIN;
//         for(int i=0; i<n ;i++){
//             if(num[i] > max){
//             max = num[i];
//         }
//         }
//         return max;
//     }

// int main() {
//     int size;
//     cout<<"Enter array size : ";
//     cin>>size;

//     int num[100];

//     for(int i=0; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<"Maximum value is "<< getMax(num,size) <<endl;
//     cout<<"Minimum value is "<< getMin(num,size) <<endl;
// }





// #include<iostream>
// using namespace std;

// void update(int arr[], int n){
//     cout<<"Inside function"<<endl;
//     arr[0] = 60;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<"Going back to main function"<<endl;
// }

// int main() {

//     int arra[3] = {1, 2, 3};
//     update(arra, 3);

//     cout<<"printing array "<<endl;
//     for(int i=0; i<3; i++){
//         cout<<arra[i]<<" ";
//     }
//     cout<<endl;
// }





// #include<iostream>
// using namespace std;

// void sUm(int arr[], int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum+arr[i];
//     }
//     cout<<"The sum is : "<<sum;
// }

// int main(){
//     int size;
//     cout<<"Enter array size : ";
//     cin>>size;

//     int arra[100];
//     cout<<"Enter array element : ";
//     for(int i=0; i<size ; i++){
//     cin>>arra[i];
//     }
//     sUm(arra, size);

// }

                // OR

// #include<iostream>
// using namespace std;

// int sUm(int arr[], int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum+arr[i];
//     }
//     return sum;
// }

// int main(){
//     int size;
//     cout<<"Enter array size : ";
//     cin>>size;

//     int arra[100];
//     cout<<"Enter array element : ";
//     for(int i=0; i<size ; i++){
//     cin>>arra[i];
//     }
//     cout<<"Sum is : "<<sUm(arra, size);

// }





//   Linear Search
// #include<iostream>
// using namespace std;

//     bool search(int arr[], int size, int keysss){
//         for(int i=0; i<size; i++){
//             if(arr[i] == keysss){
//                 return 1;
//             }
//         }
//             return 0;
//     }


// int main() {
//     int arr[10] = {5, 6, 7, 2, 66, 88, 99, 64, 32, 67};
//     cout<<"Enter element to search it : ";
//     int key;
//     cin>>key;

//     bool found = search(arr, 10, key);

//     if(found) {
//         cout<<"Key is present"<<endl;
//     }else{
//         cout<<"Key is absent"<<endl;
//     }

// }


// Linear Search
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int key) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             return i; // Return the index where the element is found
//         }
//     }
//     return -1; // Element not found
// }

// int main() {
//     int arr[] = {5, 3, 7, 1, 9, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int key;

//     cout << "Enter element to search: ";
//     cin >> key;

//     int index = linearSearch(arr, size, key);

//     if (index != -1) {
//         cout << "Element found at index: " << index << endl;
//     } else {
//         cout << "Element not found in array." << endl;
//     }

//     return 0;
// }



//    Reverse array
// #include<iostream>
// using namespace std;

//     int reverse(int arr[], int size){
//         int start = 0;
//         int end = size-1;
//         while(start<=end){
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//     }

//     void printArray(int arr[] , int n){
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// int main() {
//     int arr[6] = {1,4,5,-2,15,9};
//     int brr[5] = {5,6,7,4,9};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
// }




// //   Alternate Swap
// #include<iostream>
// using namespace std;

//     void swaP(int arr[], int size){
//         for(int i=0; i<size; i+=2){
//             if(i+1 < size){
//                 swap(arr[i], arr[i+1]);
//             }
//         }
//     }

//     int printArray(int arr[] , int n){
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//             cout<<endl;
//     }

// int main() {

//         int arr[5] = {5,4,6,8,2};
//         int brr[10] = {65,8,98,5,32,52,45,98,57,22};

//         swaP(arr, 5);
//         swaP(brr, 10);

//         printArray(arr, 5);
//         printArray(brr, 10);

// }



//            OR   where swap is not working



// #include<iostream>
// using namespace std;

//     void swaP(int arr[], int size){
//         for(int i=0; i<size; i+=2){
//             if(i+1 < size){
//                 int d;
//                 d = arr[i];
//                 arr[i] = arr[i+1];
//                 arr [i+1] = d;
//             }
//         }
//     }

//     int printArray(int arr[] , int n){
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//             cout<<endl;
//     }

// int main() {

//         int arr[5] = {5,4,6,8,2};
//         int brr[10] = {65,8,98,5,32,52,45,98,57,22};

//         swaP(arr, 5);
//         swaP(brr, 10);

//         printArray(arr, 5);
//         printArray(brr, 10);

// }


// Find unit
// #include<iostream>
// using namespace std;

// int findUnit(int arr[], int size){
//     int ans = 0;
//     for(int i = 0; i<size; i++){
//         ans = ans^arr[i];                // XOR Operation
//     }
//     return ans;
// }
// int main(){
//         int arr[5] = {5,4,5,1,1};

//         cout<<"Unit element is: "<<findUnit(arr, 5);
// }



// Unique number of occurrence  28:00
 


// Find duplicate 
// #include<iostream>
// using namespace std;

//     void findDuplicate(int arr[], int size){
//         int ans = 0;

//         for(int i=0; i<size; i++){
//             ans = ans^arr[i];
//         }
//         for(int i=1; i<size; i++){
//             ans = ans^i;
//         }
//         cout<<"Duplicate element is : "<< ans;
//     }

// int main() {

//     int arr[7] = {2,3,4,5,6,1,3};

//     findDuplicate(arr, 7);
// }



// Find all duplicate in array



// #include<iostream>
// using namespace std;

//     void intersection(int arr[], int size, int arr2[], int siz){
//         int i=0;
//         int j=0;
//         while(i< size && j<siz){
//             if(arr[i] == arr2[j]){
//                 cout<<"The element is : "<<arr[i];
//                 i++;
//                 j++;
//             } else if(arr[i] < arr2[j]){
//                     i++;
//             } else{
//                 j++;
//             }
//         }
//     }

// int main() {
//     int arr[3] = {1,2,3};
//     int brr[2] = {3,4};

//     intersection(arr, 3, brr, 2);
// }





// #include<iostream>
// using namespace std;
//     void pairSum(int arr[], int n, int D){
//         for(int i =0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 if(arr[i] + arr[j] == D){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//                 }
//             }
//         }
//     }

// int main() {

//     int arr[6] = {0,1,2,3,4,5};
//     int s = 4;
//     pairSum(arr, 6, s);
// }

//  OR other example

// #include<iostream>
// using namespace std;
//     void pairSum(int arr[], int n, int D){
//         for(int i =0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 if(arr[i] + arr[j] == D){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//                 }
//             }
//         }
//     }

// int main() {

//     int arr[5] = {2,-3,3,3,-2};
//     int s = 0;
//     pairSum(arr, 5, s);
// }




// #include<iostream>
// using namespace std;

// void tripletSum(int aryy[], int size , int tar){
//     for(int i=0; i<size;i++){
//         for(int j=i+1; j<size; j++){
//             for(int k=j+1; k<size;k++){
//                 if(i+j+k == tar){
//                     cout<<i<<" "<<j<<" "<<k<<endl;
//                 }
//             }
//         }
//     }
// }

// int main() {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int target = 12;

//     tripletSum(arr, 8, target);
// }




// #include<iostream>
// using namespace std;

//     void sortOne(int arr[], int size){
//         int left = 0;
//         int right = size-1;

//         while(left < right){

//         while(arr[left] == 0 && left < right ){
//             left++;
//         }
//         while(arr[right] == 1 && left < right){
//             right--;
//         }
//         if(left<right){
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// }

//      int printArray(int arrr[], int n){
//         for(int i=0;i<n; i++){
//             cout<<arrr[i]<<" ";
//         }
//      }

// int main() {
//     int arr[8] = {1,1,0,1,0,0,1,0};
//     sortOne(arr, 8);
//     printArray(arr,8);
// }




#include<iostream>
using namespace std;

    void sortOne(int arr[], int size){
        int left = 0;
        int right = size-1;

        while(left < right){

        if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

     int printArray(int arrr[], int n){
        for(int i=0;i<n; i++){
            cout<<arrr[i]<<" ";
        }
     }

int main() {
    int arr[8] = {1,1,0,1,0,0,1,0};
    sortOne(arr, 8);
    printArray(arr,8);
}


// shot 0  1  2 