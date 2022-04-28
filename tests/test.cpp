#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(RectangleArea, PositiveArea) {
    Rectangle testRec1(4,6);
    int actual1 = testRec1.area();
    EXPECT_EQ(actual1, 24);
}

TEST(RectangleArea, NegativeArea) {
    Rectangle testRec2(-5,3);
    int actual2 = testRec2.area();
    EXPECT_EQ(actual2, -15);
}

TEST(RectanglePerimeter, PositivePerimeter) {
    Rectangle testRec3(1,4);
    int actual3 = testRec3.perimeter();
    EXPECT_EQ(actual3, 10);
}

TEST(RectanglePerimeter, ZeroPerimeter) {
    Rectangle testRec4(-5,5);
    int actual4 = testRec4.area();
    EXPECT_EQ(actual4, 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
