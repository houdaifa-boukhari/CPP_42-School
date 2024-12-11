#include <iostream>

class printer{
    private :
        bool avaible;
        std::string name;
    public :
        printer(){
            name = "My pinter";
            avaible = true;
        }
        void print(std::string message){
            int pages_required = message.length() / 5;
            if (pages_required > 10)
                throw "paper not Enogh";
            else
                std::cout << message << std::endl;
        }
        ~printer() {
            std::cout << "my Printer is destroyed\n";
        }
};

class A
{
    public :
    A() { std::cout << "A Constructer is Called\n";}
    ~A() { std::cout << "A Deonstructer is Called\n";}
};

class B
{
    public :
    B() { std::cout << "B Constructer is Called\n";}
    ~B() { std::cout << "B Deonstructer is Called\n";}
};

int main()
{
    printer obj;

    try {
        A a;
        B b;
        obj.print("I am just learning how to handle errors in my C++ code. I wrote this example that looks for a text file called some file, and if its not found will throw an exception.");
    }
    catch (const char *exp) {
        std::cout << "-----------------------------------\n";
        A a;
        B b;
        std::cout << "We have an exeption :: " << exp << std::endl;
    }
    catch (...) {
        std::cout << "We have an exeption\n";
    }
    std::cout << "-----------------------------------\n";
    std::cout << "Resum execution\n";
}