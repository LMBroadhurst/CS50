# C
Using a 'source code' that translates to machine code.
A compiler is a program that converts source code into machine code.
The compiler for C can be found here: https://www.scaler.com/topics/c/c-compiler-for-windows/

## Manual pages
Examples on manual.cs50.io, with simplified manual pages.

## Strings in C
Actually arrays of chars

# Linux
Very commonly used as an OS in the cloud.
Often no GUI, just a CLI.

## Integer Overflow
Memory/RAM (Random Access Memory).
This is where data is stored from our program.
These have finite memory. Fundamental physical limitations.

If you count to 7 with 3 bits, then go to 8, we have an integer overflow.
With 3 bits 7 = 111. To go to 8 we need 000 with a prefix of 1.
To the computer we have 0, not 8.

## Truncation
Integer / integer, points get thrown away.
This is truncation.
Can also happen if you have a float that needs 64bits and you cast it into a 32bit memory slot.

## Floating point imprecision
e.g. representing something with 20 decimal places with a 32bit slot results in floating point imprecision.
