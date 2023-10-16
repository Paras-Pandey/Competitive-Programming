#include <iostream>
using namespace std;
int main () {
    int a;
    cout << "enter a year";
    cin >> a;

    if (a%400==0) {
        if (a%100==0) {
            cout << "enter year is not leap year";}
            else if (a%4==0)
            cout <<"enter year is leap year";
        else {cout << "enter year is not leap year";}
    }else cout << "enter year is not leap year";
}