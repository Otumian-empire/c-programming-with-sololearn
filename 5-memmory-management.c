#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Memory Management
    /* Understanding memory is an important aspect of C programming. 
    When you declare a variable using a basic data type, C automatically 
    allocates space for the variable in an area of memory called the stack. */

    // 4byte for int
    /* int x;
    printf("Sizeof int: %ld bytes\n", sizeof(x)); */
    // allocated contiguous blocks of memory
    /* int arr[10];
    printf("Sizeof arr: %ld bytes\n", sizeof(arr)); */

    /* Dynamic memory allocation is the process of allocating and freeing memory 
    as needed. Now you can prompt at runtime for the number of array elements and
     then create an array with that many elements. Dynamic memory is managed with 
     pointers that point to newly allocated blocks of memory in an area called the heap. */

    /* Stack --> Memory Allocated during Compile Time 
    Heap --> Memory Allocated During run Time. 

    Only difference is, If we know exact size of the variable , then it can be a stack, 
    else it should be a heap.

    Char name[2]={'a','b'}; --> stack, since we know the size
    char name[]; --> Heap Allocation, since we don't know the size  */

    /* Memory Management Functions

    The stdlib.h library includes memory management functions.
    The statement #include <stdlib.h> at the top of your program gives you access to the following:

    malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes.

    calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory is initialized to 0.

    realloc(ptr, bytes) Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.

    free(ptr) Releases the block of memory pointed to by ptr.  */

    // malloc -> returns a void pointer so need to cast to the required type
    // int *ptr;

    // ptr = malloc(sizeof(*ptr) * 10);

    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 10; i++)
    //     {
    //         ptr[i] = i * 2;
    //     }
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // // free((void *)ptr);
    // free(ptr);

    // calloc -> allocates memory based on the size of a specific item, such as a structure

    // typedef struct
    // {
    //     char *msg;
    //     int id;
    // } human;

    // human *some_humans;
    // int num_human = 3;

    // char str[] = "This generation is full of high-level developers";

    // some_humans = calloc(num_human, sizeof(human));

    // if (some_humans != NULL)
    // {
    //     for (int k = 0; k < num_human; k++)
    //     {
    //         (some_humans + k)->id = k;
    //         (some_humans + k)->msg = malloc(sizeof(str));

    //         strcpy((some_humans + k)->msg, str);
    //     }
    // }

    // for (int k = 0; k < num_human; k++)
    // {
    //     printf("ID: %d, %s\n", (some_humans + k)->id, (some_humans + k)->msg);
    // }

    // realloc() function expands a current block to include additional memory.
    // int *ptr;

    // /* a block of 10 ints */
    // ptr = malloc(5 * sizeof(*ptr));

    // /* assign 50 to first int if pointer in not null */
    // if (ptr != NULL)
    // {
    //     *(ptr) = 50;
    // }

    // ptr = realloc(ptr, 6 * sizeof(*ptr)); /* 6 ints */

    // *(ptr + 5) = 75;
    // printf("%d %d", *(ptr), *(ptr + 5));

    // Allocating memory for strings
    // better use strlen for the size of byte instead of sizeof
    // char stra[10];
    // char *strb = NULL;

    // strcpy(stra, "Daniel An");
    // strb = malloc(strlen(stra + 1));

    // strcpy(strb, stra);
    // printf("strb - %s\n", strb);
    // printf("stra - %s\n", stra);

    // Many algorithms implement a dynamic array because this allows
    // the number of elements to grow as needed.

    typedef struct
    {
        int *elements;
        int size;
        int cap;
    } dyn_array;

    dyn_array arr;
    int i;

    /* initialize array */
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; /* room for 1 element */

    /* expand by 5 more elements */
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5; /* increase capacity */

    /* add an element and increase size */
    if (arr.size < arr.cap)
    {
        arr.elements[arr.size] = 50; /* add element to array */
        arr.size++;
    }
    else
        printf("Need to expand array.");

    /* display array elements */
    for (i = 0; i < arr.cap; i++)
        printf("Element %d: %d\n", i, arr.elements[i]);

    return 0;
}