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

Syntax 
For iostream: #include <iostream.h>  
#include "iostream.h"  

For Input/Output: 
std::cin<<variable_name;
std::cout<<variable_name;
cerr<<variable_name;    #To print error immediately
clog<<variable_name;    #Prints error but buffered: (temporary memory area "buffer"): Collect & Prints when buffere is full; useful for logs, diagnostics, or debug info.

std:: Standard namespace all the built-in standard library functions & objects (cin, cout, endl, vector, etc.) are in the std namespace; 
:: Is scope resulution operator(Compiler understand the command via) 
Instead of wrting std:: this eveytime we use 
using namespace std;        #But this may vreate collisions
cin>>variable_name;

Declaration and access: 
 int number = 10;  
    std::cout << "The value of number is: " << number << std::endl;  

