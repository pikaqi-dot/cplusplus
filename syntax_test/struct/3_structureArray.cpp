#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point points[3] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; ++i) {
        std::cout << "Point " << i+1 << ": (" << points[i].x << ", " << points[i].y << ")" << std::endl;
    }

    return 0;
}
