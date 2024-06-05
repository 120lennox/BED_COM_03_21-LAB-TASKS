#include <iostream>
using namespace std;

namespace Shapes{
    class Triangle{
        //default constructor
        Triangle();
        private:
            double length;
            double height;
        
        public:
            void set_length(float l);
            void set_height(float h);
            float get_length();
            float get_height();
    };

    class Sqaure{
        private:
            Sqaure();
            double length;
        public:
            void set_length(float l);
            float get_length();

    };

    class Circle{
        private:
            Circle();
            double radius;
        public:
            void set_length(float l);
            float get_length();

    };
}