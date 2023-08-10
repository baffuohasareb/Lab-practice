#include <iostream>

using namespace std;


class Quadrilateral{
    private:
        int x, y;
    
    public:
        void set_values(int _x, int _y){
            x = _x;
            y = _y;
        }

        int area(){
            return x*y;
        }
};
int main(){
    Quadrilateral square, rectangle;

    square.set_values(10, 5);
    rectangle.set_values(10, 10);

    cout << "The area of the square is " << square.area() << endl;
    cout << "The area of the rectangle is " << rectangle.area() << endl;
}