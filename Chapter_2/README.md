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

####Variables

Consider the following two snippets of code:

```
float x, y;
std::cin >> x >> y;
float p = x + x + y + y;
std::cout << p << std::endl;
```

```
float width, height;
std::cin >> width >> height;
float petimeter = 2 * (width + height);
std::cout << perimeter << std::endl;
```

Both pieces of code do the exact same thing: they get input from a user, calculate the perimeter of a rectangle, and display that to a user. However, if you had never seen either of these pieces of code before it is much clearer what the second block is doing thanks to well-chosen variable names. 

Whatever time is saved by typing fewer characters, it's no match for the long term benefit of having readable code with good variable names. The first piece of code would likely need a comment to explain what it's doing, whereas the second piece needs no explanation. This is the heart of self-documenting code: writing code well enough with descriptive variable names so that comments are only needed for tricky, interesting, or obscure pieces of code that cannot be written any other way. 

When choosing variable names, it's good to have rules for how to choose names as well as how to write those names. Different companies will likely have their own standards, which you will need to adpot, but until then having your own standard will prepare you.

+ Prefer longer, descriptive variable names to shorter ones. `width` is better than `w`. Of course, don't go overboard: `widthOfTheRectangle` is too verbose.
+ Pick a convention for variables with multiple words:
  + Pascal Case: `HereIsAPascalCaseVariable`. The first letter of each word is capitalized, including the first word.
  + Camel Case: `hereIsAnExampleOfCamelCase`. The first letter of each word -- except the first word -- is capitalized.
  + Underscores: `here_is_a_variable_with_underscores`. Each word is separated by underscores. 

As long as you have a standard way of writing code, you will be fine. The goal is to have consistency across your programs.