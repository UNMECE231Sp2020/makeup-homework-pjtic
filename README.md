# Homework4
Fifth homework of ECE 231: Intermediate Programming. Assigned 3/10/2020. Due 3/28/2020, 11:59 pm
## Instructions
This assignment is based on this [git](https://github.com/crowleydi/ece231-week-3) with some modifications. You are going to implement specific version of a linear search algorithm and a binary search algorithm. These algorithms will be created in their respective files, `linearSearch.cpp` and `binarySearch.cpp`. Both files are unfinished, and it is your job to finish them. Then you will finish implementing two sorting algorithms: bubble sort and merge sort. They will be completed in their respective files: `bubbleSort.cpp` and `mergeSort.cpp`. How long these algorithms run will be captured with the class `Timer`, in the file `Timer.h`, and used in `tests.cpp`. `tests.cpp` contains `main` and will run all algorithms and time their runtimes, but the file is incomplete as well. You must complete the file so that it calls all algorithms without errors. You are given these files:

    binarySearch.cpp
    bubbleSort.cpp
    linearSearch.cpp
    numbers
    mergeSort.cpp
    search
    search.h
    sort.h
    tests.cpp
    Timer.h
    
`search` and `numbers` are files that contain a large amount of numbers: `search` has about 2000 values and `numbers` has about 1000000 values. They are opened in `tests.cpp`, and will be searched and sorted using functions from the other `cpp` files. Some of the algorithms are complete and it is your task to finish them all. You will need to make a `Makefile` for easy compling.
### Details for makefile
You will make two different compile statements that refer to how the compiler will optimize your code. Your default option should have the `-O0` flag (dash, capital o, zero). You will also add a fast option with the `-O3` flag. More details on these flags can be found [here](https://www.rapidtables.com/code/linux/gcc/gcc-o.html). In summary, you `Makefile` should have these options:

    all
    fast
    clean
    
## Runtime report
You must create a file called `analysis.md` in which you will compare linear search and binary search, as well as compare bubble sort and merge sort, and finally compare the `-O0` option and `-O3`. You must discuss algorithm runtime and compare and share how long it took for you algorithms to run.
### A word of warning
Some of the code here is used from an online reference and all submission will be compared to various online resources. Please adapt all code used from an online resource into your own form. 
## Rubric
    
    Program runs with no errors: 20%
    Complete searching algorithm implementation: 20%
    Complete sorting algorithm implementation: 20%
    Runtime report: 10%
    Makefile creation: 10%
    Clean code: 20%
