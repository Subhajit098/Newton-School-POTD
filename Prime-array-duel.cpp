#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0) return false;
    }
    return true;
}

string primeDuel(int arr[],int n){
    string str="Draw";
    vector<int> prime(n);
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])) prime.push_back(arr[i]);
    }

    int ravi=0,tia=0;
    int prime_size=prime.size();
    sort(prime.begin(),prime.end(),greater<int>());
    // int count=1;
    for(int i=0;i<prime_size;i++){
       if(i%2==0) ravi+=prime[i];
       else tia+=prime[i];
    }

    if(ravi==tia) return str;
    else if(ravi>tia) return "Ravi";
    else return "Tia";
}

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    string ans=primeDuel(arr,n);
    cout<<ans;
    return 0;
}
