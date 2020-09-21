#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include "IEmployee.h"
#include<cstdint>
class Employee:public IEmployee {
    private:
    std::string m_empid;
    std::string m_name;
    double m_salary;
    int m_exp;
  public:
    Employee(std::string id, std::string name, double salary,int exp);
    virtual void display();
    ~Employee();
};
#endif // __EMPLOYEE_H
