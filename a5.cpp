#include <iostream>
#include <cmath>

int main() {
    // Define the radius of the circle
    double radius = 10.0;

    // Define the value of pi
    const double pi = 3.14159265359;

    // Calculate the circumference
    double circumference = 2.0 * pi * radius;

    // Output the result
    std::cout << "The circumference of a circle with radius " << radius << " is: " << circumference << std::endl;

    return 0;
}
