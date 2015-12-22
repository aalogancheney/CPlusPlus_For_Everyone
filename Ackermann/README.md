#Ackermann Function

The Ackermann function was first used in the late 1920's (yes, before computers were around) as one of the simplest examples of a computable function that is not primitive recursive. During this time, the field of computation was well underway even before the modern computer exploded on the scene. Two mathematicians, Gabriel Sudan and Wilhelm Ackermann, who were students of David Hilbert, were involved in the field of computation. An early belief in the field of computation was: any function that could be written as an algorithm was necessarily primitive recursive. Ackermann and Sudan disproved this early assumption.

A primitive recursive function can be thought of as a "simple" function, i.e. for the input arguments the return value can be computed with simple calculations and/or references to earlier solutions in the recursive call stack. This is a large oversimplification, but will satisfy for this small example.

##The Code

Below, the Ackermann function is produced in its entirety:

```
unsigned int ackermann(unsigned int m, unsigned int n) 
{
	if (m == 0) { return n + 1; }
	if (n == 0) { return ackermann(m - 1, 1); }
	return ackermann(m - 1, ackermann(m, n - 1));
}
```

That's it.

(**Note:** The original Ackermann function used 3 arguments and was slightly different from this example. However, over the years, slight modifications to the original code have been accepted as the Ackermann function. The version above is a very common example.)

At first glance, the function seems simple enough. It takes two integer arguments `m` and `n`, and returns an integer. The ultimate base case is when the first argument `m` is 0, in which case the return value is determined by the second argument. The penultimate base case is when the second argument `n` is 0, in which case a recursive call is made with a decremented value for `m`. The last case is a doozy. The return value is a recursive call with the second argument also containing a recursive call -- this is where it gets messy.

##Some Output Values:

Below are some output values for small input of `m` and `n`.

| m/n |  0  |  1  |  2  |  3  |  4  |
| :-: | :-: | :-: | :-: | :-: | :-: |
|  0  |  1  |  2  |  3  |  4  |  5  |  
|  1  |  2  |  3  |  4  |  5  |  6  |
|  2  |  3  |  5  |  7  |  9  |  11 |
|  3  |  5  |  13 |  29 |  61 | 125 |
|  4  |  13 | 65533 | ... | ... | ... |

There is an immediate explosion for the values where `m = 4`. 

Interestingly enough, there is a closed form expression for all values of `m` and `n`:

+ When `m == 0`, the output is `n + 1`.
+ When `m == 1`, the output is `n + 2`.
+ When `m == 2`, the output is `2 * n + 3`.
+ When `m == 3`, the output is `pow(2, n + 3) - 3`.
+ When `m == 4`, the output is represented by a power tower, where we raise `2` to the power of `2`, `n + 3` times, and then subtract `3`. 

There are other closed form expressions for larger and larger input values, but the notation is messy. You can see some of these in the Wikipedia article on the Ackermann function [here](https://en.wikipedia.org/wiki/Ackermann_function).

The value for `ackermann(4, 2)` is given by `pow(2, ackermann(4, 1)) - 3 = pow(2, 65533) - 3`. You read that right, two raised to that large power. This is recursive by nature, and indeed `ackermann(4, 3) = pow(2, ackermann(4, 2) - 3`, which is a ridiculously large value. 

The growth rate for this function is larger than an exponential function, or even a multiple exponential function. To compute the value of `ackermann(4, 2)`, it would take a modern computer on the order of 4 months to calculate. 

##Conclusion

Recursion is weird. And cool. Checkout the [`ackermann.cpp`](https://github.com/aalogancheney/CPlusPlus_For_Everyone/blob/master/Ackermann/ackermann.cpp), which contains the Ackermann function as well as a `main` method that computes the values for the small input shown above. Be warned, changing the values on the `for` loops will result in very long computation times, and you'll likely have to terminate your program. 
