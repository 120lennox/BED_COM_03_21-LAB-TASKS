#include <iostream>
using namespace std;

class Box{
    Box();
    public:
        Box(const double newheight, const double newLength);
        ~Box();
        double getVolume();
        double setVolume();

        Box operator+(const Box& b);
        private:
            double height;
            double length;
};