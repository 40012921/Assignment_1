#include<iostream>
#include "Customer.h"
#include <gtest/gtest.h>
namespace{

TEST(Customer,Default_Constructor) {
    Customer c;
    EXPECT_EQ(100,c.getBalance());
}
TEST(Customer,Parameterized_Constructor) {
    Customer c;
    c.init(1511, "Rohan", "9845012345", 5000.0);
    EXPECT_EQ(5000.0,c.getBalance());

}
TEST(Customer,Copy_Constructor) {
    Customer c;
    c.init(1511, "Rohan", "9845012345", 5000.0);
    Customer c2(c);
    EXPECT_EQ(5000.0,c2.getBalance());

}
TEST(Customer,Call_Test) {
    Customer c;
    c.init(1511, "Rohan", "9845012345", 5000.0);
    c.makeCall(30);
    EXPECT_EQ(4700.0,c.getBalance());

}
TEST(Customer,Credit_Test) {
    Customer c;
    c.init(1511, "Rohan", "9845012345", 5000.0);
    c.credit(1200);
    EXPECT_EQ(6200.0,c.getBalance());
}

TEST(Customer,Display_Test) {
    Customer c;
    c.init(1511, "Rohan", "9845012345", 5000.0);
    string ExpectedOut="1511,Rohan,5000,9845012345\n";
    testing::internal::CaptureStdout();
    c.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
