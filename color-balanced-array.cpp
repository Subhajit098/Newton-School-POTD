#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

// negative -> red, posi-> green , 0->g or red 

bool YesOrNo(int arr[],int n){
    int r=0,g=0,zeros=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0) g++;
        else if(arr[i]==0) zeros++;
        else r++;
    }

    if(r==g || abs(r-g)<=zeros) return true;

    return false;    
}

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr[i]=x;
    }

    bool flag=YesOrNo(arr,n);
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}