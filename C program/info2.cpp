// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,h,n;
    cout<<"Enter No. of Villains\n";
    cin>>n;
    cout<<"Enter no. of heros\n";
    cin>>m;
    cout<<"Enter health of heros\n";
    cin>>h;
    cout<<"Enter health of each villains\n";
    int v[n],h1[m];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<m; i++){
        h1[i]=h;
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(h1[j]==v[i]){
            i++;
            j++;
        }else if(h1[j]<v[i]){
            j++;
        }else{
            h1[j]=h1[j]-v[i];
            i++;
        }
    }
    if(i<n) cout<<n-i;
    else cout<<"0";
}