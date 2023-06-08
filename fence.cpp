// https://codeforces.com/problemset/problem/1820/B

#include "iostream" 

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--) {
        int angle;
        cin >> angle;
        if (360 % (180-angle)  == 0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}