//https://codeforces.com/problemset/problem/230/A
#include "iostream";
#include "string";
#include "utility";
#include "algorithm";

using namespace std;

int main(){
    int strength;
    int n_dragons;
    cin >> strength;
    cin >> n_dragons;
    pair<int,int> dragons[n_dragons];
    for (int i = 0; i < n_dragons; i++){
        int d_strength;
        int gain;
        cin >> d_strength;
        cin >> gain;
        dragons[i].first = d_strength;
        dragons[i].second = gain;
    }
    sort(dragons,dragons+n_dragons,
        [](pair<int,int> p, pair<int,int> q){return p.first < q.first;});
    
    for (int i = 0; i < n_dragons; i++){
        if (dragons[i].first >= strength){
            cout << "NO" << endl;
            return 0;
        }
        else {
            strength+=dragons[i].second;
        }
    }
    cout << "YES" << endl;
}