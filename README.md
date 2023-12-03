# String Calculator Kata - C++ Version
The following is a TDD Kata, an exercise in coding, refactoring and test-first.
I have completed it as part of the requirements for a job. The implementation is in C++.

## The kata

### Step 1: the simplest thing
Create a simple String calculator with a method ``int add(String numbers)``.

* The string argument can contain 0, 1 or 2 numbers, and will return their sum (for an empty string it will return 0) for example ``""`` or ``"1"`` or ``"1,2"``.
* Start with the simplest test case of an empty string and move to 1 and two numbers.
* Remember to solve things as simply as possible so that you force yourself to write tests you did not think about.
* Remember to refactor after each passing test.

### Step 2: handle an unknown amount of numbers
Allow the ``add()`` method to handle an unknown amount of numbers.

### Step 3: handle new lines between numbers
Allow the ``add()`` method to handle new lines between numbers (instead of commas).

* the following input is ok:  ``"1\n2,3"`` (will equal 6)
* the following input is NOT ok:  ``"1,\n"`` (not need to prove it - just clarifying)

### Step 4: support different delimiters
Support different delimiters: to change a delimiter, the beginning of the string will contain a separate line that looks like this:   

``"//[delimiter]\n[numbers...]"``

For example ``"//;\n1;2"`` should return 3 where the default delimiter is ``';'``.

The first line is optional. 
All existing scenarios should still be supported.

### Step 5: negative numbers
Calling ``add()`` with a negative number will throw an exception ``"negatives not allowed"`` - and the negative that was passed.

For example ``add("1,4,-1")`` should throw an exception with the message ``"negatives not allowed: -1"``.

If there are multiple negatives, show all of them in the exception message.

### Step 6: ignore big numbers
Numbers bigger than 1000 should be ignored, so adding 2 + 1001  = 2

Credits to [Roy Osherove](http://osherove.com/tdd-kata-1) for the original idea.

### Instructions for Running with C++ IDE:

1. **Download Source Code:**
   Download the source code from the repository using your preferred method.

2. **Open with C++ IDE:**
   Open the downloaded source code folder with any C++ compatible IDE such as Visual Studio Code, Code::Blocks, etc.

3. **Build and Run:**
   Use the IDE's build and run commands to compile and execute the program.

4. **Run Tests:**
   There is a file with the Tests, it's in its folder, follow the IDE's instructions to run them for verification.
