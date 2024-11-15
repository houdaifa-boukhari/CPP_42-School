#include <iostream>
using namespace std;


class A
{
    public :
       int a;
        A() {a = 0 , cout << "call constructer A\n";}
        ~A(){cout << "call deconstructer A\n";}
};

// int A::a = 0;

class B : virtual public A
{
    public :
        int b;
        B() {b = 1, a = 5 , cout << "call constructer B\n";}
        ~B(){cout << "call deconstructer B\n";}
        // int a;
        // A() {a = 0 , cout << "call constructer A\n";}
        // ~A(){cout << "call deconstructer A\n";}
};

class C : virtual public A
{
    public :
        int c;
        C() {c = 2 , a = 10 ,cout << "call constructer C\n";}
        ~C(){cout << "call deconstructer C\n";}
};

class D : public C , public B
{
    public :
        int d;
        D() {d = 3 , cout << "call constructer D\n";}
        ~D(){cout << "call deconstructer D\n";}
};




int main()
{
    D obj;

    cout << "Valeur A:: " << obj.a++ << endl;
    cout << "n eew Valeur A:: " << obj.a << endl; 
    cout << "Valeur A:: " << obj.a++ << endl;

    // cout << "Valeur A:: " << obj.C::a << endl;
    // cout << "Valeur B:: " << obj.b << endl;
    // cout << "Valeur C:: " << obj.c << endl;
    // cout << "Valeur D:: " << obj.d << endl;
}
