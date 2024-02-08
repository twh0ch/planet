#include "planet.hpp"

int main() {
    Planet planet1(0, 0, 1, "Mars");
    Planet planet2(10, 5, 0.5, "Venera");

    std::thread thread1(&Planet::move, &planet1);
    std::thread thread2(&Planet::move, &planet2);

    while (true) {
        planet1.getPosition();
        planet2.getPosition();
        std::this_thread::sleep_for(std::chrono::seconds(1));

		std::cout << std::endl;
    }
    return 0;
}
