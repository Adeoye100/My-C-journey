#include <iostream>
#include "rectangle.h"

using namespace std;

//Box class
class Box{
public:


    Box(int w, int l, int h) : m_r(w, l), m_height(h)
    {
        cout << "Param Constructor Called" << endl;
    }


    int get_volume()
    {
        return m_r.get_area() * m_height;
    }

private:
    Rectangle m_r;
    int m_height;
};


int main()
{

    Rectangle r(10, 20);
   cout << "area : " << r.get_area() << endl;
    Box b(10, 20, 30);
   cout << "volume : " << b.get_volume() << endl;

    return 0;
}

