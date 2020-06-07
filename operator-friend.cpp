#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(int r = 0, int i = 0)
        : real(r), image(i) {}
    friend Complex operator+(Complex &a, Complex &b);
    void pt()
    {
        cout << "real" << real << ", image" << image << endl;
    }

private:
    int real;
    int image;
};

Complex operator+(Complex &a, Complex &b)
{
    Complex t;
    t.real = a.real + b.real;
    t.image = a.image + b.image;
    return t;
}

int main(int argc, char const *argv[])
{
    Complex c1(1, 2), c2(2, 3);
    Complex c3 = c1 + c2;

    c3.pt();

    // cout << "real" << c3.real << ", image" << c3.image << endl;
    /* code */
    return 0;
}
