/* Binary search is applied only on Monotonic function, value should be in incresing order or decresing order
 Complexity =>  N/2k = 1
            => N = 2 pow(k)
            => k = log N
            => O(log N)
*/


// #include<iostream>
// using namespace std;

//     int binarySearch(int arr[], int size, int key){
//         int start = 0;
//         int end = size-1;
//         int mid = start + (end-start) / 2;

//         while(start<=end){
//             if(arr[mid] == key){
//                 return mid;
//             }
//         if(key > arr[mid]){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }

//         mid = start + (end-start) / 2;

//         }
//         return -1;
//     }

// int main() {
//     int arr[6] = {2,3,5,8,11,13};
//     int brr[5] = {5,9,11,13,18};
//     cout<<"Index value of arr : "<<binarySearch(arr, 6, 13)<<endl;
//     cout<<"Index value of brr : "<<binarySearch(brr, 5 , 13)<<endl;

// }





// QUE = First and last position of an element in sorted array
// #include<iostream>
// using namespace std;
//     int firstoccerence(int arr[], int size, int key){
//         int start = 0;
//         int end = size-1;
//         int mid = start + (end-start) / 2;
//         int ans = 0;

//         while(start<=end){
//             if(arr[mid] == key){
//                 ans = mid;
//                 end = mid-1;
//             }else if(arr[mid] > key){
//                 end = mid - 1;
//             }else if( arr[mid] < key){
//                 start = mid + 1;
//             }
//         mid = start + (end-start) / 2;
//         }
//         return ans;
//     }

//     int secondOccerence(int arr[], int size, int key){
//         int start = 0;
//         int end = size-1;
//         int answ = 0;
//         int mid = start + (end-start) / 2; 

//         while(start<=end){
//             if(arr[mid] == key){
//                 answ = mid;
//                 start = mid+1;
//             }else if(arr[mid] > key){
//                 end = mid-1;
//             }else if(arr[mid] < key){
//                 start = mid+1;
//             }
//             mid = start + (end-start) / 2;
//         }
//         return answ;
//     }

// int main() {
//     int arr[10] = {1,2,2,3,3,3,5,6,7,10};
//     cout<<firstoccerence(arr, 10, 3)<<endl;
//     cout<<secondOccerence(arr, 10, 3)<<endl;
// }


//            OR


// #include<iostream>
// using namespace std;

//     int firstoccerence(int arr[], int size, int key){
//         for(int i=0; i<size; i++){
//             if(arr[i] == key){
//                 return i;
//             }
//         }
//         return -1;
//     } 

//     int secondOccerence(int arr[], int size, int key){
//         for(int i=size; i>0; i--){
//             if(arr[i] == key){
//                 return i;
//             }
//         }
//         return -1;
//     }

// int main(){
//     int arr[10] = {1,2,2,3,3,3,5,6,7,10};
//     cout<<firstoccerence(arr, 10, 3)<<endl;
//     cout<<secondOccerence(arr, 10, 3)<<endl;

// }


// Count occerance
// #include<iostream>
// using namespace std;
//     int count(int arr[], int size, int key){
//         int count = 0;
//         for(int i=0; i<size; i++){
//             if(arr[i] == key){
//                 count++;
//             }
//         }
//         cout<<"Number of occerence is : "<< count;
//     }

// int main() {
//     int arr[10] = {1,2,5,3,5,3,5,6,7,5};
//     count(arr, 10, 5);

// }




// Peak Index Mountain Array
// #include<iostream>
// using namespace std;
//     int peakIndexMountainArray(int arr[], int size){
//         int start = 0;
//         int end = size -1;
//         int mid = start + ( end - start)/2;

//         while(start<end){
//             if(arr[mid] < arr[mid+1]){
//                 start = mid + 1;
//             }else{
//                 end = mid;
//             }
//             mid = start + ( end - start)/2;
//         }
//         cout<<"Peak element is : "<< arr[start];   // return value
//         // cout<<"Peak index is : "<< start;        // return index
//     }

// int main() {
//     int arr[7] = {1,2,5,6,8,10,1};
//     peakIndexMountainArray(arr, 7);
// }





// Get pivot element (minimum value)
// #include<iostream>
// using namespace std;

// int getPivot(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     while(start<end){
//         if(arr[mid] >= arr[0]){
//             start = mid+1;
//         }else{
//             end = mid;
//         }
//         mid = start + (end-start)/2;
//     } 
//     return start;
// }

// int main() {
//     int arra[5] = {3,8,10,1,11};
//     cout<<"Pivot element index is : "<<getPivot(arra,5);

// }





// Get pivot element (maximum value)
// #include<iostream>
// using namespace std;

// int getPivot(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     while(start<end){
//         if(arr[mid] >= arr[0]){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     } 
//     return start;
// }

// int main() {
//     int arra[5] = {3,8,10,14,3};
//     cout<<"Pivot element index is : "<<getPivot(arra,5);

// }****




// Search in Rotated sorted array
// #include<iostream>
// using namespace std;

