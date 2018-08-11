## This is a C ++ repository for lerning the basics 
 * Note that a table is nothing more than a banch of memory address 

 * char s[] "test";

 > - the string in this version is saved in a table with exactily the length of the string thats been constracted for that purpose
 > - its possible to have access in the contents of s 
 > - its possible to change then
 > - i can't change the value (const char ) 

 * char * s = "test";
 > - Here a static table is created read only and a pointer that shows the first row of the table 
 > - the contents of "test" cannot be changed 
 > - the pointer s can be changed 

 ### A program has 5 tipes of memory
> * **code/text segment** (static) run time binary mashin code  
> * **data segment** initialized memory space includes(static variables , class signatur ,global variables)
> * **BBS** uninitialized memory space
> * **heap /σωρος** dynamic memory initialazation (new)
> * **call stack /stoiba** for local variables and function calls 

* keep in mind that in c and c ++ the defult value of a variable is nothing 
> * int c ;
> - cout << c; 
> it will display garbage

### By value/By reference 

> * **By value** 
> (Just like java) 
> * the value is copied 
> * if the value is changed inside the the function then the changes can not be saved 