# 42_push_swap

- This project is a very simple and a highly straightforward algorithm project: data must be sorted.
- You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.
- Your goal? Write a program in C called push_swap which calculates and displays on the standard output the smallest program, made of Push swap language instructions, that sorts the integers received as arguments.

## Rules
- You have 2 stacks named 'a' and 'b'.
- At the beginning the stack 'a' contains a random amount of negative and/or positive integers which cannot be duplicated, stack 'b' is empty.
- The goal is to sort in ascending order numbers into stack 'a'.
- To do so you have the following operations at your disposal:
  - sa (swap a): Swap the first 2 elements at the top of stack 'a', do nothing if there is only one or no elements.
  - sb (swap b): Swap the first 2 elements at the top of stack 'b', do nothing if there is only one or no elements.
  - ss : sa and sb at the same time.
  - pa (push a): Take the first element at the top of 'b' and put it at the top of 'a', do nothing if 'b' is empty.
  - pb (push b): Take the first element at the top of 'a' and put it at the top of 'b', do nothing if 'a' is empty.
  - ra (rotate a): Shift up all elements of stack 'a' by 1, the first element becomes the last one.
  - rb (rotate b): Shift up all elements of stack 'b' by 1, the first element becomes the last one.
  - rr : ra and rb at the same time.
  - rra (reverse rotate a): Shift down all elements of stack 'a' by 1, the last element becomes the first one.
  - rrb (reverse rotate b): Shift down all elements of stack 'b' by 1, the last element becomes the first one.
  - rrr : rra and rrb at the same time.


# Bonus

* Write a program named checker that takes as an argument the stack 'a' formatted as a list of integers.
* If no argument is given, it stops and displays nothing. It will then wait and read instructions on the standard input, each instruction will be followed by ’\n’.
* Once all the instructions have been read, the program has to execute them on the stack received as an argument.
* If after executing those instructions, the stack 'a' is actually sorted and the stack 'b' is empty, then the program must display "OK" followed by a ’\n’ on the standard output.
* In every other case, it must display "KO" followed by a ’\n’ on the standard output.
* In case of error, you must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments are not integers, some arguments are bigger than an integer, there are duplicates, an instruction doesn’t exist and/or is incorrectly formatted.
