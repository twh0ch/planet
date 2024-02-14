#ifndef PLANET_HPP
#define PLANET_HPP

#include <string>
#include <iostream>
#include <chrono>
#include <thread>

class Planet {
private:
    double x,y;
    double velocity;
    std::string name;

public:
    Planet(double x_, double y_, double velocity_, const std::string& name_);
    void move();
    void getPosition() const;
};

#endif
