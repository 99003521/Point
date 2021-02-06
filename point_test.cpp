#include "point.h"
#include<gtest/gtest.h>
namespace{
    TEST(Point,Origin){
        Point p1(0,0);
        Point p2(1,0);
        Point p3(0,-1000);

        EXPECT_TRUE(p1.isOrigin());
        EXPECT_FALSE(p2.isOrigin());
        EXPECT_FALSE(p3.isOrigin());

    }

    TEST(Point,Xaxis){
        Point p1(2,0);
        Point p2(-600,0);
        Point p3(0,0);

        EXPECT_TRUE(p1.isOnXAxis());
        EXPECT_FALSE(p2.isOnXAxis());
        EXPECT_FALSE(p3.isOnXAxis());

    }

    TEST(Point,Yaxis){
        Point p1(0,2);
        Point p2(-1000,2);
        Point p3(0,0);

        EXPECT_TRUE(p1.isOnYAxis());
        EXPECT_FALSE(p2.isOnYAxis());
        EXPECT_TRUE(p3.isOnYAxis());

    }

    TEST(Point,Quad){
        Point p1(2,3);
        Point p2(-56,3);
        Point p3(10000,-3);
        Point p4(-1,-300);
        Point p5(0,3);
        Point p6(2,0);
        Point p7(0,0);

        
        Quadrant temp1 = p1.quadrant();
        EXPECT_EQ(Q1, temp1);

        Quadrant temp2 = p2.quadrant();
        EXPECT_EQ(Q2, temp2);

        Quadrant temp3 = p3.quadrant();
        EXPECT_EQ(Q4, temp3);

        Quadrant temp4 = p4.quadrant();
        EXPECT_EQ(Q3, temp4);

        Quadrant temp5 = p5.quadrant();
        EXPECT_EQ(Q3, temp5);

        Quadrant temp6 = p6.quadrant();
        EXPECT_EQ(Xaxis, temp6);

        Quadrant temp7 = p7.quadrant();
        EXPECT_EQ(Origin, temp7);

    }


}
