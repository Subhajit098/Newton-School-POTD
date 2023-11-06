#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int sandWichHeight(int bread,int cheese){
    if(bread==0 || cheese==0) return 0;

    if(bread==cheese) return (2*bread)-1;

    int height=0;
    if(bread>=2 && cheese>=1) {
        height+=3;
        bread-=2;
        cheese-=1;
    }


    bool bread_left=false,cheese_left=false;

    while(cheese>0 && bread>0){
        cheese--;
        cheese_left=true;
        bread--;
        bread_left=true;
        height+=2;
    }

    return height;
}

int main() {
	// Your code here
    int bread,cheese;
    cin>>bread>>cheese;
    cout<<sandWichHeight(bread,cheese)<<endl;
    return 0;
}
