#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long int gcd(long long int a,long long int b, long long c){
    // return b == 0 ? a: gcd(b, a % b);
    long long mini=min(a,min(b,c));
    for(int i=2;i<=mini;i++){
        if(a%i==0 && b%i==0 && c%i==0) return i;
    }
    return 1;
}

long long int  LCM(long long int x,long long int y,long long int z){
    if(x==0 || y==0 || z==0) return 0;
    long long lcm = (x*y*z)/(__gcd(x,__gcd(y,z)));
    return lcm;
}

int main() {
	// Your code here
    long long int x,y,z;
    cin>>x>>y>>z;
    cout<<LCM(x,y,z)<<endl;
    return 0;
}
