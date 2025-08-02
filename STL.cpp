// STL Array
// #include<iostream>
// #include<array>
// using namespace std;

// int main() {
//     int basic[5] = {5,7,3,7,8};  // normal Array

//     array<int,5> a = {5,7,3,7,8};
//     int size = a.size();
//     for(int i=0; i<size; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Element at 2nd index : "<<a.at(2)<<endl;
//     cout<<"Empty or not : "<<a.empty()<<endl;
//     cout<<"First Element : "<<a.front()<<endl;
//     cout<<"Last Element : "<<a.back();
// }





//  Vector is Dyanmic array
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
// vector<int> v;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(1);
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(2);
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(3);
// cout<<"Capacity : "<<v.capacity()<<endl;
// cout<<"Size : "<<v.size()<<endl;
// cout<<"Element at 2nd index : "<<v.at(2)<<endl;

// cout<<"First Element : "<<v.front()<<endl;
// cout<<"Last Element : "<<v.back();

// cout<<"Before pop : "<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }cout<<endl;

// v.pop_back();
// cout<<"After pop : "<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }

// cout<<"Before clear size : "<<v.size()<<endl;
// v.clear();
// cout<<"After clear size : "<<v.size()<<endl;

//     vector<int> a(5,1);
//     cout<<"print Arra : ";
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     vector<int> last(a);
//     cout<<"print Arra : ";
//     for(int i:last){
//         cout<<i<<" ";
//     }
// }





// STL Deque
// #include<iostream>
// #include<deque>
// using namespace std;

// int main() {
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);

//     // for(int i : d)
//     // cout<<i<<" ";

//     d.pop_front();
//     for(int i : d)
//     cout<<i<<" ";
// }






// STL List
// #include<iostream>
// #include<list>
// using namespace std;

// int main() {

//     list<int> l;
//     l.push_back(1);
//     l.push_front(2);

//     for(int i: l){
//     cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"After erase : ";
//     for(int i: l){
//         cout<<i<<" ";
//     }cout<<endl;

//     list<int> n(5, 100);
//     cout<<"Printing n: ";
//     for(int i:n){
//         cout<<i<<" ";

//     } cout<<endl;
// }





// STL Stack  LIFO
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {

//     stack<string> s;

//     s.push("Anand");
//     s.push("singh");
//     s.push("Yadav");

//     cout<<"Top Element : "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top Element : "<<s.top()<<endl;
//     cout<<"Size of stack : "<<s.size()<<endl;
//     cout<<"Empty or not : "<<s.empty()<<endl;
// }





// STL Queue
// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {

//     queue<string>

//     s.push("Anand");
//     s.push("singh");
//     s.push("Yadav");

//     cout<<"Top Element : "<<s.front()<<endl;
//     s.pop();
//     cout<<"Top Element : "<<s.front()<<endl;
//     cout<<"Size of stack : "<<s.size()<<endl;
//     cout<<"Empty or not : "<<s.empty()<<endl;
// }






// Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {
//     // Max heap
//     priority_queue<int> maxi;;

//     // Min Heap
//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(5);
//     maxi.push(0);
//     cout<<"Size : "<<maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i =0; i<n; i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(1);
//     mini.push(6);
//     mini.push(3);
//     mini.push(8);
//     mini.push(0);
//     cout<<"Size : "<<mini.size()<<endl;
//     int m = mini.size();
//     for(int i =0; i<m; i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;
//     cout<<"Queue is empty : "<<mini.empty();
// }


 


// STL Set
// #include<iostream>
// #include<set>
// using namespace std;

// int main() {
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(4);
//     s.insert(7);
//     s.insert(9);
//     s.insert(9);
//     s.insert(2);
//      for(auto i : s){
//         cout<<i<<endl;
//      }cout<<endl;

//      set<int>::iterator it = s.begin();
//      it++;
//      s.erase(it);
//      for(auto i : s){
//         cout<<i<<endl;
//      }
//      cout<<"5 is present : "<<s.count(5)<<endl;
// }




// STL Map
// #include<iostream>
// #include<map>
// using namespace std;

// int main() {

//     map<int, string> m;    // Sorted
//     m[1] ="Anand";
//     m[13] ="singh";
//     m[2] ="yadav";

//     m.insert({5, "love"});
//     cout<<"Before erase "<<endl;
//     for(auto i :m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"After erase "<<endl;
//     for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;

//     auto it = m.find(5);
//     for(auto i = it; i!= m.end();i++){
//         cout<<(*i).first<<endl;
//     }






// Algorithm
// Intro sort = Quick sort + Heap Sort + Insertation Sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 = " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower_bound = " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper_bound = " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max = " << max(a, b)<<endl;
    cout << "min = " << min(a, b);

    swap(a, b);
    cout << endl
         << "a = " << a << endl;
    string str = "abcd";
    reverse(str.begin(), str.end());
    cout << "string  = " << str << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate : ";
    for (int i : v){
        cout << i << " ";
    }

    cout<<endl;
    cout<<"After Sort: ";
    sort(v.begin(), v.end());
    for(int i : v){
        cout<<i<<" " ;
    }
}
