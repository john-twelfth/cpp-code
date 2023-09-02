#include <iostream>
#include <cmath>
int main() {
    int size;
    size = 10;

    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size*4+1; y++) {
            double dist1 = pow(((x - size) * (x - size) + (y - size) * (y - size)),0.5);
            double dist2 = pow(((x - size) * (x - size) + (y - 3 * size) * (y - 3 * size)),0.5);
            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                std::cout << "V";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int x = 1; x < 2 * size; x++) {
        for (int y = 0; y < x; y++) {
            std::cout << " ";
        }
        for (int y = 0; y < 4*size+1-2*x; y++) {
            std::cout << "V";
        }
        std::cout << std::endl;
    }
}