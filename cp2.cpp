#include<bits/stdc++.h>
using namespace std;
bool isPrime(int p){
    if(p==2) return true;

    for(int i=2;i<p;i++){
        if(p%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    int N=(n*2)-1;
    vector<int>temp;
    int p=2;
    while(temp.size()<N){
        if(isPrime(p)){
            temp.push_back(p);
        }
        p++;
    }
    for(int i=0;i<N;i+=2){
        cout<<temp[i]<<" ";
    }
    return 0;
}
