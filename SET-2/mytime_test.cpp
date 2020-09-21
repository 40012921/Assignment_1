#include "mytime.h"
#include <gtest/gtest.h>
#include<iostream>
using namespace std;

TEST(Mytime,EqualFunction) {

    Mytime c1(1,2);
    Mytime c2(1,2);
    EXPECT_EQ(true,c1.display()==c2.display());

}
TEST(Mytime,SumFunction) {

    Mytime c1(1,20,30);
    Mytime c2(1,30,20);
    Mytime c3=c1+c2;
    EXPECT_EQ(2:50:50,c3.display());

}


TEST(Mytime,GreatFunction) {

    Mytime c1(1,40);
    Mytime c2(1,20);
    EXPECT_EQ(false,c1.display()>c2.display());

}
TEST(Mytime,LessFunction) {

    Mytime c1(1,4);
    Mytime c2(1,2);
    EXPECT_EQ(true,c1.display()<c2.display());

}


TEST(Mytime,DisplayTest) {
   Mytime c1(1,40,3);
    std::string ExpectedOut="Hours:1 Minutes:40 Seconds:3";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}




