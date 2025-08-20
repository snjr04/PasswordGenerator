#include <iostream>
#include "Encrypt.cpp"
#include <windows.h>

void init() {
    Encrypt obj;

    obj.init();

}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
	init();
	std::cout << "init is called;\n";
}
