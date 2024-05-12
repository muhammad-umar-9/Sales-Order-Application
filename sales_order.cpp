#include <iostream>
#include <fstream>
using namespace std;

#include "source.cpp"

int main()
{
    Shopping s;
    App* a = &s;
    a->S_menu();
    return 0;
}