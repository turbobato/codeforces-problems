#include "iostream"

using namespace std;

int main(){
    int n, k;
    int min = 0;
    cin >> n >> k;
    int res[n] = {0};
    int day;
    cin >> day;
    res[0] = day;
    for (int i = 1; i < n; i++){
        cin >> day;
        if (k - day - res[i-1] >= 0){
            res[i] = k - res[i-1];
            min += k - day - res[i-1];
        }
        else {
            res[i] = day;
        }
    }
    cout << min << endl;
    for (int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
}