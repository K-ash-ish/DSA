#include<iostream>
#include<string>
using namespace std;

int findString(string s, char target, int length){
    for(int i = 0; i< length; i++){
        if(target == s[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string s = "kashish";
    cout<<findString(s, 'z', s.length());
    
    
}