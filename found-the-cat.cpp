#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool meowPresent(string str){
    bool ans=false;
    string dummy = str;
    int n = dummy.size();
    if(n<4) return ans;
    transform(dummy.begin(),dummy.end(),dummy.begin(),::tolower);
    for(int i=0;i<=n-4;i++){
        if(dummy.substr(i,4)=="meow"){
            ans=true;
            break;
        }
    }
    return ans;
}

int main() {
	// Your code here
    string str;
    // cin>>str;
    getline(cin,str);
    if(meowPresent(str)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
