#include <gtest/gtest.h>

#include "../lib/testsubject.h"


TEST(TEST1,isEven){
    EXPECT_FALSE(TestSubject::isEven(7));
}

TEST(TEST2,isEven){
    EXPECT_TRUE(TestSubject::isEven(4));
}

TEST(TEST3,isEven){
    ASSERT_EQ(TestSubject::isEven(8),true);
}

TEST(TEST4, Square) {
    ASSERT_EQ(TestSubject::square(2), 4);
    ASSERT_EQ(TestSubject::square(3), 9);
}

TEST(TEST5, Square) {
    ASSERT_EQ(TestSubject::square(16), 256);
}

TEST(TEST6, Square) {
    ASSERT_GE(TestSubject::square(0), 0);
}