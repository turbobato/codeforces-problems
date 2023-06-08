//https://codeforces.com/problemset/problem/1824/A

#include "bits/stdc++.h"

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, hi, lo, opt = 0, left = 0, right = 0;
        cin >> n >> m;
        lo = m-1;
        hi = 0;
        bool occupied[m] = {false};
        int ways[n];
        for (int i = 0; i<n; i++){
            cin >> ways[i];
            if (ways[i] > 0){
                ways[i] = ways[i]-1;
            }
        }
        for (int i = 0; i<n; i++){
            if (ways[i]==-1){left++;}
            else if (ways[i]==-2){right++;}
            else {
                int seat = ways[i];
                if (!occupied[seat]){
                    occupied[seat] = true;
                    opt++;
                    if (seat < lo){
                        lo = seat;
                    }
                    if (seat > hi){
                        hi = seat;
                    }
                }
            }
        }
        if (lo == m-1 && hi == 0){
            opt = max(min(left,m),min(m,right));
            cout << opt << endl;
        }
        else {
            int pr_opt = opt;
            int left_space = lo;
            int right_space = m-1-hi;
            int remaining = m - opt - left_space - right_space;
            int left_to_place = max(left-left_space,0);
            int right_to_place = max(right-right_space,0);
            opt = opt + min(left,left_space)
                      + min(right,right_space) 
                      + min(remaining,left_to_place+right_to_place);
            opt = max(max(min(pr_opt+left,m),min(pr_opt+right,m)),opt);
            cout << opt << endl;
        }
        cout.flush();
    }
}