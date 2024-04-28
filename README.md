# Project Overview
This project involves implementing various sorting algorithms in C. Each algorithm is tasked with sorting an array of integers in ascending order.

## Technologies

The project is implemented in C and requires the following:

- Ubuntu 20.04 LTS
- GCC compiler
- `sort.h` header file

## Requirements
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc with specific options
- All files should end with a new line
- Use of Betty style
- No global variables
- No more than 5 functions per file
- Unless specified otherwise, standard library functions are not allowed
- Prototypes of all functions should be included in a header file called sort.h
- Header files should be include guarded

## Table of Contents
- [Project Overview](#project-overview)
- [Technologies](#technologies)
- [Requirements](#requirements)
  - [General](#general)
- [Directory Structure](#directory-structure)
- [Tasks](#tasks)
  - [C Scripts](#c-scripts)
- [Author](#author)


## Directory Structure

The project directory should follow this structure:

```
sorting_algorithms/
|-- 0-bubble_sort.c
|-- 1-insertion_sort_list.c
|-- 2-selection_sort.c
|-- 3-quick_sort.c
|-- 4-shell_sort.c
|-- 5-cocktail_sort_list.c
|-- 6-counting_sort.c
|-- 7-merge_sort.c
|-- 8-heap_sort.c
|-- 9-radix_sort.c
|-- 10-O
|-- 11-O
|-- 12-O
|-- print_array.c
|-- print_list.c
|-- sort.h
|-- README.md
```

## Tasks

| Task Number | File Name                | Description                                            | Prototype                          |
|-------------|--------------------------|--------------------------------------------------------|------------------------------------|
| 0           | 0-bubble_sort.c          | Sorts an array of integers using Bubble sort           | `void bubble_sort(int *array, size_t size);` |
| 1           | 1-insertion_sort_list.c  | Sorts a doubly linked list using Insertion sort        | `void insertion_sort_list(listint_t **list);` |
| 2           | 2-selection_sort.c       | Sorts an array of integers using Selection sort        | `void selection_sort(int *array, size_t size);` |
| 3           | 3-quick_sort.c           | Sorts an array of integers using Quick sort            | `void quick_sort(int *array, size_t size);` |
| 4           | 4-shell_sort.c           | Sorts an array of integers using Shell sort            | `void shell_sort(int *array, size_t size);` |
| 5           | 5-cocktail_sort_list.c   | Sorts a doubly linked list using Cocktail shaker sort  | `void cocktail_sort_list(listint_t **list);` |
| 6           | 6-counting_sort.c        | Sorts an array of integers using Counting sort         | `void counting_sort(int *array, size_t size);` |
| 7           | 7-merge_sort.c           | Sorts an array of integers using Merge sort            | `void merge_sort(int *array, size_t size);` |
| 8           | 8-heap_sort.c            | Sorts an array of integers using Heap sort             | `void heap_sort(int *array, size_t size);` |
| 9           | 9-radix_sort.c           | Sorts an array of integers using Radix sort            | `void radix_sort(int *array, size_t size);` |
| 10          | 10-merge_sort_list.c     | Big O notations for Bubble sort                        | `void merge_sort_list(listint_t **list);` |
| 11          | 11-heap_sort.c           | Big O notations for Insertion sort                     | `void heap_sort(int *array, size_t size);` |
| 12          | 12-radix_sort.c          | Big O notations for Selection sort                     | `void radix_sort(int *array, size_t size);` |


## Author

This project is a collaboration between two developers: Ifeanyi Ekezie and .................
```

Feel free to adjust the placeholder `.................` with the name of your partner in the project.
