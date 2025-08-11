# History of C++

- C (created in 1972) was fast, powerful, and great for low-level systems programming
  But software was getting more complex like telecom systems, simulation software etc, coding in C was became tough because of

- Problem seen in C:
    - Lack of Data Abstraction; structs was there but they can't contain function
    - Unsafe APIs; Manual casting and function pointers make C Error prone
    - No Reusability Tool; as lacks inheritence and templates, then duplacacy required
    - Not fit for Advance modeling; Simulation, GUIs and Complex systems need OOP design

- How C++ Started 
    Bjarne Stroustrup was simulating distributed systems(Like Network and telephone exchange), He used a language called simula during his PHD, 
    Simula had Classes and Objects - good for modeling systems, But it was too slow not system level 
    So Bjarne Stroustrup brought the structure and abstraction of Simula into the performance and control of C 
    And he added Classes, Encapsulation; Inheritance, Polymorphism, Function overloading 
    Initially it was called "C with Classes" from 1979 
    Then it was renamed C++ in 1983; And keep Standardized & Evoluted 1st in 1998, 2003, 2011, 2014 and 2017, 2020, C++23, and C++26 is upcoming standard

- Even we can use C++ like C; Every valid C program (with minor exceptions) is valid C++.
    we can write "C-style C++":
    No classes
    No constructors
    No STL
    Manual memory management
    And we get, Access to C++ tools, like inline, constexpr, templates (if needed), Can Mix Modern features 

Then do we still need C ?
Yes because-
- C has a stable, simple, and universal ABI. *(The Most imp reason why C is still prefered)*
  In LLP, to communicate with hardware, link with OS kernels, or interface with bootloaders and firmware, we need a reliable and minimal ABI.
- For Transparent code: C++ can include vtables, RTTI(Run Time Type Information), hidden Constructor/Destructor, Larger binaries if 
  templates and exception sneaks in, But C is minimal No auto initialization/overloading, Transparent as hell, compiler do exactly what you write, Needed for tighter control(size and timing) thats what we need in Low level programmings
- Compiler limitations - Many embedded systems only support C compilers, Toolchains (like Keil, AVR-GCC) may lack full C++ support.
- Industry prefernmces: Safety critical Sectors Automotive, defense, aerospace prefer C; MISRA-C is a widely used standard; 
  While C++ Harder to audit Risk of accidental virtual dispatch/exception overhead
- Legacy: Huge C codebase (Linux, SQLite, OpebSSL); Rewriting them isn't practical

C++ I/O uses stream concept
iostream: 
ostream: To write output, istream: To read input
    << (Insertion Operator): Used with cout for output.
    >> (Extraction Operator): Used with cin for input.
----------------------------------------------------------------------------------------------------------------

# C++

- *Loops/Switch/Break & continue/Swiches/If statement and Recusrion (can use function overloading, default arguments, classes, etc. to make it more flexible)* 

- Inbuilt function:
    - To read string with space: std::getline(std::cin, Variable); 
      use: std::ws To ignore the whitespace error std::getline(std::cin >> std::ws, name); 
    - string function: name.insert(index_Number, "Entity_to insert"); name.clear(); mame.append("entity_to_add"); For more string function: https://cplusplus.com/reference/string/
    - in <cmath> All the maths function: max(), pow(), , abs() etc;  More math functions: https://cplusplus.com/reference/cmath/
    - fill(begin address[somply aray name], end [array name + size], value)   //Fills a range of elements with a specified value Array


Syntax:
For iostream: #include <iostream.h>  
#include "iostream.h"  

For Input/Output: 
std::cin>>variable_name;
std::cout<<variable_name;
cerr<<variable_name;    #To print error immediately
clog<<variable_name;    #Prints error but buffered: (temporary memory area "buffer"): Collect & Prints when buffere is full; useful for logs, diagnostics, or debug info.


- Namespace: 

 1. To prevent name conflicts
    can repeat the same variable in different namspaces

    namespace first{
        int x=1;
    }
    namespace second{
        int x=2;
    }
    int main(){
        using namespace first;
        int x=0;
        std::cout << x;              //o/p would be 0; 
        std::cout << first::x;                  //O/p would be 1...so on

    }

 2. std:: Standard namespace
    All the built-in standard library functions & objects (cin, cout, endl, vector, etc.) are in the std namespace; 
    - :: Is scope resulution operator(Compiler understand the command via) 

    Instead of wrting std:: eveytime we can:

        using namespace std;        #But this may create collisions
        cin>>variable_name;


- typedef: we can create own Identifier/name for any data type to avoid typos and increase readability
    -Syantax: typedef std::Data_Type New_Name/identifier;

              typedef std::string text_t; 
              typedef int number_t;
              main(){
                text_t firstName = "Hello" ;       //instead of std::string firstname
                
              }
