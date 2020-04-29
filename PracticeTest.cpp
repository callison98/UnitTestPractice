/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("abc");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_palindrome4)
{
    Practice obj;
    bool actual = obj.isPalindrome("abababs");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome5)
{
    Practice obj;
    bool actual = obj.isPalindrome(" a  ");
    ASSERT_FALSE(actual);
}