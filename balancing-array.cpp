#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int minimum_steps(int arr[],int a,int b,int n){
    int negative=0,positive=0;
    for(int i=0;i<n;i++){
        if(arr[i]) positive++;
        else negative++;
    }
    if(positive*b>negative*a) return negative*a;
    return positive*b;
}

int main() {
	// Your code here
    int n,A,B;
    cin>>n>>A>>B;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<minimum_steps(arr,A,B,n)<<endl;
    return 0;
}
