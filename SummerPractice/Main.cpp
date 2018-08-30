#include <iostream>
#include "Header.h"
#include "Bill.h"
//in this project im going to lern how to use pointers
//warning a function must always be declared before the main function

int main() 
{
	pointer_example();  
	pointer_example_withTables();
	exampleofNEWuse();
	ExapleofDinamicTable(10);
	/*Function call for wronge value of return statment*/
	int j = ExampleByValue(3);
	std::cout << "J: " << j << " i: 3"<< std::endl;
	//creation of an object from bill class
	Bill anObject;
	//creation of a pointer that points on anObject
	Bill *aPointerObject = &anObject;
	//the common to call a function from an object
	anObject.prinSomethin();
	//how to call a function from a pointer
	// noitice the symbol -> 
	aPointerObject->prinSomethin();
	//WRONG (aPointerObject.prinSomethin();)
	//this causes error
	system("pause");
	return 0; 
}