#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Polygon {

public :

Rectangle ( const Point &a , const Point &b);
Rectangle ( const int a , const int b , const int c , const int d);
virtual double area () const ;
};

#endif // RECTANGLE_H
