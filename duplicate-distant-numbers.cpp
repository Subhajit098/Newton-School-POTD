#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool present(vector<int>arr,int n,int k){
    unordered_set<int> myset;
 
    for (int i = 0; i < n; i++)
    {
       
        if (myset.find(arr[i]) != myset.end())
            return true;
 
        myset.insert(arr[i]);
 
        if (i >= k)
            myset.erase(arr[i-k]);
    }
    return false;
}

int main() {
	// Your code here
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int k;
    cin>>k;
    if(present(arr,n,k)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
