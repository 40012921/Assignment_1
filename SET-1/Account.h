#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include <iostream>
#include<string>
using namespace std ;
class Account {
  private:
    double m_balance ;
    int m_accNumber ;
    string m_acc_Name;
  public:
    Account() ;
    Account(int, string, double ) ;
    Account(const Account& ) ;
    void debit(double amount) ;
    void credit(double amount) ;
    double getBalance()const ;
    int getAccountNum() ;
    string getAccountName () ;
    void display() ;
};
#endif

