#include <bits/stdc++.h>
using namespace std;

void print7 (int n) {
    for(int i = 0; i<n; i++){
        //space
        for (int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for (int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl; //next row
    }
}
void print8 (int n) {
    for(int i = 0; i<n; i++){
        //space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j = 0; j<(2*(n-i-1)-1); j++){
            cout<<"*";
        }
        //space 
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9 (int n) {
    
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        print8(n);
    }
    return 0;
}