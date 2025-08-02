// Reverse Array using vector
// #include<iostream>
// #include<vector>
// using namespace std;

//     vector<int> reverse(vector<int> &array){
//         int start = 0;
//         int end = array.size()-1;
//         while(start<=end){
//             swap(array[start], array[end]);
//             start++;
//             end--;
//         }
//         return array;
//     }

//     int printArray(vector<int> array){
//         cout<<"Array is : ";
//         for(int i=0; i<array.size(); i++){
//             cout<<array[i]<<" ";
//         }
//         cout<<endl;
//     }
  
// int main() {
//    vector<int> arr;
//    arr.push_back(11);
//    arr.push_back(7);
//    arr.push_back(3);
//    arr.push_back(12);
//    arr.push_back(4);
   
//    reverse(arr);
//    printArray(arr);
// }




// Merge Array
// #include<iostream>
// using namespace std;

//     void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
//         int i=0;
//         int j=0;
//         int k=0;
//         while(i<n && j<m){
//             if(arr1[i]<arr2[j]){
//                 arr3[k] = arr1[i];
//                 i++;
//                 k++;
//             }else{
//                 arr3[k] = arr2[j];
//                 j++;
//                 k++;
//             }
//         }

//         // coping element
//         while(i<n){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }
//         while(j<m){
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     void printArray(int array[], int size){
//         cout<<"Array is : ";
//         for(int i=0; i<size; i++){
//             cout<<array[i]<<" ";
//         }
//         cout<<endl;
//     }
  
// int main() {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[4] = {2, 4, 6, 8};
//     int arr3[9] = {0};

//     merge(arr1, 5, arr2, 4, arr3);
//     printArray(arr3, 9); 
// }




// Move Zero Right side
// #include<iostream>
// using namespace std;

//     int moveZero(int arr[], int size){
//         int nonZero = 0;
//         for(int i=0; i<size; i++){
//             if(arr[i] != 0){
//                 swap(arr[i], arr[nonZero]);
//                 nonZero++;
//             }
//         }
//     }
//     void printArray(int array[], int size){
//                 cout<<"Array is : ";
//                 for(int i=0; i<size; i++){
//                     cout<<array[i]<<" ";
//                 }
//                 cout<<endl;
//     }
// int main() {
//     int arr[6] = {4, 0, 2, 0, 0, 8};
//     moveZero(arr, 6);
//     printArray(arr, 6);
// }




// Ratated array
// #include<iostream>
// #include<vector>
// using namespace std;

//     void rotated(vector<int> &nums, int k){
//         vector<int> temp(nums.size());
//         for(int i=0; i<nums.size();i++){
//             temp[(i+k)%nums.size()]= nums[i];
//         }
//         //copy temp into num vector
//         nums = temp;
//     }

//     void printArray(vector<int> &arr){
//         cout<<"Array is : ";
//         for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//         cout<<endl;
// }
  
// int main() {
//     vector<int> array;
//     array.push_back(4);
//     array.push_back(6);
//     array.push_back(9);
//     array.push_back(5);
//     array.push_back(2);
//     int k = 3;

//     rotated(array, k);
//     printArray(array);
// }




// Check Array are sorted or rotated
// #include<iostream>
// #include<vector>
// using namespace std;
     
//     bool check(vector<int> &num){
//         int count = 0;
//         for(int i=1; i<num.size(); i++){
//             if(num[i-1] > num[i]){
//                 count++;
//             }
//         }
//         if(num[num.size()-1] > num[0]){
//             count++;
//         }
//         return count <= 1;
//     }

// int main() {
//     vector<int> array;
//     array.push_back(3);
//     array.push_back(4);
//     array.push_back(5);
//     array.push_back(1);
//     array.push_back(2);

//     cout<<check(array);
// }




// Sum of two Array
// #include<iostream>
// #include<vector>
// using namespace std;

// void printArray(vector<int> &arr){
//     cout<<"Array is : ";
//     for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
// }
//     cout<<endl;
// }

// vector<int> reverse(vector<int> arr){
//     int s = 0;
//     int e = arr.size()-1;

//     while(s<e){
//         swap(arr[s++], arr[e--]);
//     }
//     return arr;
// }

//     vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m,vector<int> &ans){
//         int i=n-1;
//         int j=m-1;
        
//         int carry = 0;

//         while(i>=0 && j>=0){
//             int val1 = a[i];
//             int val2 = b[j];

//             int sum = val1+val2+carry;
//             carry = sum/10;
//             sum = sum%10;
//             ans.push_back(sum);
//             i--;
//             j--;
//         }

//         // Overlap the array(First array is large)
//         while(i>=0){
//             int sum = a[i] + carry;
//             carry = sum/10;
//             ans.push_back(sum);
//             i--;
//         }

//         // Second case if second array is large
//         while(j>=0){
//             int sum = b[j]+carry;
//             carry = sum/10;
//             sum = sum%10;
//             ans.push_back(sum);
//             j--;
//         }

//         // Carry is hear
//         while(carry != 0){
//             int sum =  carry;
//             carry = sum/10;
//             sum = sum%10;
//             ans.push_back(sum);
//         }
//        return reverse(ans);
//     }
  
// int main() {
//     vector<int> arr1;
//     arr1.push_back(5);
//     arr1.push_back(3);
//     arr1.push_back(9);
//     arr1.push_back(7);
//     arr1.push_back(8);

//     vector<int> arr2;
//     arr2.push_back(6);
//     arr2.push_back(3);
//     arr2.push_back(4);  

//     vector<int> ans;
//     findArraySum(arr1, arr1.size(), arr2, arr2.size(),ans);
//     printArray(ans);
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr1[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     int m;
//     cin >> m;
//     int arr2[m];
//     for (int i = 0; i < m; i++) {
//         cin >> arr2[i];
//     }

//     int arr3[n + m]; // Merged array
//     int k = 0;

//     // Copy arr1 into arr3
//     for (int i = 0; i < n; i++) {
//         arr3[k++] = arr1[i];
//     }

//     // Copy arr2 into arr3
//     for (int i = 0; i < m; i++) {
//         arr3[k++] = arr2[i];
//     }

//     // Print unique elements
//     for (int i = 0; i < k; i++) {
//         bool isUnique = true;
//         for (int j = 0; j < i; j++) {
//             if (arr3[i] == arr3[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique) {
//             cout << arr3[i] << " ";
//         }
//     }

//     return 0;
// }





// // You are using GCC
// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;
//     int arr1[n];
//     for(int i=0; i<n; i++){
//         cin>>arr1[i];
//     }
    
//     int m;
//     cin>>m;
//     int arr2[m];
//     for(int i=0; i<m; i++){
//         cin>>arr2[i];
//     }
    
//     int size;
//     if(n>m){
//         size = n;
//     }else{
//         size = m;
//     }
    
//     int arr3[size];
  
//     for(int i=0;i<size;i++){
//         int val1=(i<n)?arr1[i]:0;
//         int val2=(i<m)?arr2[i]:0;
//         arr3[i]=val1+val2;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr3[i]<<" ";
//     }
    
//  }