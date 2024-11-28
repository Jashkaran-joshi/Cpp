#include <iostream>
#include <cmath> // for sqrt() and pow()

using namespace std;

int main() {
    // Declare variables for the coordinates
    double x1, y1, x2, y2;

    // Input the coordinates of the first point
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    // Input the coordinates of the second point
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    // Calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
