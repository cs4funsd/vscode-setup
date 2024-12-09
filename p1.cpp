#include <bits/stdc++.h>
#define DEBUG false

#define $(x) {if (DEBUG) {cout << __LINE__ << ": "; {x} cout << endl;}}
#define _(x) {cout << #x << " = " << x << " ";}
const double E = 1e-8;
const double PI = acos(-1);

using namespace std;

int main() {
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