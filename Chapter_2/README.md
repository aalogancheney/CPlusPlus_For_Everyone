##Chapter 2: Fundamental Data Types

Chapter 2 of C++ For Everyone introduces variables, constants, and several primitive data types, including integers and floating point numbers. Basic mathematical expressions are also discussed, and different libraries are used, including `<algorithm>` and `<cmath>`. 

With the introduction of variables, the concepts of receiving input from a user and processing that input are also explored. Whereas Chapter 1 asked for static programs, Chapter 2 expands on key programming concepts that make code more versitile. 

Comments and code layout are also covered with an emphasis on good practices. 

###Makefile

The [makefile](https://github.com/aalogancheney/CPlusPlus_For_Everyone/blob/master/Chapter_2/makefile) provided in this directory can be used to automatically compile the executables. See the [Chapter 1](https://github.com/aalogancheney/CPlusPlus_For_Everyone/tree/master/Chapter_1) directory for an explanation of how to use the makefile to compile code. 

###Code Formatting

If you are interested in starting a heated debate between programmers, ask them about their opinion of code formatting. You will likely receive passionate opinions one way or another on variable names, brace formatting, number of indents, method naming, etc. In the end, though, it comes down to consistency: as long as you have a style and stick to it, you'll be fine.

####Why do we care?

Well-formatted code has several benefits over poorly-formatted code:

+ It's easier to read and understand.
+ The intent of the program is clear.
+ When formatting is consistent across a large code base, it's easy to understand different parts of the project even if you haven't seen that particular file before
+ Self-documenting code saves programmers time from writing comments. 
+ Comments within programs can become outdated if part of the program changes, but with good variable names / function names, the documentation is built into the program itself.

The list goes on. 

####Some examples

Consider the following two pieces of code:

```
int main(int argc, char *argv[]) {
	std::cout << "Enter the dimensions of a rectangle: ";
	float x, y;
	std::cin >> x >> y;
	float p = x + x + y + y;
	std::cout << "The perimeter is " << p << std::end;
	return 0;
}
```

```
int main(int argc, char *argv[])
{
	std::cout << "Enter the dimensions of a rectangle: ";
	float width, height;
	std::cin >> width >> height;

	const float perimeter = 2 * (width + height);

	std::cout << "The perimeter is " << perimeter << std::endl;

	return 0;
}
```