#include "serviceappcpp.h"
#include <iostream>

using namespace std;

HelloWorld::HelloWorld()
    {
	cout << "Constructor called" << endl; 
    }

HelloWorld::~HelloWorld()
    {
	cout << "Destructor called " <<endl; 
    }

void HelloWorld::PrintHelloWorld()
    {
    cout << "Hello World!\n";
    }

