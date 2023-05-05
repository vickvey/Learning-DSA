#include <bits/stdc++.h> 
using namespace std;

template <typename T>
T myMax (T a, T b) {
    return a>b?a:b;
}

int main(){
    int a = 10; int b = 20;
    cout<<myMax<int>(a, b)<<endl;
    char ch1 = 'a'; char ch2 = 'b';
    cout<<(int)ch1<<" "<<(int)ch2<<endl;
    cout<<myMax<char>(ch1, ch2)<<endl;

    return 0;
}