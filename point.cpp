/**
 * @file point.cpp
 * @author Aman Ajay Kalaskar (amanajay.kalaskar@ltts.com)
 * @brief this is a point locator program
 * @version 0.1
 * @date 2021-02-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "point.h"

Point::Point():m_x(0),m_y(0){

}
Point::Point(int x,int y):m_x(m_x),m_y(m_y) {

}
Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y){

}
double Point::distanceFromOrigin(){
    return int(sqrt(pow(m_x,2)+pow(m_y,2)));

}

Quadrant Point::quadrant() const{
    if (0==m_x)
        return Yaxis;
    if(0==m_y)
        return Xaxis;
    if(0==m_x && 0==m_y)
        return Origin;
    
    if(m_x>0 && m_y>0){
        // std::cout<<"inside Q1";
       return Q1;

    }
        

    if(m_x<0 && m_y>0)
       {
        std::cout<<"inside the quad Q2";
       return Q2;

    }

    if(m_x<0 && m_y<0)
       return Q3;

    if(m_x>0 && m_y<0)
        return Q4;
}


bool Point::isOrigin() const{
    if(m_x==0 && m_y==0)  
       return true;
}


bool Point::isOnXAxis() const{
    if(m_y==0){
          return true;
    }

}
bool Point::isOnYAxis() const{
    if(m_x==0){
          return true;
    }


}
void Point::display() const{
    std::cout<<"x val is "<<m_x<<"y val is"<<m_y;
}
