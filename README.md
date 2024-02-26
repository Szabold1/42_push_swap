<h1 align="center">42_push_swap</h1>

<p align="center">
  <a href="#about">About</a> &#xa0; | &#xa0;
  <a href="#rules">Rules</a> &#xa0; | &#xa0;
  <a href="#bonus">Bonus</a> &#xa0; | &#xa0;
  <a href="#usage">Usage</a> &#xa0; | &#xa0;
  <a href="#allowed-functions">Allowed functions</a> &#xa0; | &#xa0;
  <a href="https://github.com/Szabold1" target="_blank">Author</a>
</p>

<br>

## About

This project is a simple yet challenging algorithm task where the goal is to sort a set of integer values using two stacks and a defined set of instructions. The objective is to create a program in C called `push_swap` that generates the smallest possible sequence of instructions in the Push Swap language to sort the integers provided as arguments.

## Rules

- Stacks: There are two stacks named 'a' and 'b'.
- Initial Configuration: Stack 'a' contains a random assortment of negative and/or positive integers without duplication, while stack 'b' is initially empty.
- Sorting Objective: The goal is to sort the integers in stack 'a' in ascending order.
- Available Operations:
  - `sa`: Swap the first 2 elements at the top of stack 'a'.
  - `sb`: Swap the first 2 elements at the top of stack 'b'.
  - `ss`: Perform sa and sb simultaneously.
  - `pa`: Push the first element at the top of stack 'b' onto stack 'a'.
  - `pb`: Push the first element at the top of stack 'a' onto stack 'b'.
  - `ra`: Rotate all elements of stack 'a' up by 1 (first element becomes the last one).
  - `rb`: Rotate all elements of stack 'b' up by 1 (first element becomes the last one).
  - `rr`: Perform ra and rb simultaneously.
  - `rra`: Rotate all elements of stack 'a' down by 1 (last element becomes the first one).
  - `rrb`: Rotate all elements of stack 'b' down by 1 (last element becomes the first one).
  - `rrr`: Perform rra and rrb simultaneously.

## Bonus

In addition to the main `push_swap` program, there is a `bonus` task:

- `Checker`: a program that validates whether the sorting operations were performed correctly.
  - When given a list of integers as arguments, it waits and reads instructions from the standard input.
  - If, after executing the instructions, stack 'a' is sorted in ascending order and stack 'b' is empty, it outputs "OK".
  - If not, it outputs "KO".
  - In case of errors such as non-integer arguments, duplicates, incorrect instructions, or improperly formatted instructions, it outputs "Error" to the standard error.

## Usage

### Compile

To compile `push_swap`, navigate to the `📁 push_swap` folder and run `make`.

To compile `checker`, navigate to the `📁 push_swap` folder and run `make bonus`.

### Examples

Sort 5 integers:

```shell
./push_swap 98 -42 42 0 8
```

Sort 100 integers and display the number of swaps:

```shell
./push_swap -517 -427 209 182 762 -680 -108 860 -262 -44 748 -829 -686 642 -397 170 -24 -237 -813 -2 -864 968 -41 400 -344 457 765 528 581 -353 568 848 689 320 27 76 -504 282 -29 -537 604 -703 -960 254 -681 749 897 -425 -837 -240 -935 -934 -738 -546 159 799 -763 46 357 625 153 21 525 442 -323 235 786 707 978 -857 533 933 -895 -737 447 -134 -854 -707 -266 -688 938 -664 -480 -426 -907 -236 -247 643 -971 -218 -278 325 -584 -725 833 219 742 439 165 576 | wc -l
```

#### Using Checker

After running `checker` with the specified integers as arguments, input the necessary operations to sort the integers. For example:

```shell
./checker 98 -42 42 0 8
pb
pb
ra
pa
pa
ra
```

Then press `ctrl + d` to see the results.

## Allowed functions

The following functions were allowed to be used in this project:

| **Function** | **Man**      | **Short Description**                   |
| ------------ | ------------ | --------------------------------------- |
| read         | man 2 read   | Reads from a file descriptor            |
| write        | man 2 write  | Writes to a file descriptor             |
| malloc       | man 3 malloc | Allocates a block of memory dynamically |
| free         | man 3 free   | Deallocates a block of memory           |
| exit         | man 3 exit   | Terminates the calling process          |

Additionally, using the `libft` library was also allowed.

<br>

<div align="center">
  Made by <a href="https://github.com/Szabold1" target="_blank">Boldizsar Szabo</a>
</div>
