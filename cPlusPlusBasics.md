# Basics of C++
## 1. Variables and Data types
### Integer
- Signed  5 ,-5
- Unsigned  23u or 23U
- Octa 023
- Hex  0X3A
- Binary  0b1100
### Floating point	
- Float   23.0f,0.00f  
### Double
-  
#### Long double
- 
### long
- Never less than 4 bytes.
### long long
   - usually 8 bytes
### Char(8 bit integer or 1 byte ) 
- usually 1 byte, may be signed or unsigned if unqualified.  You can always formally declare a char as signed or unsigned if you need to be sure.
- 'a', 'x', 
- '\n'(new line character)
- '\0' (null)
### Short
	- usually 2 bytes
### Boolean
- bool x ;
- True 1
- False 0

**size_type or size_t**


### Notes 
#### How big are all these data types? 
 	- Use sizeof operator sizeof(int) will return the number of bytes in an int. Or check <limits> file for max/min size of various data types.

char <= short <= int <= long <= long long

	- You may have come across code where integer types are expressed as int16_t or uint32_t. Use #include <cstdint>.  There you will find std::uint32_t, std::int16_t etc.  But declared within the std:: namespace. **std::uint32_t should be preferred over uint32_t.**

##### Topics
	-Serializing data.
	-Packing data tightly and predictably.
	-Performing bit operations.

------------------------------------------------------------------


----------------------------------------------------------------------
## 2. Compound Data Types
### Array
	-  Indexed from 0 to n-1 , n is #of elements 
	- Implicit conversions 
	- store multiple values in a single variable
> string cars[4]; 
> string cars[4] = {"Toyota", "BMW", "Ford", "Mazda"};  
> string cars[] = {"Toyota", "BMW", "Ford", "Mazda"};  

- cars[0] is toyota ,....cars[3] is mazda
- Accessing array
> int a = cars[0]
-2d array
> string cars [2] [3] = {{1,2,3},{4,5,6}}

### Constants 
- don’t change while execution 
	1. With preprocessor or macros
	#define  ROOMS 4
	
	2. Declarations 
	const x =8;
### String
	- Supported as a class
	- "hello there"
 	- Not native in C++
	- Arrays of character (better using string than char)
	- #include<string>
 
### Pointers
	- Special data type for memory address
	- Same pointer maybe used to access many different variables. 

### References


### Dynamic Programming and Heap

### Preprocessor directives 
	#include<iostream>    //file will be search in a pre-defined location 
	#define CAPACITY 5000  //the preprocessor will replace everything with 5000
	

	
### Type casting 
	-  Explicitly specifying the data type of an expression.
	-  Suppose you want to have several lines of code that print data out for debugging purposes, but you don't want those lines to make it to the final application, for efficiency reasons. Which of the following achieves the desired behavior by using preprocessor directives?


### DEBUGGING
	// comment the following line for the final application 
	#define DEBUGGING 

	// copy and customize this for every debugging line 
	#ifdef DEBUGGING 
	cout<<"Var1 = "<<var1<<endl; 
	#endif

### Structure 
- containers of hetrogenous data mambers
```cpp   
	struct car {
		string name;
		int year;
		unsigned char car_purpose;
		string model;
		}
```
### enum
-user-defined data type that consists of integral constants
-one benefit over constant is they provide encapsulation 
```cpp
	enum car_purpose {offroad,dailydriver,tow,camper};

	int main(){
	car mycar1;
	mycar1.name= "Toyota";
	mycar1.model="tacoma";
	mycar1.car_purpose=offroad;
        std::cout................................... finish.................
	}
```
### Classes
- may contain data and member functions
  	- Example car.make, car.paint()
- contain Public Constructor, data, and methods
- Private data and methods
- Destructor
- Separate declarations and definitions in the h and cpp file respectively
- Instance of class is called object eg. Cout,cin 
		○ Example : make, model, year…..
- Members maybe public or private or protected 
- by default class members are private
- Two types of data access
	- setters:write into data members
	- getters:return the values

```cpp   
//mycar.h
	class car
		{
	Public:
		string get_name(){return name;}
		int get_model(){return model;}
		void set_year(int y){
			year=y;
			}
	Private:
		string name;                       // class member 
		int year;				// class member 
		unsigned char car_purpose;		// class member 
		string model;				// class member 
		}
```

- 




