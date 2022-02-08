//
// Created by pc-etude-michel on 08/02/2022.
//

#include <iostream>

#include "Point.h"

int main(int argc, char *argv[]){
    std::cout << "Génération d'un point A(3,2)" << std::endl;
    Point A(3,2);
    std::cout << "A.x = "<<A.getX()<<" A.y = "<<A.getY() << std::endl;
}
