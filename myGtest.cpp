#include <iostream>
#include "gtest/gtest.h"

TEST(myGtest, test1) {
    EXPECT_EQ(3,1);
}
TEST(myGtest, test2) {
    EXPECT_EQ(2,2);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
