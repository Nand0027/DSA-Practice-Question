// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     cout<<sum;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//         int a = 0;
//         int b = 1;
//         cout<<a<<" "<<b<<" ";
//     for(int i=1; i<=n; i++){
        
//         int sum = a+b;
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter a nuber : ";
//     cin>>n;
//     bool prime = 1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             prime = 0;
//             break;
//         }
//     }
//     if(prime == 0){
//         cout<<"Not a prime ";
//     }else{
//         cout<<"Number is prime";
//     }
// }




// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=0; i<5; i++){
//         cout<<" HI "<<endl;
//         cout<<" Hello "<<endl;
//         continue;
//         cout<<" unreachable "<<endl;
//     }

// }




// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int product = 1;
//     int sum = 0;

//     while(n!=0){
//     int digit = n%10;
//     product = product*digit;
//     sum = sum+digit;
//     n= n/10;
//     }
//     int ans = product-sum;
//     cout<<ans;
//     return ans;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     int count = 0;
//     while(n!=0){
//         if(n&1==1){
//         count++;
//     }
//     n= n >>1;
//     }
//     cout<< count;
// } 



// // Decimal to binary

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() { 
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
    
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10, i) ) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout<<ans;
// }




// Binary to decimal

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     int i=0;
//     int ans = 0;
//     while(n!=0){
//         int digit = n % 10;
//         if(digit == 1){
//             ans = ans + pow(2, i);
//         }
//         n = n/10;
//         i++;
//     }
//         cout<<ans;

// }




// // Leet code 
// // Int range = -2pow(31) to 2pow(31)-1

// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int n;
//      cout<<"Enter a number : ";
//      cin>>n;
//     int ans = 0;
//      while(n!=0){
//         int digit = n%10;
//         if((ans > INT_MAX/10 ) || ( ans < INT_MIN/10)) {
//             cout<<"out of range ";
//         }
//         ans = (10 * ans ) + digit;
//         n = n/10;
//      }
//      cout<<ans;
//      }




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int m = n;
//     int mask = 0;
//     if(n == 0)
//         cout<<"0";
    
//     while(m!=0){
//         mask = (mask << 1 ) | 1;
//         m = m >> 1; 
//     }
//     int ans = (~n) & mask;
//     cout<<ans;
// }





// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//      int n;
//      cout<<"Enter a number : ";
//      cin>>n;

//      for(int i = 0; i<= 30 ;i++){
//         int ans = pow(2, i);

//         if(ans == n)
//         cout<<"true";
        
//     }
//     cout<<"false";
// }





#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
     cout<<"Enter a number : ";
     cin>>n;
     int ans = 1;
     for(int i = 0; i<= 30 ;i++){
        if(ans == n){
        cout<<"true";
        }
        if(ans < INT_MAX/2)
        ans = ans * 2;
     }
    cout<<"false";
}