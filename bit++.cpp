//https://codeforces.com/problemset/problem/282/A
#include "iostream";
#include "string";

using namespace std;

int main(){
    int nb_op;
    cin >> nb_op;
    int res = 0;
    for (int i = 0; i < nb_op; i++){
        string op;
        cin >> op;
        if (op[0] == '+' or op[2] == '+'){
            res++;
        }
        else {
            res--;
        }
    }
    cout << res;
}