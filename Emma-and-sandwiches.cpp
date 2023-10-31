#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int sandwich(int bread,int cheese)
{
    int count =0;
    while(bread>1 && cheese >0)
    {
       count ++;
       bread = bread -2;
       cheese --;
    }
    return count ;
}

int main() {
	// Your code here
    int n,m;
    cin>>n>>m;
    cout << sandwich(n,m)<<endl;
    return 0;
}