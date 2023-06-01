#include <gtest/gtest.h>

#include "../lib/testsubject.h"


TEST(testSubjecttests,isEven){
    EXPECT_FALSE(TestSubject::isEven(7));
}

TEST(testSubjecttests,isEven){
    EXPECT_TRUE(TestSubject::isEven(4));
}

TEST(testSubjecttests,isEven){
    ASSERT_EQ(TestSubject::isEven(8),true);
}

TEST(MathTest, Square) {
    ASSERT_EQ(TestSubject::square(2), 4);
    ASSERT_EQ(TestSubject::square(3), 9);
}

TEST(MathTest, Square) {
    ASSERT_EQ(TestSubject::square(16), 256);
}

TEST(MathTest, Square) {
    ASSERT_GE(TestSubject::square(0), 0);
}