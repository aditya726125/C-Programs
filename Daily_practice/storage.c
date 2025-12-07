/*
Storage classes -- In C , storage classes are used to define scope and lifetime of variables and functions,at the time of declarations in c we define both datatype and storage classes of variables and functions.
There are four storage classes:

1.Auto - Auto storage class is the default for all local variables and functions.There is no need to write auto in front of any declarations.
i. Memory - Auto variables are store in memory
ii. Scope - These variables are accessible in declared block.
iii. Lifetime - Lifetime of auto variable depend on how long the control remain inside the block.
iv. Default value - No initializations with any value.

2.Register - The register variable stored in cpu variable instead of memory and it gives high performance but we can't store variables frequently in register.It is not guranteed that all declared variables stored in register.
The register variables have no memory location.
Sntax : register int x;

3.Static - It is stored in memory using data segment instead of stag.As the variable declared it remained with program till the end rather then creating and distroying the variables.
Syntax: static int x;
Lifetime: Till the end of program.
Default value - 0

4.Extern - It is also known as external storage class.This class is used to divide big C programs into small C programs.It perform as a link between two or more files.The extern variables remain  with program till the end.

//WAP to print number 0-given number using function.

*/