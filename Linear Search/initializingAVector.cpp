#include<iostream>
#include<vector>
using namespace std;

// namespace demon{
//     int val = 34; // declarative region that provides scope
// }


// struct node
// {
//     int num ;
//     char ch;
//     double db;
//     //better way
//     node(int num_, char ch_,  double db_ ){
//         num = num_;
//         ch=ch_;
//         db = db_;
//     }
    
// };


int main(){
    // vector<int> a{1,2}; //initializing a vector as an array
    // a.push_back(3);    // vector method to add elements at the end of vector
    // a.push_back(4);
    // for(int x : a){    // for each loop to access vector elements
    //     cout<<x<<" ";
    // }
    // double val = 10.10;
    // cout<<demon::val; // will show scoped value of val

    // STRUCT
    // bad way to initalize
    // struct node ash;
    // ash.ch ='a';
    // cout<<ash.ch;
    //BETTER way
    // node *ash = new node(12,'d',12.3);
    // cout<<ash->ch;
}
