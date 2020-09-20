#include <gtest/gtest.h>
#include"Box.h"
namespace {

TEST (Box, Parameterised_Constructor) {
    std::string ExpectedOut="Parameterised Constructor call!!\n";
    testing::internal::CaptureStdout();
    Box B(2,4,5);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (Box, Default_Constructor) {
    std::string ExpectedOut="Default Constructor call!!\n";
    testing::internal::CaptureStdout();
    Box p;
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(Box , Copy_Constructor){
    Box b1(2,3,4);
    std::string ExpectedOut="Copied dimensions !!\n";
    testing::internal::CaptureStdout();
    Box b2(b1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Box,Volume_Test) {
    Box a1(10,10,10);
    a1.volume(10,10,10);
    EXPECT_EQ(1000, a1.volume(10,10,10));
}

TEST (Box, Length_Test) {
    Box b1(10,10,10);
    std::string ExpectedOut="Length is: 20\n";
    testing::internal::CaptureStdout();
    b1.length(20);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (Box, Height_Test) {
    Box b1(10,10,10);
    std::string ExpectedOut="Height is: 30\n";
    testing::internal::CaptureStdout();
    b1.height(30);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST (Box, Breadth_Test) {
    Box b1(10,10,10);
    std::string ExpectedOut="Breadth is: 40\n";
    testing::internal::CaptureStdout();
    b1.breadth(40);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

}
