#include <iostream>

using namespace std;

class CPolygon{
protected:
    int width, height;

public:
    void set_values(int a, int b){
        width = a;
        height = b;
    }
};

class CTriangle: public CPolygon{
public:
    int area(){
        return (width*height)/2;
    }
};

class CRectangle: public CPolygon{
public:
    int area(){
        return width*height;
    }
};

int main()
{
    CRectangle rect1;
    CTriangle tri1;

    rect1.set_values(10, 5);
    tri1.set_values(10, 5);

    cout << "The area of the rectangle is: " << rect1.area() << endl;
    cout << "The area of the triangle is: " << tri1.area() << endl;
    return 0;
}
