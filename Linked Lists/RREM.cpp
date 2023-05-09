#include <bits/stdc++.h>
using namespace std;

void Display (vector<vector<int>> v){
    for (int i = 0; i<v.size(); i++){
        for (int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }
}
vector<vector<int>> RREM (vector<vector<int>> &v){
    vector<vector<int>>a(v);
    
    return a;

}

int main(){
    cout<<"Enter the matrix whose RREM form you want: \n";
    int n,m;
    cout<<"Enter the number of rows: \n"; cin>>n;
    cout<<"Enter the number of columns: \n"; cin>>m;
    vector<vector<int>> v;
    for (int i = 0; i<n; i++){
        vector<int>t;
        for (int j = 0; j<m; j++){
            cout<<"Enter the "<<"("<<i<<","<<j<<")th"<<endl;
            int temp; cin>>temp;
            t.push_back(temp);
        } v.push_back(t);
    }

    Display(v);
    return 0;
}