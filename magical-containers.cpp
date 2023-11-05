#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int getContainers(int arr[],int n){
    int count=0;
    int odd=0;
    vector<int>vec;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) count++;
        else odd++;
    }
    
    if(odd==0) return count;


    if(odd%2==0) count+=odd/2;
    else count+=(odd/2)+(odd%2);
    return count;
}

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<getContainers(arr,n)<<endl;
    return 0;
}
