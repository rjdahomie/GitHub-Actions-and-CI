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

TEST(RectangleArea, ZeroArea) {
    Rectangle testRec3(0,3);
    int actual3 = testRec3.area();
    EXPECT_EQ(actual3, 0);
}

TEST(RectanglePerimeter, PositivePerimeter) {
    Rectangle testRec4(1,4);
    int actual4 = testRec4.perimeter();
    EXPECT_EQ(actual4, 10);
}

TEST(RectanglePerimeter, ZeroPerimeter) {
    Rectangle testRec5(-5,5);
    int actual5 = testRec5.perimeter();
    EXPECT_EQ(actual5, 0);
}

TEST(RectanglePerimeter, NegativePerimeter) {
    Rectangle testRec6(-7,5);
    int actual6 = testRec6.perimeter();
    EXPECT_EQ(actual6, -4);
}

TEST(RectangleConstructors, ZeroLength) {
    Rectangle testRec7(0,5);
    int actual7 = testRec7.get_width();
    EXPECT_EQ(actual7, 0);
}

TEST(RectangleConstructor, PositiveLength) {
    Rectangle testRec8(1,3);
    int actual8 = testRec8.get_width();
    EXPECT_EQ(actual8, 1);
}

TEST(RectangleConstructor, NegativeLength) {
    Rectangle testRec9(-8,2);
    int actual9 = testRec9.get_width();
    EXPECT_EQ(actual9, -8);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
