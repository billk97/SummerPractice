#include <iostream>
#include "Header.h"
/*this function will give a basic understading of the use of new */

void exampleofNEWuse() 
{
	//initialazation off new space for a float value
	float * name = new  float;
	//assign a value 
	*name = 2.0F; // this is the way to write a float
	std::cout << "name memory: " << name << " value: " << *name << std::endl;
}