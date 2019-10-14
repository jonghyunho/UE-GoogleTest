#include "GoogleTestApp.h"
 
#include "gtest/gtest.h"
#include "src/gtest-all.cc"
#include "src/gmock-all.cc"
#include "src/gtest_main.cc"

#include "ExampleGameCore/Public/CFloatingActor.h"
 
class GivenASampleTest : public ::testing::Test {
 
};
 
TEST_F(GivenASampleTest, WhenRunningSampleTestShouldPass) {
  CFloatingActor* c = new CFloatingActor();
  ASSERT_NE(nullptr, c);
  delete c;
}