#include <gtest/gtest.h>
#include"Image.h"
namespace {
TEST (Image, Default_constructor) {
    std::string ExpectedOut="Default called!!\n";
    testing::internal::CaptureStdout();
    Image Y;
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST(Image, Parameterised) {
    std::string ExpectedOut="Parameterised called!!\n";
    testing::internal::CaptureStdout();
    Image C1(5,2,42,25);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST (Image , Copy_Constructor){
    Image C2(10,20,30,40) ;
    std::string ExpectedOut="Parameters copied!!\n";
    testing::internal::CaptureStdout();
    Image C1(C2);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST (Image, Move_test) {
    Image I1(10,20,10,20);
    std::string ExpectedOut="Image has been moved to first quadrant and now the position is 20,25";
    testing::internal::CaptureStdout();
    I1.move(1, 20, 25);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST (Image, Resize) {
    Image I1(10,20,10,20) ;
    std::string ExpectedOut="20,30";
    testing::internal::CaptureStdout();
    I1.resize(10, 10 );
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST (Image, Scale) {
    Image I1(10,20,10,20) ;
    std::string ExpectedOut=" The new image width and height after scaling with a factor is : 20 and 40\n";
    testing::internal::CaptureStdout();
    I1.scale(2);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
TEST (Image, Display) {
    Image I1(10,20,10,20) ;
    std::string ExpectedOut="The image width is : 10\nThe image height is : 20\n";
    testing::internal::CaptureStdout();
    I1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
}
