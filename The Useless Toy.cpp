#include <iostream>
using namespace std;

int main() {
    int n;
    char fp, sp;
    cin >> fp >> sp >> n;
    if(n%2 == 0){
        cout << "undefined" << endl;
    } else if (fp == 'v' && sp == '>'){ 
        if(n%4 == 1){
            cout << "ccw" << endl;
        } else {
            cout << "cw" << endl;
        } 
    } else if(fp == 'v' && sp == '<'){
        if(n%4 == 1){
            cout << "cw" << endl;
        } else {
            cout << "ccw" << endl;
        }
    } else if(fp == '^' && sp == '>'){
        if(n%4 == 1){
            cout << "cw" << endl;
        } else {
            cout << "ccw" << endl;
        }
    } else if(fp == '^' && sp == '<'){
        if(n%4 == 1){
            cout << "ccw" << endl;
        } else {
            cout << "cw" << endl;
        }
    } else if(fp == '>' && sp == 'v'){
        if(n%4 == 1){
            cout << "cw" << endl;
        } else {
            cout << "ccw" << endl;
        }
    } else if(fp == '>' && sp == '^'){
        if(n%4 == 1){
            cout << "ccw" << endl;
        } else {
            cout << "cw" << endl;
        }
    } else if(fp == '<' && sp == 'v'){
        if(n%4 == 1){
            cout << "ccw" << endl;
        } else {
            cout << "cw" << endl;
        }
    } else if(fp == '<' && sp == '^'){
        if(n%4 == 1){
            cout << "cw" << endl;
        } else {
            cout << "ccw" << endl;
        }
    }
    return 0;
}