#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    
    private:
    int width, height;
    
    public:

    Rectangle(){
        cin >> width >> height;
    }
    
    int getWidth(){
        return width;
    }
    
    int getHeight(){
        return height;
    }
    
    void display(){
        cout << width << " " << height << endl;
    }
};

class RectangleArea: public Rectangle{
    private:
    int width, height, area;
    
    public:
    void read_input(){
        width = getWidth();
        height = getHeight();
    }
    
    void display(){
        area = width * height;
        cout << area;
    }
};
