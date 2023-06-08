//https://codeforces.com/problemset/problem/1820/B

#include "iostream"

using namespace std;
using ll = long long;

int main(){
    ll T;
    cin >> T;
    while (T--){
        string s;
        cin >> s;
        ll len_substr = 0, max_so_far = 0;
        for (ll i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                len_substr+=1;
                if (i == s.length()-1 && len_substr != s.length()) {
                    ll j = 0;
                    while(s[j]=='1'){
                        len_substr+=1;
                        j+=1;
                    }
                }
            }
            else {
                if (len_substr > max_so_far){
                    max_so_far = len_substr;
                } 
                len_substr = 0;
            }
        }
        if (len_substr > max_so_far){
            max_so_far = len_substr;
        }
        //cout << max_so_far << endl;
        if (max_so_far == s.length()){
            cout << max_so_far*max_so_far << endl;
            continue;
        }
        ll a_max = 0;
        for (ll i = 1; i<= max_so_far; i++){
            if ((max_so_far-i+1)*i > a_max) {
                a_max = (max_so_far-i+1)*i;
            }
        }
        cout << a_max << endl;
    }
}