#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
protected:
    int width, height;
public:
    Rectangle(int width, int hight) : width(width), height(height) {}
    
    int getwidth() const {
        return width;
    }
    
    virtual void setwidth(int width) {
        Rectangle::width=width;
    }
    
    int getHeight() const {
        return height;
    }
    
    virtual void setHeight(int height) {
        Rectangle::height=height;
    }
    
    int area() const { return width * height; }
};

class Square : public Rectangle
{
public:
    Square(int size): Rectangle(size, size) {}
    void setwidth(int width) {
        this->width = this->height = width;
    }
    
    void setHeight(int height) {
        this->height = this->width = height;
    }
};

void process(Rectangle& r)
{
    int w = r.getwidth();
    r.setHeight(10);
    
    cout << "expected area = " << (w*10)
         << ", got " << r.area() << endl;
}

struct RectangleFactory
{
    static Rectangle create_rectangle(int w, int h);
    static Rectangle create_square(int size);
};

int main()
{
    Rectangle r{3, 4};
    process(r);
    
    Square sq{5};
    process(sq);
    return 0;
}
