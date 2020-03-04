# Data-Structure-HW2

You are asked to write a program which can

read a string which is composed of ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’ (any other characters will be ignored)
check whether the brackets are symmetrical (i.e. matched) or not using a stack
print out the result: either printout "OK! The string XXXX passed the check!!", or "Error!! You should add Y right after XX !!", or "Error!! You should add Y right before XX !!", depending on the situation of the 1st error from the left to the right, where XXXX represents the original string you just input, Y represents the suitable symbol (i.e., ), ], or }) that the string XX is firstly mismatched, and XX represents the part of the string that passes the check.
Example: suppose your code is named chkstrg, and is compiled to be an executable file named chkstrg1. After keyin chkstrg1 and press enter, you should see:

Please input a string: (then you input, say, [2*(5a)+4{x[y%($#)]ss}33], press enter)

then the program should printout:

OK! The string [2*(5a)+4{x[y%($#)]ss}33] passed the check!!

On the other hand, if one inputs [2*(5a)+4{x[y%($#)}ss}33], or ]234{}), or 123}4@#$[ , then the program should printout:

Error!! You should add ] right after [2*(5a)+4{x[y%($#) !!
Error!! You should add [ right before ] !!
Error!! You should add { right after 123 !!

, respectively.

There may exist other error situations not included in the above examples. Anyway, you are responsible to print out the 1st error if there is any.
