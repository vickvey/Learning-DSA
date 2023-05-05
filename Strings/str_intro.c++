/*
Advantages over C-style strings:
1. we do not have to worry about size
2. can assign a string later
3. support of operators like +, <, >, ==, <= and >=
4. richer library
5. can be converted to C-style strings if needed
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str; 
    cout<<"Enter your name: \n";
    getline(cin, str); //scans a whole line untill enter is found
    //you can also use manually tell the getline() function to take input uptill a given character is not found
    //getline(cin, str, '#');
    //the above getline takes input untill '#' is not found.
    cout<<"Your name is "<<str<<endl;
    return 0;
}