- using: keyword same as typedef but little simpler 
    -Syntax: using New_name = Data type
             using text_t = std::string;

- Function templates: 
  Used to write generic functions that work with any DataType; To reduce same logic/code duplicacy like add(int, int), add(float, float)
  Syntax:
  #include<iostream>
  template<typename T, typename U, ...>

  Ex: template<typename T, typename U>
  auto max(T x, U y)    //Compilter will decide the return type
  return(x>y)? x:y;     //return x if(x>y) else y 

  int main()
  {
    std::cout << max(1, 2.1) << '\n';
    return 0;
  }


- inline function: 
  - inline function, the compiler tries to replace the function call with the actual code of the function at compile time
  - inline is a suggestion to the compiler (not a guarantee); it mainly used for Function-like macross, small, fast, simple functions Ex: #define SQUARE(x) ((x)*(x))
  
  - Syntax:
    inline return_type function_name(parameters)    
    {    
      // Function Code    
    }     


- Casting:  

    int a = 10;
    double d=a;                 //impilicit casting; int to double

    double x = (int) 3.12;       //Explicit casting 

    std::cout << (char) 100;        //O/p: d; Explicit casting


- Ternary operator:  ?: (? After if condition; : Before else condtion)
  - Recommended for simple/short expression else code becomes non-readable
    Ex:
    if(grade >= 60)
    {
      std::cout << "you pass!"; 
    }
    else{
      std::cout<<"you fail";
    }
    - If we use ternary: 
      grade>=60 ? std:: cout << "You pass!" : std::cout<<"You fail!";

- Passing array to function

   - Passing Array as a Pointer                //Works in Both C & C++                                  
      Syntax: returntype function_name (datatype *array_name)  

   - Passing as an Unsized Array              //Works in Both C & C++
      Syntax: rreturn_type function_name (data_type array_name[])       

   - Passing array as a Reference              //Works only in C++
      Syntax: returntype function_name(datatype (&arr_name)[size])  
      
   - Passing as a Sized Array using templates   //Works only in C++
      Syntax: template <size_t N>
      void function_Name(int (&arr)[N])
    

- Function Overloading: 
  - When we use same function name multiple times with different set of parameteres
  - Differetiate the function: Number of parameters, Type of parameters; 
  - What not differentiate: Return type of the function doesn't
    Ex: 
      int main(){
        bakeFood("Indian", "Italian");
        return 0
        }

        void bakeFood(){
          std::cout <<"Here is your Food"
        }
        void bakeFood(std::string dish1){
          std::<<"Here is your Food " << dish1 << "that your ordered! \n";
        }
        void bakeFood(std::string dish1, std::string dish2){
          std::cout << "Here is your" << dish1 << "and" << dish2 << "dishes that you ordered!\n";
        }

        O/p: Here is your Indian and Italian dishes that you ordered


- Dynamic Memory Allocation: 

 -Syntax: 
  Create:
  dataType* ptr_name = new dataType;
  *ptr_name = value;
   Delete: 
   delete ptr_name;

  Ex:
  int* num = new int;       // allocate memory for 1 int
  *num = 42;               // assign value 42 to that memory

Question; {Inline function needed or not; using namespace is recommanded or not, Function template when should we use} ?
      
- OOPs: 
Organizes code around objects, which combine data and behavior.
Organization: Code is grouped into classes, which define objects with attributes (data) and methods (functions).
  - Main OOP Entities:
    - Class:  Blueprint for creating objects (defines data + methods).
    - Object: An instance of a class.
    - Inheritance:    Mechanism to acquire properties and behavior from another class.
    - Polymorphism:   Same function name, different behaviors.
    - Abstraction:    Hiding complex details, showing only essential features.
    - Encapsulation:  Binding data and methods together, restricting direct access.

- *Class And Objects*: A class is a user-defined data type, like struct. but Advance of it, Whatever limitations struct had, classes fix. 
  - class has both Attributes (data) and Behaviors (functions).
  - Thinks as A Horse has Attributes/(variable) → 4 legs, color, age and Behaviors/action(function) → eating(), running(), riding() 
  - In C, a struct can hold multiple attributes (e.g., legs, age), but functions must be written separately, which makes the code complex and error-prone. while they must be binded together.
  - while Class binds data (attributes) and functions (methods) together, which allows better data protection and code organization.

- *Object*: An object is simply a variable/instance of a class
  - Syntax: 
    ClassName objectName(args...);

- Object binds variables and methods together which is called as *encapsulation or data binding.*

- This also hides implementation details because we use specific methods to access and modify data instead of accessing variables directly, which increases security. This is called *Data abstraction*

- invariants
  - One major issue with structs was invariants: to enforce rules, we had to write extra functions, but it was up to the programmer to call them and the compiler couldn’t enforce it.
  - But In classes, we can hide fields (private), so they can only be modified through methods. This lets the compiler enforce our rules.
 

