# C Training: Pointers & Data Structures – Preparation for École 42 Piscine

This repository is part of my personal preparation for the École 42 Piscine. It includes a large number of exercises focused on pointers, memory, and data structures in C. I'm using this space to practice and track my progress.

The exercises are inspired by CS50, 42 Piscine expectations, and general C programming challenges. No external libraries are used — everything is written in plain C.

---

## Contents & Progress Structure

The exercises are grouped by topic and difficulty. I'll work through them step by step, from the basics to more complex problems.

### Level 1 – Pointers Basics

- [ ] ex01_swap: Swap two integers using pointers
- [ ] ex02_pointer_value: Print value and address using pointer
- [ ] ex03_set_to_42: Set int value to 42 via pointer
- [ ] ex04_array_increment: Increment array values with pointer
- [ ] ex05_pointer_to_pointer: Modify value using int **
- [ ] ex06_reverse_array: Reverse array in-place with pointers
- [ ] ex07_strlen: Implement strlen manually
- [ ] ex08_strcpy: Copy string using pointer arithmetic
- [ ] ex09_strcmp: Compare strings without strcmp
- [ ] ex10_swap_ptr: Swap addresses with int **

### Level 2 – Dynamic Memory

- [ ] ex11_malloc_array: Allocate array with malloc
- [ ] ex12_zero_array: Implement calloc behavior
- [ ] ex13_free_correctly: Allocate and free correctly
- [ ] ex14_clone_array: Deep copy of int array
- [ ] ex15_strdup: Reimplement strdup
- [ ] ex16_double_array_size: Resize malloc’ed array
- [ ] ex17_concat_strings: Join two strings into one
- [ ] ex18_split_on_space: Split string without strtok

### Level 3 – Structs & Basic Data Structures

- [ ] ex19_struct_student: Create Student struct (name, id, GPA)
- [ ] ex20_compare_students: Return student with higher GPA
- [ ] ex21_array_of_structs: Allocate & use student array
- [ ] ex22_sort_students: Sort students by GPA
- [ ] ex23_modify_struct: Change struct fields via pointer
- [ ] ex24_nested_struct: Struct inside a struct (Course with Students)
- [ ] ex25_dynamic_struct_list: Add dynamically allocated students
- [ ] ex26_search_student: Find student by name

### Level 4 – Linked Lists

- [ ] ex27_singly_list: Define and build basic list
- [ ] ex28_push_front: Add node at beginning
- [ ] ex29_push_back: Add node at end
- [ ] ex30_print_list: Traverse and print
- [ ] ex31_delete_node: Delete by value
- [ ] ex32_free_list: Free all nodes
- [ ] ex33_reverse_list: Reverse in-place
- [ ] ex34_middle_node: Find middle with two-pointer method
- [ ] ex35_cycle_detection: Detect cycle using Floyd’s algo
- [ ] ex36_sorted_insert: Keep list sorted on insert

### Level 5 – Advanced Structures & Pointers

- [ ] ex37_doubly_linked_list: Full double-linked list
- [ ] ex38_stack_list: Stack with linked list
- [ ] ex39_queue_list: Queue with linked list
- [ ] ex40_hash_table: Basic hash table for strings
- [ ] ex41_custom_allocator: Simulate malloc/free manually
- [ ] ex42_pointer_maze: Navigate nested pointers (e.g. char ****p)
- [ ] ex43_nested_structs: Build nested School → Class → Students
- [ ] ex44_realloc: Re-implement realloc
- [ ] ex45_leak_finder: Track and clean memory leaks with Valgrind
- [ ] ex46_function_pointers_array: Use array of function pointers
- [ ] ex47_generic_container: Store any data with void *

### Stretch Exercises – Trees, Heaps, Graphs

- [ ] ex48_bst: Binary search tree
- [ ] ex49_inorder_traversal: In-order traversal of BST
- [ ] ex50_bst_to_list: Convert BST to linked list
- [ ] ex51_expression_tree: Build & evaluate expression tree
- [ ] ex52_malloc_tracker: Wrap malloc/free with tracker
- [ ] ex53_heap: Implement max-heap
- [ ] ex54_graph_list: Graph with adjacency list and BFS
- [ ] ex55_graph_cycle: Detect cycle in directed graph
- [ ] ex56_sort_with_fp: Sort using function pointers

### Debugging & Tools

- [ ] ex57_memory_leak_fix: Clean up leaks in broken program
- [ ] ex58_valgrind_cleaning: Run 3 past programs through Valgrind
- [ ] ex59_segmentation_fault_fix: Debug pointer bug with GDB

---

## Tools I’m Using

- **Compiler:** `gcc -Wall -Wextra -Werror -g`
- **Editor:** Visual Studio Code (Ubuntu)
- **Version Control:** Git

---

## Notes

This is not meant to be a tutorial or a polished project. It's just a space for me to learn by doing. I’ll try to keep each file clean and documented as I go, and commit regularly as I complete each task.

Some ideas and exercise structures are inspired by CS50, GitHub Piscine repos, and standard C challenges.

---

## Why This

I’m using this as a focused way to build confidence in low-level C programming before starting the 42 Piscine. Specifically, I want to get better at:

- Using pointers correctly
- Understanding memory allocation and ownership
- Building and navigating data structures
- Debugging with real tools (GDB, Valgrind)
