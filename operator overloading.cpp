#include <iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float img;
    public:
    Complex()
    {
        real = 0;
        img = 0;

    }
    Complex(float r, float i)
    {
        real = 0;
        img = i;

    }
    void display()
    { cout << real <<" + " << img << "i" << endl;
    }
    Complex operator+(Complex c2)
    {
        return Complex(real + c2.real, img + c2.img);

    }
    Complex operator-(Complex c2)
    {
        return Complex(real - c2.real, img - c2.img);

    }
    Complex operator*(Complex c2)
    {
        float r =real * c2.real - img * c2.img;
        float i =real * c2.img + img * c2.img;
         
        return Complex(r,i);
    }

};
int main()
{
    Complex c1(3,2);
    Complex c2(1,7);
    cout<<"first complex number :";
    c1.display();
    cout<<"second complex number :";
    c2.display();
    Complex sum = c1 + c2;
    cout<<"addition:";
    sum.display();
    Complex diff = c1 - c2;
    cout<<"Subtraction:";
    Complex mul= c1 * c2;
    cout<<"multiplication:";
    mul.display();
    return 0;

}