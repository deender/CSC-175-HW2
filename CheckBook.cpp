//
// Created by deend on 10/22/2021.
//
#include "CheckBook.h"
using namespace std;

void CheckBook::deposit(float amount) {
    balance += amount;
}
const string memolist[] = {"Banana Stand", "Baby Shower", "Birthday Party", "Pizza"};
bool CheckBook::writeCheck(Check& c_amount) {
    if(c_amount <= balance) {
        arr[checkBookSize].checkMemo = rand() % memolist->size();
        balance -= arr[checkBookSize].checkAmount;
        arr[checkBookSize].checkNum = numOfChecks +1;
        numOfChecks++;
        return true;
    }
    else{
        return false;
    }
}

if (CheckBook % 2 = 0){
    arr[(checkBookSize)] *= 2;
    cout << "Please be notified that a new checkbook has been ordered" << endl;
}

//couldn't figure out how to implement check test function. Also, for some reason, not seeing any errors anymore in this file.

const void CheckBook::displayChecks() {
    for(int i = numOfChecks--; i>=0; i--){
        cout << "Check Number: " << arr[i].checkNum << " Check Amount: " << arr[i].checkAmount << " Check Memo: " << arr[i].checkMemo;
    }
}



CheckBook:: ~CheckBook(){
    //destructor
};
