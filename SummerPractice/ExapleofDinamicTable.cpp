#include <iostream>
#include "Header.h"

void ExapleofDinamicTable(int size)
{
	//creation of a dinamic table
	int * Dtable = new int[size];
	for (int i = 0; i < size; i++) 
	{
		Dtable[i] = i;
		std::cout << "Dtable: " << Dtable[i] << std::endl;
	}
	/*allways remember to delete when new */
	delete[] Dtable;

}