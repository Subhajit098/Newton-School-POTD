#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int desiredSweets(int arr[],int n,int k){
    int desired=0;
    int sum=0;
    sum=accumulate(arr,arr+n,0);
    if(sum<k) desired=k;
    else if(sum%k==0) desired=sum/k;
    else if(sum%k!=0) desired=sum/k+1;

    return desired;
}

int main() {
	// Your code here
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<desiredSweets(arr,n,k)<<endl;
    return 0;
}
