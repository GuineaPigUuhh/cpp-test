#include <iostream>
#include <string>
using namespace std;

class Window
{
    public:
        string name;
        int width;
        int height;

        void printParams()
        {
            std::cout << name + "\n";
            std::cout << std::to_string(width) + "\n";
            std::cout << std::to_string(height) + "\n";
        }
};


int main()
{
    Window testWindow;
    testWindow.name = "Test!";
    testWindow.width = 200;
    testWindow.height = 200;

    testWindow.printParams();

    return 0;
}