//     int getPivot(int arr[], int size){
//         int start = 0;
//         int end = size-1;
//         int mid = start + (end-start)/2;

//     while(start<end){
//         if(arr[mid] >= arr[0]){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     } 
//     return start;
// }

//     int binarySearch(int arr[], int s, int e, int key){
//         int start = s;
//         int end = e;
//         int mid = start + (end-start) / 2;

//         while(start<=end){
//             if(arr[mid] == key){
//                 return mid;
//             }
//         if(key > arr[mid]){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }

//         mid = start + (end-start) / 2;

//         }
//         return -1;
//     }


// int main() {
//     int size = 5;
//     int arra[] = {7,9,1,2,3};
//     int key = 9;
//     int pivot = getPivot(arra, size);
//     if(key >= arra[pivot] && key <= arra[size-1]){
//         cout<<"Matchanging index is : "<< binarySearch(arra, pivot, size-1, key);
//     }else{
//         cout<<"Matchanging index is : "<< binarySearch(arra, 0, pivot, key);
//     }
// } 





// Sqaure root for binary search
// #include<iostream>
// using namespace std;
//     long long int sqare(int n){
//         int start = 0;
//         int end = n;
//         int ans = 0;
//         int mid = start + (end-start) / 2;
//         while(start<=end){
//             long long int sqare = mid*mid;
//             if(sqare==n){
//                 return mid;
//             }else if(sqare < n){
//                 ans = mid;
//                 start = mid+1;
//             }else{
//                 end = mid -1;
//             }
//             mid = start + (end-start) / 2;
//         }
//         return ans;
//     }

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Square root is : "<<sqare(n);
// } 





// Sqaure root for binary search (Float value)
// #include<iostream>
// using namespace std;
//     long long int sqare(int n){
//         int start = 0;
//         int end = n;
//         int ans = 0;
//         int mid = start + (end-start) / 2;
//         while(start<=end){
//             long long int sqare = mid*mid;
//             if(sqare==n){
//                 return mid;
//             }else if(sqare < n){
//                 ans = mid;
//                 start = mid+1;
//             }else{
//                 end = mid -1;
//             }
//             mid = start + (end-start) / 2;
//         }
//         return ans;
//     }

//     double morePrecision(int n, int precision, int tempSol){
//         double factor = 1;
//         double ans = tempSol;

//         for(int i=0; i<precision; i++){
//             factor = factor/10;
//             for(double j=ans; j*j<n; j = j+factor){
//                 ans = j;
//             }
//         }
//         return ans;
//     }

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int tempSol = sqare(n);
//     cout<<"Answer is : "<<morePrecision(n, 3, tempSol)<<endl;
// }





// Book allocation problem
// #include<iostream>
// using namespace std;

//     bool isPossible(int arr[], int n, int m, int mid){
//         int studentCount = 1;
//         int pageSum = 0;
//         for(int i=0; i<n; i++){
//             if(pageSum + arr[i] <= mid){
//                 pageSum += arr[i];
//             }else{
//                 studentCount++;
//         if(studentCount > m || arr[i] > mid){
//                     return false;
//                 }
//                 pageSum = arr[i];
//             }
//         }
//         return true;
//     }


//     int allocateBook(int arr[], int n, int m){
//         int s = 0;
//         int sum = 0;

//         for(int i=0; i<n; i++){
//             sum += arr[i];
//         }
//         int e = sum;
//         int ans = -1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             if(isPossible(arr,n,m,mid)){
//                 ans = mid;
//                 e = mid - 1;
//             }else{
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// int main() {
//     int arra[4] = {12, 34, 67, 90};
//     cout<<"Answer is arra of : "<<allocateBook(arra, 4, 2)<<endl;;
//     int brra[4] = {5, 17, 102, 11};
//     cout<<"Answer is brra of : "<<allocateBook(brra, 4, 4)<<endl;;

// }





// Painters pertition problem
// #include<iostream>
// using namespace std;

// int main() {


// }




// Agressive cows problem
// #include<iostream>
// using namespace std;

//     bool isPossible(int arr[], int k, int mid){
//         int cowCount = 1;
//         int lastPos = arr[0];

//         for(int i =0; i<k; i++){
//             if(arr[i] - lastPos >= mid){
//                 cowCount++;
//                 if(cowCount == k){
//                     return true;
//                 }
//                 lastPos = arr[i];
//             }
//         }
//         return false;
//     }

//     int aggressiveCows(int arr[], int n, int k){
//         int s = 0;

//         int maxi = -1;
//         for(int i=0; i<n; i++){
//             maxi = max(maxi, arr[i]);
//         }
//         int e = maxi;
//         int ans = -1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             if(isPossible(arr, k, mid)){
//                 ans = mid;
//                 s = mid+1;
//             }else{
//                 e = mid -1;
//             }
//                 mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// int main() {
//     int arra[5] = {4, 2, 1, 3, 6};
//     int k = 2;
//     cout<< "Position is : "<<isPossible(arra, 5, k);
// }