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

## The New Boston Tutorials

### classes
> ![screenshot](/Class.png)
> * class declaration:  class Myclass{};
> * access spacifire: public:  (allows the to other function and classes to access this class )
> * see example on code 
> * creation off an object in order to define which class to call

### constractors
> ![constractors](/constructor(6).png)
> * the never have a return type 
> * How do i  know that it is a constractor?
> * (Anwser)The class has the same name as the function inside it  
> * Main use of the constractor is to assing (initialize) values 

### Unary Scope Resolution Operator ::
> ![Unary](/UnaryScopeResolutionOperator.png)

### function Overload
> * two or more  functions with the same name that can take diferent inputs 
> * exp [printNumber(int x) printNumber(double x)]
> * ![function](/FunctionOverloading.png)

### Recursion 
> * a function can call it self
> * ![Recursion](/Recursion.png)

### Arrays
> *  pass an array in a function
> * ![Arrays](/Array.png)

### Pointer 
> * if you add an integer to a pointer it changes the memory n elements away
> * expl ( pointer ++;) 

### Arrow Member Selection Operator
> *  when you use a pointer to acces samething inside of an class you need to use the Arrow Member Selection Operator (->)
> *  ![Operator](/ArrowMemberSelectionOperator.png)

### Deconstuctor
> * Runs atomatecly opon the destruction of the constructor
> * ~class naome
> * this is a decostructor tha same name witth the class name but with a dilda(~) before
> * when the programm in finised runing the deconstactor is called
> * the deconstractor CANT be overloaded, have values ,void or enithing
> *   ![Deconstuctor1](/Deconstuctor1.png) ![Deconstuctor2](/DecUnstuctor2.png) ![Deconstuctor3](/DecUnstucto3.png) 