#include "planet.hpp"

Planet::Planet(double x_, double y_, double velocity_, const std::string& name_) 
    : x(x_), y(y_), velocity(velocity_), name(name_) {}

void Planet::move() {
    while (true) {
        if(x >= 50 && y >= 50 ){
            std::cout << "BOOOOOM" << std::endl;
            exit(1);
        }
        x += velocity;
        y += velocity;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Planet::getPosition() const {
    std::cout << name << " position: (" << x << ", " << y << ")" << std::endl;
}
