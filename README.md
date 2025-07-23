# Bitwise Operators in C++
Aim: To study and implement C++ Bitwise Operators

Tools Used: VS Code or Programiz Online Compiler

# Theory
Bitwise operators work directly on the binary digits (bits) of integer values, allowing programmers to manipulate data at its most fundamental level. These operators enable precise control over individual bits, making them particularly valuable for system-level programming, performance optimization, and hardware interaction. The following examples showcase practical applications of different bitwise operations in C++.

# Bitwise Operators types
1. Bitwise AND (&): Performs a logical AND operation on each pair of corresponding bits
2. Bitwise OR (|): Performs a logical OR operation on each pair of corresponding bits
3. Bitwise NOT (~): Performs a logical NOT operation on each bit (flips all bits)
4. Bitwise XOR (^): Performs an exclusive OR operation on each pair of corresponding bits
5. Left Shift (<<): Shifts all bits to the left by the specified number of positions
6. Right Shift (>>): Shifts all bits to the right by the specified number of positions

# Bit Setting and Re-setting
->Setting a Bit (Bit ON):
The program employs the bitwise OR operator (|) combined with a left-shifted mask (1 << position). This operation forces the specified bit to 1 while preserving all other bits in their original state.

->Clearing a Bit (Bit OFF):
To reset a bit, the program uses the bitwise AND operator (&) with the inverse (NOT) of the mask (~(1 << position)). This effectively turns off the target bit while leaving all other bits unchanged.

# Program-1: Bitwise Operation
The program initializes two integer variables with distinct binary patterns:
      x = 12 (binary: 1100)
      y = 5 (binary: 0101)

These values are carefully selected to showcase the fundamental behavior of bitwise operators. Each operation's outcome is captured in separate variables and printed, offering a clear view of binary-level data processing in C++.

-->Program Structure and Algorithm

1. Declare and set x = 12, y = 5
2. Compute and store these bitwise operations:
3. Binary AND (x & y)
4. Binary OR (x | y)
5. Binary complement (~x, ~y)
6. Binary XOR (x ^ y)
7. Left shift operations (x << 2, y << 2)
8. Right shift operations (x >> 2, y >> 2)
9. Output all computation results
10. End execution


# Program-2: Set and Reset Bit
The program starts by declaring an integer variable value and initializing it to 345 (binary: 101011001). This demonstrates practical techniques for modifying individual bits within a number - a fundamental operation in low-level programming.

-->Bit Operations Explained:
-> Setting a Bit (Turn ON):
1. Formula: value | (1 << position)
2. Creates a mask with 1 at target position
3. OR operation flips only the specified bit to 1
4. All other bits remain unchanged

->Clearing a Bit (Turn OFF):
1. Formula: value & ~(1 << position)
2. Generates an inverse mask with 0 at target position
3. AND operation resets only the specified bit to 0
4. Preserves all other bit values

-->Algorithm:
1. Initialize value = 345 (binary: 101011001)
2. Prompt user for bit position to set (0-31)
3. Perform bit-setting operation
4. Prompt user for bit position to clear (0-31)
5. Perform bit-clearing operation
6. Display original and modified values
7. End program


# Conclusion
Hence, we performed the Bitwise Operations on inputted numbers and we have set and reset the specified digits of a binary number. 
