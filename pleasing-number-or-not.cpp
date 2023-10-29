#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool pleasing_number(int n){
    if(n%10==n) {
        if(n%2==0) return true;
        return false;
    }

    int sum=0;
    while(n>0){
        sum+=(n%10);
        n=n/10;
    }

    return pleasing_number(sum);

}

int main() {
	// Your code here
    int n;
    cin>>n;
    bool ans=pleasing_number(n);
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
