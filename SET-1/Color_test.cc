#include<iostream>
#include "Color.h"
#include <gtest/gtest.h>
namespace {
TEST( Color, Inversion_Test ) {
    Color C1(254,254,254);
    std::string ExpectedOut="The Color has been inverted : -16387065";
    testing::internal::CaptureStdout();
    C1.invert();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST (Color , Default_Constructor){
    std::string ExpectedOut="Default called!!";
    testing::internal::CaptureStdout();
    Color C1;
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST (Color, color_t_test) {
    std::string ExpectedOut="Red";
    testing::internal::CaptureStdout();
    Color C1(red);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST (Color, Parameterised_Constructor ) {
    std::string ExpectedOut="Parameterised called!!\n";
    testing::internal::CaptureStdout();
    Color C1(254,254,254);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (Color, Display_Test ) {
    Color C1(254,254,254);
    std::string ExpectedOut="The Color composition is as follows: Red: 254, Green: 254,Blue: 254\n";
    testing::internal::CaptureStdout();
    C1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
