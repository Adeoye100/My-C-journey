#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>


class Rectangle
{
public:

    Rectangle();

    Rectangle(int w, int l);

    void setWidth(int width);

    void setLength(int length);

    int get_area() const;

private:
    int m_width;
    int m_length;
};

Rectangle::Rectangle()
{
    std::cout << "No param constructor called" << std::endl;
}

Rectangle::Rectangle(int w, int l)
{
    std::cout << "Two param constructor called" << std::endl;
    m_width  = w;
    m_length = l;
}

// ============================================================

void Rectangle::setWidth(int width)
{
    m_width = width;
}

void Rectangle::setLength(int length)
{
    m_length = length;
}

int Rectangle::get_area() const
{
    return m_width * m_length;
}


#endif // RECTANGLE_H
