# Chapter1

## 1.5

Character processing is working on character streams. A stream consists of lines of symbols and a newline character.

The functions `c = getchar()` writes the next character of input into variable c. Normally, input come from the keyboard. The opposite, `putchar(c)` prints the content of c, usually to the screen.


### 1.5.1
How to recognize the end of stream?
Looking up for the EOF[^1] character. To handle with the EOF, the related variable is choosed to be int because size matters! The varibale has to hold EOF plus any char value, therefore choose integer variable.

### 1.5.2 

The use of `++i` is more concise and often more efficient. More information in [[chapter2]].
The int variable is at most of the machines a 16bit value and with its 32768 values very fast in an overflow.

`%ld` tells `printf()` the type of *long integer*. 
Using `%f` for float and also for double and `%.0f does not print the fractional part.

For empty *for*-loops, there is a so called *null statement*, which is necessary in c for empty loops.

### 1.5.3

Each sentences in *c* ends by a newline, so finding newlines ist finding number of sentences.

Care about the difference between `=` and `==`.

Character between two single quotes mean an integer value with the numerical value of the character set.


### 1.5.4

For using a good-readable style you can (you should) use symbolic constants like `TRUE` and `FALSE`. You should self define your own constants in the header before. 
```c 
#define IN 1
#define OUT 0

int main(){
        int c, nl, nw, nc, state;

        state = OUT;
        nl = nw = nc = 0;
        while((c=getchar()) != EOF){
            ++nc;
            if(c == '\n'){
                ++nl;
            }
            if(c == ' ' || c == '\n' || c == '\t'){
                state = OUT;
            }
            else if(state == OUT){
                state = IN;
                ++nw;
            }
        }
        printf("%d %d %d\n", nl, nw, nc);
}
```
 Assignment are associated from right to left, so an interessting assignment could be: 
```c
nl = nw = nc = 0;
```
ist the same as: 
```c
nl = (nw = (nc = 0));
```

One and *only* one statement of an **if-else** construct is processed.

## 1.6

To hold a number of occurrences of similiar keys, so use arrays. 

```c
#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    fwhite = nother = 0;
    for (i=0; i < 10; ++i){
        ndigit[i] = 0;
        while((c=getchar()) != EOF){
            if(c>='0' && c <= '9'){
                ++ndigit[c-'0'];
            }
            else if (c == ' ' || c == '\n' || c == '\t'){
                ++nwhite;
            }
            else{
                ++nother;
            }
            printf("digits =");
            for(i=0; i<10; ++i){
                printf(" %d", ndigit[i]);
            }
            printf(", white space = %d, other = %d\n", nwhite, nother);
            )
        }


    
}
```
`int ndigit[10]` to be 10 integers sorted into an array. Dont forget, arrays numerations begins at 0.

Is the string representation a digit, a number between 0 and 9, you can calculate `c-'0' ` to get the numeric value.


        
## 1.7

Functions are used to simplify code and reduce double code. The definition of a functions follows the structur:
```
return-type function-name(parameter declarations, ...){
    declarations
    statements
}
```

It is possible to call functions as parameter of other function (if they return the correct *return-type*).
A function has to have a `return` statement, but it isn't mandatory to return a value.
Typically (for example in the main function) if you return a zero, it stands for normal termination. A non-zero return value implies Error within the function. 



[^1]: End of File

