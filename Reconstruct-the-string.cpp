#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string rearrange(int arr[],string str,int n){
    map<int,char>mp;
    for(int i=0;i<n;i++){
        mp.insert({arr[i],str[i]});
    }

    string s="";
    for(auto it:mp){
        s+=it.second;
    }

    return s;
}

int main() {
	// Your code here
    int n;
    string str;
    cin>>str;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    string s=rearrange(arr,str,n);
    cout<<s<<endl;
    return 0;
}