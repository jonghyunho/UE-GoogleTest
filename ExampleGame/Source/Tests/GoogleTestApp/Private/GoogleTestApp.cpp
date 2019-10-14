#include "GoogleTestApp.h"
 
#include "gtest/gtest.h"
#include "src/gtest-all.cc"
#include "src/gmock-all.cc"
#include "src/gtest_main.cc"
 
class GivenASampleTest : public ::testing::Test {
 
};
 
TEST_F(GivenASampleTest, WhenRunningSampleTestShouldPass) {
    ASSERT_TRUE(true);
}