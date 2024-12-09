#include <bits/stdc++.h>
using namespace std;
#define DEBUG true
#define int long long
signed main() {
    if(!DEBUG){
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    }
    else{
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout); 
    }
    vector<int> v(5, 0);
    int sum = 0;
    for(auto &val: v){
        cin>>val;
        sum+=val;
    }
    cout<<sum;


}