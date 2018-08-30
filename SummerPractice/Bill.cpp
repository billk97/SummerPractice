#include <iostream>
#include "Bill.h"


//creation off constuctor
Bill::Bill()
{
	std::cout << "i am the constuctor" << std::endl;
}
/*thos is the decunstuctor it must be empty*/
Bill::~Bill(){
	std::cout << "i am the decunstructor" << std::endl;
}


void Bill::prinSomethin() {
	std::cout << "Something" << std::endl;
}