# Arrays

## Compiler
Transforms C code, or Java... into byte code, 0's and 1's. Source code to machine code.
To include a 3rd party library need to add -l___ to the CLA.
This explains why CS50 wouldn't work when I tried it on my PC.

Really...
Compiling is actually one of 4 steps.
1. Preprocessing - find and replace. Get's info from preprocesing directives.
2. Compiling - converts our code into Assembly.
3. Assembling - Converts assembly code into 0's and 1's.
4. Linking - Combines all the 0's and 1's and combines them into 1 larger file.

<!-- Prototypes -->
If not included, compiler would error out.

<!-- Preprocessor directive -->
#include <std...>

e.g. the #include <stdbool.h> directive contains prototypes and related code to booleans.
e.g. the #include <stdid.h> directive contains prototypes and related code to scanf, printf, etc.

Decompiling or 'reverse-engineering'...
Sounds much easier than it is. 
Comes back up as a mess, no variables, function names, for loops etc.
If you're good enough to go from 01s to read the C that comes from it,
you're good enough to just write the program you are copying.

## Debugging Code

## Memory (RAM)
Contains e.g. 4GB, 8GB, 16GB.
This is then split into individual bytes and given an address in the memory chip.
Basically RAM hardware is simply a grid of manipulatable bytes that stores information in binary.

## Arrays
Sequence of values back to back in memory.
This is one of the reasons why we often need to specify the size of an array upon initialisation. 
e.g. int scores[3];

## Strings & Chars
By giving the type of char or int, we tell the byte to store the binary as the type we suggest. If we had only the binary the output for char h could be a h or as an int => 72.

Strings are terminated by special value (all bytes at 0) that tells the computer accessing the storage slot that the storage slot ends here.
Every string = n + 1 bytes/

## Command Line Arguments
Clang (C Compiler), cd, mv, etc all take command line arguments.
e.g. cd /Users, mv ./file.txt ./folder/file.txt

Can replace void in C main function with int argc, string argv[]...

```C
int main(int argc, string argv[]) {
    ...
}
```

## Cryptography
Sending and receiving information securely.

Encryption is the process of scrambling the information.
text -> cipher -> ciphertext

Ciphers often take in a key, as well as the text.