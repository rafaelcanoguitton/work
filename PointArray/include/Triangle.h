#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle : public Polygon {
public :

Triangle ( const Point &a , const Point &b , const Point &c);

virtual double area () const ;

};

#endif // TRIANGLE_H
