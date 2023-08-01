**Integer** 
	- Signed  5    -5
	- Unsigned  23u or 23U
	- Octa 023
	- Hex  0X3A
	- Binary  0b1100
**Floating point**	
- Float   23.0f,0.00f  
**Double** 
	-  
**Long double
**	- 
**long**
	- Never less than 4 bytes [citation needed].
**long long**
   	- usually 8 bytes
**Char(8 bit integer or 1 byte ) **
   - usually 1 byte, may be signed or unsigned if unqualified.  You can always formally declare a char as signed or unsigned if you need to be sure.
	- 'a', 'x', 
	- '\n'(new line character)
	- '\0' (null)
**Short**
	- usually 2 bytes
**Boolean**
	- bool x ;
	- True 1
	- False 0

**size_type or size_t
**
How big are all these data types? 
 Use sizeof operator sizeof(int) will return the number of bytes in an int.
Or check <limits> file for max/min size of various data types.

char <= short <= int <= long <= long long


Use #include <cstdint>.  There you will find std::uint32_t, std::int16_t etc.  But declared within the std:: namespace.
std::uint32_t should be preferred over uint32_t.



------------------------------------------------------------------


----------------------------------------------------------------------


String
	- Supported as a class
	- #include<string>
	- "hello there"
Pointers
	- Special data type for memory address
	- Same pointer maybe used to access many different variables. 

Preprocessor  directives 
#include<iostream>    //file will be search in a pre-defined location 

#define CAPACITY 5000  //the preprocessor will replace everything with 5000

Constants 
-don’t change while execution 
	1. With preprocessor or macros
	#define  ROOMS 4
	
	2. Declarations 
	const x =8;
	
ARRAY
	- Indexed from 0 to n-1 , n is #of elements
	-   Int age[];
	- Age[0],age[1],age[2],age[3] 
	- Implicit conversions 
Strings
	- Not native in C++
	- Arrays of character (better using string than char)
	- #include<string>
	
Type casting 
	- Explicitly specifying the data type of an expression.
Suppose you want to have several lines of code that print data out for debugging purposes, but you don't want those lines to make it to the final application, for efficiency reasons. Which of the following achieves the desired behavior by using preprocessor directives?

From <https://www.linkedin.com/learning/learning-c-plus-plus-14267389/quiz/urn:li:learningApiAssessment:38152423?resume=false&u=47981556> 


// comment the following line for the final application 
#define DEBUGGING 

// copy and customize this for every debugging line 
#ifdef DEBUGGING 
cout<<"Var1 = "<<var1<<endl; 
#endif



