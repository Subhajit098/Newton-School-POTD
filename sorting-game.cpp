#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;



bool sortedOrNot(vector<int>&vec,int n){
    bool flag=true;
    // multimap<int,int>mp;
    // for(int i=0;i<n;i++) mp.insert({vec[i],i});
    if(is_sorted(vec.begin(),vec.end())) return true;

    vector<int>even;
    vector<int>even_ind;
    vector<int>odd;
    vector<int>odd_ind;

    for(int i=0;i<n;i++){
        if(vec[i]%2==0) {
            even.push_back(vec[i]);
            even_ind.push_back(i);
        }
        else  {
            odd.push_back(vec[i]);
            odd_ind.push_back(i);
        }
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    for(int i=0;i<even.size();i++){
        vec[even_ind[i]]=even[i];
    }

    for(int i=0;i<odd.size();i++){
        vec[odd_ind[i]]=odd[i];
    }

    for(int i=0;i<n-1;i++){
        if(vec[i]>vec[i+1]) {
            flag=false;
            break;
        }
    }

    return flag;
}

int main() {
	// Your code here
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    bool flag=sortedOrNot(vec, n);
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  

    return 0;
}
