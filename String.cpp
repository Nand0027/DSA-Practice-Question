// #include<iostream>
// using namespace std;

//     void reverse(char name[], int n){
//         int s=0;
//         int e=n-1;
//         while(s<e){
//             swap(name[s++], name[e--]);
//         }
//     }
//     int getLength(char name[]){
//         int count = 0;
//         for(int i = 0; name[i] != '\0';i++){
//             count++;
//         }
//         return count;
//     }

//     bool checkPalindrome(char a[], int n){
//         int s = 0;
//         int e = n-1;
//         while(s<e){
//             if(a[s] != a[e]){
//                 return false;
//             }else{
//                 s++;
//                 e--;
//             }
//         }
//         return true;
//     }
  
// int main() {
//         char name[20];
//         cout<<"Enter your name: ";
//         cin>>name;
//         int n = getLength(name);
//         cout<<"Length: "<<n<<endl;
//         reverse(name, n);
//         cout<<"Your name is: "<<name<<endl;
//         cout<<"Palindrome or not: "<<checkPalindrome(name, n);
// }




//  Conver Upper case to lower case
// #include<iostream>
// using namespace std;

//     char toLowerCase(char ch){
//         if(ch>'a' && ch<='z'){
//             return ch;
//         }else{
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }
  
// int main() {
//     char f;
//     cout<< "Enter character: ";
//     cin>>f;
//     cout<<toLowerCase(f); 
// }




// Check palindrome
// #include<iostream>
// using namespace std;

// bool valid(char ch) {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }

// char toLowerCase(char ch) {
//     if (ch >= 'a' && ch <= 'z') {
//         return ch;
//     } else {
//         return ch - 'A' + 'a';
//     }
// }

// bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length() - 1;  // Fix: Correct the last index

//     while (s <= e) {  // Fix: Should be <= to include the middle character
//         if (a[s] != a[e]) {
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// bool isPalindrome(string s) {
//     // Remove unnecessary characters
//     string temp = "";
//     for (int i = 0; i < s.length(); i++) {
//         if (valid(s[i])) {
//             temp.push_back(toLowerCase(s[i]));  // Fix: Convert to lowercase while adding
//         }
//     }

//     // Check palindrome
//     return checkPalindrome(temp);
// }

// int main() {
//     string d = "A man, a plan, a canal: Panama";
//     cout << (isPalindrome(d) ? "true" : "false") << endl;  // Fix: Better output
// }


