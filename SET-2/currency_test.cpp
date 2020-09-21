/*
#include<iostream>
#include "currecy.h"
#include <gtest/gtest.h>
using namespace std;

TEST(Currency,EqualFunction) {


    Currency c1(10,10);
    Currency c2(10,10);
    EXPECT_EQ(true,c1.display()==c2.display());

}
TEST(Currency,SumFunction) {

    Currency c1(10,10);
    Currency c2(10,10);
    Currency c3=c1+c2;
    EXPECT_EQ(20.20,c3.display());

}
TEST(Currency,DiffFunction) {

    Currency c1(20,10);
    Currency c2(10,10);
    Currency c3=c1-c2;
    EXPECT_EQ(10,c3.display());

}


TEST(Currency,GreatFunction) {

    Currency c1(1,4);
    Currency c2(1,2);
    EXPECT_EQ(true,c1.display()>c2.display());

}
TEST(Currency,LessFunction) {

    Currency c1(1,4);
    Currency c2(1,2);
    EXPECT_EQ(false,c1.display()<c2.display());

}


TEST(Currency,DisplayTest) {
   Currency c1(1,4);
    std::string ExpectedOut="1.4";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

*/

