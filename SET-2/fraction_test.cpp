/*
#include "fraction.h"
#include <gtest/gtest.h>
#include<iostream>
TEST(Fraction,EqualFunction) {

    Fraction c1(1,2);
    Fraction c2(1,2);
    EXPECT_EQ(true,c1.display()==c2.display());

}
TEST(Fraction,SumFunction) {

    Fraction c1(1,2);
    Fraction c2(1,2);
    Fraction c3=c1+c2;
    EXPECT_EQ(1,c3.display());

}

TEST(Fraction,MultiFunction) {

    Fraction c1(1,2);
    Fraction c2(1,2);
    Fraction c3=c1*c2;
    EXPECT_EQ(1/4,c1.display()*c2.display());

}

TEST(Fraction,GreatFunction) {

    Fraction c1(1,4);
    Fraction c2(1,2);
    EXPECT_EQ(false,c1.display()>c2.display());

}
TEST(Fraction,LessFunction) {

    Fraction c1(1,4);
    Fraction c2(1,2);
    EXPECT_EQ(true,c1.display()<c2.display());

}


TEST(Fraction,DisplayTest) {
   Fraction c1(1,4);
    std::string ExpectedOut="1/4";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


*/
