#include "point.h"
#include<gtest/gtest.h>
namespace{
    TEST(Point,Origin){
        Point p1(0,0);
        Point p2(1,0);
        Point p3(0,-1000);

        EXPECT_EQ(true, p1.isOrigin());
        EXPECT_EQ(false, p2.isOrigin());
        EXPECT_EQ(false, p3.isOrigin());

    }

    TEST(Point,Xaxis){
        Point p1(2,0);
        Point p1(-600,0);
        Point p1(0,0);

        EXPECT_EQ(true, p1.isOnXAxis());
        EXPECT_EQ(false, p1.isOnXAxis());
        EXPECT_EQ(true, p1.isOnXAxis());

    }

    TEST(Point,Yaxis){
        Point p1(0,2);
        Point p2(-1000,2);
        Point p3(0,0);

        EXPECT_EQ(true, p1.isOnYAxis());
        EXPECT_EQ(false, p2.isOnYAxis());
        EXPECT_EQ(true, p3.isOnYAxis());

    }

    TEST(Point,Quad){
        Point p1(2,3);
        Point p2(-56,3);
        Point p3(10000,-3);
        Point p4(-1,-300);
        Point p5(0,3);
        Point p6(2,0);
        Point p7(0,0);

        EXPECT_EQ(Q1, p1.quadrant());
        EXPECT_EQ(Q2, p2.quadrant());
        EXPECT_EQ(Q4, p3.quadrant());
        EXPECT_EQ(Q3, p4.quadrant());
        EXPECT_EQ(Yaxis, p5.quadrant());
        EXPECT_EQ(Xaxis, p6.quadrant());
        EXPECT_EQ(Origin, p7.quadrant());

    }


}
