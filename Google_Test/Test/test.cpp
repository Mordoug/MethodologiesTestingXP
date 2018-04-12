#include "pch.h"
#include "gtest\gtest.h"
#include "../Google_Test/header.h"

TEST(TestCase, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCase, TestInput) {
	fileParser("Text.txt");

}