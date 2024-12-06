#include <iostream>
using namespace std;

int main() {


    int hi;
    cout << " Enter the First Number ";
    cin >> hi;
    cout << " Enter the Second Number ";
    int hi2;
    cin >> hi2;
    if (hi >= hi2) {
        cout << hi << " is greater than " << hi2;
    } else {
        cout << hi2 << " is lesser than " << hi;
    }


    return 0;
}