#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    stack<int>s;
    vector<int>ans(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i =0 ; i<n ; i++){
        while(!s.empty()&& a[i]>a[s.top()]){
            ans[s.top()]=a[i];
            s.pop();

        }
        s.push(i);
    }
    for(auto x :ans){
        cout<<x<<endl;
    }

    
}

// input 
// 5
// 3
// 4
// 5
// 27
// 1

// //output
// 4
// 5
// 27
// 0
// 0

