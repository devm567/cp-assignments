#include<bits/stdc++.h>
using namespace std;
vector<int>Sortfn(vector<int>a, vector<int>b, int n, int m){
    int i=0, j=0;

    vector<int>sorted;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            sorted.push_back(a[i]);
            i++;
        }
        else{
        sorted.push_back(b[j]);
        j++;
        }
    }
    while(j<m){
        sorted.push_back(b[j]);
        j++;
    }
    while(i<n){
        sorted.push_back(a[i]);
        i++;
    }
    return sorted;
}
int main(){
    int n, m;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>sorted = Sortfn(a, b, n, m);

    for(auto it:sorted){
        cout << it << " ";
    }

    return 0;
}