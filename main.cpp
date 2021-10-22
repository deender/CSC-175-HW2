#include <iostream>

using namespace std;


struct Check{
    int checkNum;
    string checkMemo;
    int checkAmount;
    Check operator>(float &c){
        if (checkAmount > c){
            cout << "Check Amount is greater than float variable";
        }
    };
    friend Check operator<<(ostream& os, const Check& check);
};
Check operator<<(ostream& os, const Check& check){
    cout << check.checkNum << " " << check.checkAmount << " " << check.checkMemo << " " << endl;
    return check;
}



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
