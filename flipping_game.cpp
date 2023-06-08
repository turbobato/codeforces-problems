//https://codeforces.com/problemset/problem/327/A

#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int tab[n];
    int S = 0;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
        if (tab[i] == 1){
            tab[i] = -1;
            S+=1;
        }
        else {
            tab[i] = 1;
        }
    }
    int max_gain = tab[0];
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum+=tab[j];
            if (sum > max_gain){
                max_gain = sum;
            }
        }
    }

    cout << S+max_gain << endl;
}