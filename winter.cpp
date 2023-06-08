//https://codeforces.com/problemset/problem/1829/F

#include "bits/stdc++.h"

using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while (t--){
        cin >> n >> m;
        int u, v;
        vector<list<int>> adj = vector<list<int>>(n);
        for (int i = 0; i < m; i++){
            cin >> u >> v;
            u--;v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int x, y;
        int pivot = 0;
        if (adj[pivot].size()==1){
            pivot = adj[pivot].front();
        }
        
        int s1 = adj[pivot].front();
        auto s2 = (adj[pivot].begin()++);
        while (s2 != adj[pivot].end()){
            if (adj[*s2].size() != adj[s1].size()){break;}
            s2++;
        }
        if (s2 == adj[pivot].end()){
            x = adj[pivot].size();
            y = m/x - 1;
        }
        else if (adj[s1].size() > adj[*s2].size()){
            x = adj[s1].size();
            y = m/x - 1;
        }
        else {
            x = adj[*s2].size();
            y = m/x - 1;
        }
        cout << x << " " << y << endl;
    
    }

}