// https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true

#include <iostream>
using namespace std;

class Box 
{
    private:
        int l, b, h;
    public:
        
        Box() {}
        Box(int _l, int _b, int _h) : l(_l), b(_b), h(_h) {}
        Box(const Box& a) : l(a.l), b(a.b), h(a.h) {}

        int getLength()
        {
            return l;
        }

        int getBreadth()
        {
            return b;
        }

        int getHeight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            return l * b * h;
        }

        friend bool operator < (const Box& _a, const Box& _b)
        {
            if (_a.l < _b.l || _a.b < _b.b && _a.l == _b.l || _a.h < _b.h && _a.b == _b.b && _a.l == _b.l)
                return true;
            else
                return false;
        }

        friend ostream& operator << (ostream& out, const Box& a)
        {
            out << a.l << " " << a.b << " " << a.h;
            return out;
        }

};

int main()
{
    Box b1;
    Box b2(2, 3, 4);

    cout << b2.getLength() << endl << b2.getBreadth() << endl << b2.getHeight();
    cout << endl << b2.CalculateVolume();
    bool x = (b1 < b2);
    cout << endl << b2;
}