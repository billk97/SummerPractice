#include <iostream>
#include "Header.h"
/*this function will display an example of using pointters with tables */

void pointer_example_withTables() 
{
	/*keep in mind that the length of a table must be a number and not a variable and cannot be changed*/
	/*a static table of 100 chars */
	char  table[100] ="A_very_Big_Word";
	/*the whole table will be dasplaed*/
	std::cout << "table: " << table << std::endl;
	/*the creation of a sub table tha begins 4 char write from the main one*/
	char * sub_table = table + 6;
	std::cout << "sub_table: " << sub_table << std::endl;
	int a = 10;
	/*this is a dynamic table*/
	int * array = new int[a];
	//int  b_array [5];
	array[1] = 10;
	/*this is the same as
	array[0]=1;*/
	*array = 1;
	/* this is samthing acceptable but we lose the addres of b_array as a result delete is imposiple */
	//array = b_array;
	/*you should allways delete the allocatted space*/
	delete array;
	std::cout << "table"<<sizeof(table) << std::endl;
	std::cout << "su_table" << sizeof(sub_table) << std::endl;
	

}