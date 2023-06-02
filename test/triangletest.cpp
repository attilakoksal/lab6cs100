#include "gtest/gtest.h"
#include "../lib/Triangle.h"
#include <math.h>
using shapes::Triangle;

TEST(TriangleTests, testPerimeter1) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (static_cast<double>(aTriangle->getPerimeter()),9.5); //bug in the function because it doesnt consider parameters that arent ints
}

TEST(TriangleTests, testPerimeter2) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (static_cast<double>(aTriangle->getPerimeter()),9); //bug in the function because it doesnt consider parameters that arent ints
}

TEST(TriangleTests, testPerimeter3) 
{
    Triangle *aTriangle = new Triangle(5, 5, 5);
    EXPECT_EQ (static_cast<double>(aTriangle->getPerimeter()),15); //bug in the function because it doesnt consider parameters that arent ints
}

TEST(TriangleTests, testArea1)
{
    Triangle *aTriangle = new Triangle(3, 3, 3);
    EXPECT_EQ (aTriangle->getArea(), 3*1/2*sqrt(6.75));
}

TEST(TriangleTests, testArea2)
{
    Triangle *aTriangle = new Triangle(3, 3, 3);
    EXPECT_EQ (aTriangle->getArea(), 3.0*0.5*sqrt(6.75));
}

TEST(TirangleTests, testArea3)
{
    Triangle *t = new Triangle(5, 4, 3);
    EXPECT_TRUE(t->getArea() == 6);
}

TEST(TriangleTests, testKind1)
{
    Triangle *t = new Triangle(3, 3, 3);
    EXPECT_EQ (t->getKind(), Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTests, testKind2)
{
    Triangle *t = new Triangle(4, 3, 3);
    EXPECT_EQ (t->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, testKind3)
{
    Triangle *t = new Triangle(5, 4, 3);
    EXPECT_TRUE (t->getKind() != Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, testEq1)
{
    Triangle *t = new Triangle(3, 3, 3);
    EXPECT_TRUE (t->isEquilateral());
}

TEST(TriangleTests, testEq2)
{
    Triangle *t = new Triangle(4, 3, 3);
    EXPECT_TRUE (t->isEquilateral());
}

TEST(TriangleTests, testIso1)
{
    Triangle *t = new Triangle(3, 3, 3);
    EXPECT_TRUE (t->isIsosceles());
}

TEST(TriangleTests, testIso2)
{
    Triangle *t = new Triangle(4, 3, 3);
    EXPECT_TRUE (t->isIsosceles());
}

TEST(TriangleTests, const1)
{
    Triangle *t = new Triangle(3, 3, 3);
    EXPECT_TRUE(t->s1() == 3);
}

TEST(TriangleTests, const2)
{
    Triangle *t = new Triangle(5, 4, 3);
    EXPECT_TRUE(t->s2() == 5);
}

TEST(TriangleTests, const3)
{
    Triangle *t = new Triangle(7, 6, 5);
    EXPECT_TRUE(t->s3() == 5);
}