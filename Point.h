//
// Created by pc-etude-michel on 08/02/2022.
//

#ifndef CMAKE_CI_POINT_H
#define CMAKE_CI_POINT_H


class Point {
private : double x{}, y{};

public : Point(double _x, double _y);

double getX() const;
double getY() const;
};


#endif //CMAKE_CI_POINT_H
