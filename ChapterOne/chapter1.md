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



[^1]: End of File

