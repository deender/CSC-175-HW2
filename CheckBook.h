//
// Created by deend on 10/22/2021.
//

#ifndef MDERANI_HW2_CHECKBOOK_H
#define MDERANI_HW2_CHECKBOOK_H
using namespace std;
#include <iostream>
struct Check{
public:
    int checkNum;
    string checkMemo;
    int checkAmount;
    bool operator<=(const float amount){
        if (amount <= checkAmount){
            cout << "Check Amount is greater than float variable";
            return true;
        }
    }
    friend ostream &operator<<(ostream& output, const Check& check);

};


class CheckBook {
public:
    CheckBook():balance(0), numOfChecks(0), checkBookSize(4){}; //default constructor
    CheckBook(int balance): numOfChecks(0), checkBookSize(2){};
    void deposit(float amount);
    bool writeCheck(Check& c_amount);
    const float getBalance(){return balance;} //start of get functions
    const int getnumOfChecks(){return numOfChecks;}
    const int getcheckBookSize(){return checkBookSize;}
    const float getLastDeposit(){return lastDeposit;}
    float setBalance(float b){balance = b;} //start of set functions
    int setnumOfChecks(int n){numOfChecks = n;}
    int setcheckBooksize(int s){checkBookSize = s;}
    float setlastDeposit(int d){lastDeposit = d;}
    ~CheckBook(); //destructor
    CheckBook(const CheckBook &C); //copy constructor
    CheckBook & operator=(const CheckBook &C); //assignment operator
    const void displayChecks();
    const void checkTest();
private:
    float balance;
    int numOfChecks;
    int checkBookSize;
    Check arr[(sizeof(checkBookSize))];
    float lastDeposit;
    CheckBook *checkptr; //CheckBook pointer



};


#endif //MDERANI_HW2_CHECKBOOK_H
