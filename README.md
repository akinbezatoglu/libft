*This project has been created as part of the 42 curriculum by abezatog.*

### Description
This project features a collection of rewritten libc functions that will serve as a foundational static library for future C projects. Each function is starts with **ft_** and replicates the original behavior of the standard library to reinforce core programming concepts.
### Instructions
1. #### Prerequisites
	To compile and use this library, you will need the following tools:
	- A standard C compiler like ```cc```
	- The ```make``` utility
2. #### Compilation
	Navigate to the root directory of the project in your terminal and use the provided ```Makefile```
	- ```$ make```
	- Successful compilation will generate a static library archive named ```libft.a```
3. #### Usage
	Once the static library is created, you can link it to your own C projects.
	- Include the header file in your C source code:
	
		```#include "libft.h"```
	- Compile your project files along with the library by specifying the library path (-L) and name (-lft)

		```cc -Wall -Wextra -Werror main.c -L. -lft -o program```
4. #### Cleaning Up
	The ```Makefile``` includes standard rules to keep your project directory clean.
	- Remove object (.o) files:

		```make clean```
	- Remove object files and the ```libft.a``` binary:

		```make fclean```
	
	- Completely clean and recompile everything from scratch:

		```make re```

5. #### Resources
	- [FreeBSD Manual Pages](https://man.freebsd.org/cgi/man.cgi)
	- Linux Programmer's Manual
	- C Standart library Reference
	- W3schools - [C string (string.h) Library](https://www.w3schools.com/c/c_ref_string.php)

6. #### AI Usage

	AI has been used for the following purposes:
	- Testing for edge cases
	- Better understanding of the subject page