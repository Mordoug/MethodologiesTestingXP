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
TEST(TestCase, TestAlphabeticLetters) {
	vector<string> words;
	vector<string> expected;
	words.push_back("This");
	words.push_back("is");
	words.push_back("a");
	words.push_back("test.");
	expected.push_back("a");
	expected.push_back("estt");
	expected.push_back("ihst");
	expected.push_back("is");

	//ihst is a estt.
	//a estt ihst is
	EXPECT_EQ(expected, alphabatiseWords(words));
}

TEST(TestCase, Test) {
	vector<string> words;
	vector<string> expected;
	words.push_back("This");
	words.push_back("is");
	words.push_back("a");
	words.push_back("test.");
	expected.push_back("aeii");
	expected.push_back("hs");
	expected.push_back("s");
	expected.push_back("sttt.");

	//aeii hs s sttt
	//a estt ihst is
	EXPECT_EQ(expected, orderLetters(words));
}
