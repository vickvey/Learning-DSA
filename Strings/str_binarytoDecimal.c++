#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int BinaryToDecimal (string s){
    int f = 0; int t = 1;
    int sum = 0;
    for(int i=s.length()-1; i>=0; i--) {
        int temp = (int)(s[i]-'0');
        int power = s.length()-i-1;
        if(temp==1){
            sum += (int)pow(2, power);
        }
    }
    return sum;
}

int main(){
    string s;
    cout<<"Enter the binary number which you want to convert to decimal:\n";
    cin>>s;
    cout<<"Here is your Binary number: \n";
    cout<<BinaryToDecimal(s)<<endl;
    return 0;
}