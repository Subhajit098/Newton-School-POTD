#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

// int N=1e5+7;

// int arr[N]={0};

int main() {
	// Your code here
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr[i]=x;
    }

    int maxi=*max_element(arr.begin(),arr.end());
    cout<<maxi<<endl;

    return 0;
}
