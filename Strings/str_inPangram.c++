#include <iostream>
#include <string>
using namespace std;

bool inPangram (const string &s) {
    int n = s.length();
    if(n<26) return false;
    bool visited[26] = {0};
    for(int i=0; i<n; i++) {
        char x = s[i];
        if (x>='a' && x<='z') {
            visited[x-'a'] = true ;
        }
        if (x>='A' && x<='Z') {
            visited[x-'A'] = true ;
        }
    }
    for (int i=0; i<26; i++){
        if (visited[i]==false) return false;
    }
    return true;
}

int main() {
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    if (inPangram(s)) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    return 0;
}