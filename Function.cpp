// #include<iostream>
// using namespace std;

// int main() {
//     int n = 12;

//     switch (n)
//     {
//     case 12:            //in this 'case' will not take value of float and const
//         cout<<"First"<<endl;
//             break;
//     case 15:
//         cout<<"second"<<endl;
//             break;
//     case 25:
//         cout<<"third"<<endl;
//             break;
    
//     default:
//     cout<<"It is default one";
//         break;
//     }
// }





// #include<iostream>
// using namespace std;

// int main() {
//     int n = 25;
//     char num = '1';
//     switch (n)
//     {
//     case 12:            //in this 'case' will not take value of float and const
//         cout<<"First"<<endl;
//             break;
//     case 15:
//         cout<<"second"<<endl;
//             break;
//     case 25: switch(num){
//         case '1': 
//         cout<<"The value of num is "<<num<<endl;
//         break;
//     }
//     break;
//     default:
//     cout<<"It is default one";
//         break;
//     }
// }





// #include<iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout<<"Enter a number of a : ";
//     cin>>a;
    
//     cout<<"Enter a number of b : ";
//     cin>>b;

//     char op;
//     cout<<"Enter the operation you want to perform : ";
//     cin>>op;

//     switch(op)
//     {
//         case '+':
//         cout<<a+b<<endl;
//         break;

//         case '-':
//         cout<<a-b<<endl;
//         break;

//         case '*':
//         cout<<a*b<<endl;
//         break;

//         case '/':
//         cout<<a/b<<endl;
//         break;
//     }
// }





// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter a mount : ";
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(12)
//   {
//       case 12: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
//            }
// }




// #include<iostream>
// using namespace std;

// int power (int a, int b){        //  function
//         int ans = 1;
//         for(int i=1; i<=b; i++){
//                 ans = ans * a;
//         }
//         return ans;
// }

// int main() {
//         int c, d;
//         cout<<"Enter a number : ";
//         cin>>c;
//         cout<<"Enter a power number : ";
//         cin>>d;

//         int re = power(c,d);
//         cout<<"The answer is: "<<re;
// }




// #include<iostream>
// using namespace std;


// bool isEven(int num){
//         if(num&1){
//                 return 0;
//         }
//         return 1;
// }

// int main() {
//         int n;
//         cout<<"Enter a number : ";
//         cin>>n;
//         if(isEven(n)){
//                 cout<<"Number is Even";
//         }else{
//                 cout<<"Number is Odd";
//         }
// }




// #include<iostream>
// using namespace std;

// int factorial (int n){
//         int fact = 1;
//         for(int i=1; i<=n; i++){
//                 fact = fact*i;
//         }
//         return fact;
// }

// int nCr(int n, int r){
//         int numera = factorial(n);
//         int deco = factorial(r) * factorial(n-r);
//         return numera / deco;
// }

// int main() {
//         int a, b;
//         cout<<"Enter a number of a : ";
//         cin>>a;
//         cout<<"Enter a number of b : ";
//         cin>>b;

//         cout<<"Answer is: "<<nCr(a,b);
// }





// #include<iostream>
// using namespace std;

// void count(int n){
//         for(int i=1; i<=n; i++){
//                 cout<<i<<" ";
//         }
// }

// int main() {
//         int a;
//         cout<<"Enter number : ";
//         cin>>a;
//         count(a);
//         // cout<<count(a);

// }




// #include<iostream>
// using namespace std;

// bool isPrime(int num){
//         for(int i=2; i<num; i++){
//                 if(num%i == 0){
//                         return 0;
//                 }
//         }
//                 return 1;
// }

// int main(){
//         int n;
//         cout<<"Enter a number : ";
//         cin>>n;

//         if(isPrime(n)){
//                 cout<<"Number is prime";
//         }else{
//                 cout<<"Number is not prime";
//         }
// }





#include<iostream>
using namespace std;

        int ap (int n) {
                int formula = 3 * n + 7;
                return formula;
        }

int main() {
        int num;
        cout<<"Enter a number : ";
        cin>>num;

        cout<<"Answer is : "<<ap(num);

}


