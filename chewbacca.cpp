//https://codeforces.com/problemset/problem/514/A

#include "bits/stdc++.h"

using namespace std;
using ll = long long;

int main(){
    string nb;
    string out {};
    cin >> nb;
    ll n = nb.length();
    ll i = 0;
    // while((nb[i] == '9' || nb[i] == '0' )&& i < n){
    //     if (i==n-1){
    //         out += "9";
    //         cout << out << endl;
    //         return 0;
    //     }
    //     i++;
    // }
    if (nb[i]=='9'){
        out+="9";
        i++;
    }
    while(i < n){
        ll val = nb[i]-'0';
        if (val > 4){
            val = 9-val;
        }
        out += to_string(val);
        i++;
    }
    cout << out << endl;
}