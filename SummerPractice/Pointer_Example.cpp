#include <iostream>
#include "Header.h"

void  pointer_example()
{
	int a = 10;
	std::cout << "a = " << a << std::endl;
	/*the & symbol shows the memmory address of the a variable
	while the *symbol is a pointer that shows in the memory of the a variable
	(int type with this we can determin the length of the pointer)*/
	std::cout << "& a = " << &a << std::endl;
	int * a_pointer = &a;
	/*desplays the memory address of a*/
	std::cout << "a_pointer = " << a_pointer << std::endl;
	/*desplays the memory address of a_pointer*/
	std::cout << "& a_pointer = " << &a_pointer << std::endl;
	/*the * before a_pointer is like typinf ** which is a poionter on a pointer which defites the porpuse */
	std::cout << "* a_pointer = " << *a_pointer << std::endl;
	/*changed the value from 10 to 20*/
	*a_pointer = 20;
	std::cout << "the a has been changed to 20" << std::endl;
	/*desplays the value of the a */
	std::cout << "* a_pointer = " << *a_pointer << std::endl;
	/*desplays the value of the a */
	std::cout << "a = " << a << std::endl;
}