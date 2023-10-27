#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int findIndex(int k,int n){
    int ans=-1;
    if(k<n) ans=k+1;
    else if(k==n) ans=1;
    else ans=(k%n) + 1;
    return ans;
}

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cin>>k;
    cout<<findIndex(k,n)<<endl;
    return 0;
}
