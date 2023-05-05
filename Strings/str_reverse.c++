#include <iostream>
#include <string>
using namespace std;

//prints the reversed string
void ReverseString (string s){ 
    for(auto it = s.end(); it>=s.begin(); it--){
        cout<<(*it);
    }
    cout<<"\n";
    return;
}

//returns the reversed string's address i.e. address of first character of string
string* ReverseStr (string s){
    string* ch = new string();
    for(auto it = s.end(); it>=s.begin(); it--){
        (*ch).push_back((*it));
    }
    return ch;
}

bool checkForPalindrome (string str){
    int start = 0;
    int end = str.size();
    while(start<end){
        if(str[start] != str[end]){
            return false;
        } else {
            start++;
            end--;
        }
    }
}


int main(){
    string str;
    cout<<"Enter the string: \n";
    cin>>str;
    if(checkForPalindrome(str)){
        cout<<"The entered string is palindrome\n";
    } else {
        cout<<"The entered string is not a palindrome\n";
    }

    return 0;
}