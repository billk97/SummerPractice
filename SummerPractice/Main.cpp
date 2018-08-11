#include <iostream>
#include "Header.h"
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
	system("pause");
	return 0; 

}