// https://codeforces.com/problemset/problem/339/A
#include "iostream";
#include "string";

using namespace std;

int main(){
    string input;
    int tab[3] = {0,0,0};
    cin >> input;
    for (int i = 0; i < input.length(); i+=2){
        tab[atoi(&input[i])-1] += 1;
    }
    string output = "";
    for (int i = 0; i < input.length(); i++){
        if (i%2 == 0){
            if (tab[0] > 0){
                output.append("1");
                tab[0]--;
            }
            else if (tab[1] > 0) {
                output.append("2");
                tab[1]--;
            }
            else if (tab[2] > 0){
                output.append("3");
                tab[2]--;
            }
        }
        else {
            output.append("+");
        }
    }
    cout << output << endl;
}