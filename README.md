# Array Index Out of Bounds in C

This repository demonstrates a common error in C programming: accessing memory beyond the allocated bounds of an array.  The `bug.c` file shows the problematic code, while `bugSolution.c` provides a corrected version.

**Problem:**
The original code attempts to write to a memory location outside of the `arr` array, leading to undefined behavior.  This behavior is undefined and can cause unexpected results such as program crashes or data corruption.

**Solution:**
The solution demonstrates how to check if the index is within the bounds of the array to prevent the error. It uses an explicit check to ensure we are not going beyond the allocated memory.

**How to Compile and Run:**
1. Save the files as `bug.c` and `bugSolution.c`. 
2. Compile using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the executable:
   ```bash
   ./bug
   ./bugSolution
   ```