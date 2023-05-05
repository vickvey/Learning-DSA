#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Vivek Kumar";
    //using for loop
    for(int i=0; i<name.length(); i++){
        cout<<name[i];
    } cout<<endl;

    //using for each char
    for(char x: name){
        cout<<x;
    } cout<<endl;

    //using for loop with string iterators 
    for(auto it = name.begin(); it != name.end(); it++){
        cout<<(*it);
    } cout<<endl;
    return 0;
}