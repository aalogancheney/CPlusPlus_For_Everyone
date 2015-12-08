##Chapter 1

The first chapter of C++ For Everyone focuses on basic programs that produce output to the terminal, get input from the user, and ask the user to perform simple arethmitic calculations. For some of the programs in this chapter I have written them from the perspective of a new programmer, and for others I have explicitly used more advanced techniques, including loops and variable input. The differences are intended to show how programs can be made more robust with variables and how they can be adapted to user-needs. 

Several of the later problems in this chapter ask users to "draw" images or words to the screen in ASCII art, which I have omitted from this folder since they don't have any particular value.

###Makefile

The [makefile](https://github.com/aalogancheney/CPlusPlus_For_Everyone/blob/master/Chapter_1/makefile) in this folder can be used for quick compilation. With all of the source files downloaded, you can type `make` at the terminal to automatically compile everything. 

If you would like to compile it yourself, you can type the following at the terminal/console:

`g++ -g -Wall p1_1.cpp -o p1_1`

A note on this command:

+ `g++` tells your computer which compiler to use. 
+ `-g` tells the compiler to put the program together with debug capabilities.
+ `-Wall` tells your compiler to show all warnings when putting your program together, even if the program still compiles.
+ `p1_1.cpp` is the name of the source file where the actual code is.
+ `-o` tells your computer to compile everything together into an executable.
+ `p1_1` is the name of the executable that will be created.

If you want to compile a different program, simply change the names of the different parts that correspond to a file/executable name.

###Running the Programs

To run any of the programs, you can do the following:

`./p1_1`

This will run the `p1_1` executable. To run any other executable, simply change the name. For example, to run the `p1_4` executable, you can type `./p1_4` at the terminal.