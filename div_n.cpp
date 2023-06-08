#include "iostream"

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int n,k;
        cin >> n;
        cin >> k;
        int lo = 1;
        int hi = k;
        while(hi/n-lo/n>0){
            int tmp = hi;
            hi = hi + hi/n-lo/n;
            lo = tmp;
        }
        cout << hi << endl;
    }
}