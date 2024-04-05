#include <stdio.h>

// int square(int x);
// void say_hello();
// int factorial(int i);
// void swap(int *a, int *b);
// int sum_arr(int *arr, int size_arr);
int *get_evens();

int main(void)
{
    // Functions are central to C programming and are used
    // to accomplish a program solution as a series of subtasks.

    // A function:
    // is a block of code that performs a specific task
    // is reusable
    // makes a program easier to test
    // can be modified without changing the calling program

    // int x;

    // printf("Enter a number: ");
    // scanf("%d", &x);

    // printf("The square of %d is %d\n", x, square(x));

    // A function's parameters are used to receive values required by the function.

    // Values are passed to these parameters as arguments through the function call.

    // By default, arguments are passed by value, which means that a copy of data
    // is given to the parameters of the called function. The actual variable isn't
    // passed into the function, so it won't change.
    // Variable scope refers to the visibility of variables within a program.
    // Variables declared in a function are local to that block of code and cannot
    //  be referred to outside the function.
    // Variables declared outside all functions are global to the entire program.

    // Static variables have a local scope but are not destroyed when a function is exited.
    // Therefore, a static variable retains its value for the life of the program and can be
    // accessed every time the function is re-entered.
    // A static variable is initialized when declared and requires the prefix static
    // int i;

    // for (i = 0; i < 5; i++)
    // {
    //     say_hello();
    // }

    // A recursive function is one that calls itself and includes a base case,
    // or exit condition, for ending the recursive calls.

    // int i = 3;
    // printf("%d factorial is %d\n", i, factorial(i));

    // arrays
    // An array is a data structure that stores a collection of related values
    // that are all the same type.

    // char grades[5]; // create an array of 5 grades
    // float scores[5] = {23.6, 67.67, 89.01, 90.34, 56.89};

    // pstaticrintf("The first score is %.2f\n", scores[0]);
    // scores[0] = 32.76;
    // printf("After certain considerations, the first score becomes %.2f\n", scores[0]);

    // looping through the array
    // for (int index = 0; index < 5; index++)
    // {
    //     printf("%.2f\n", scores[index]);
    // }

    // puts("--------------------------------------\n");

    // for (int index = 0; index < 5; index++)
    // {
    //     scores[index] -= 34;
    // }

    // for (int index = 0; index < 5; index++)
    // {
    //     printf("%.2f\n", scores[index]);
    // }

    // pointers
    // C is designed to be a low-level language that can easily access memory locations
    //  and perform memory-related operations.
    // For instance, the scanf() function places the value entered by the user at
    // the location, or address, of the variable. This is accomplished by using
    // the & symbol.

    // &num is the address of the variable num
    // A memory address is given as a hexadecimal number.

    // printing the address of num (%x, %X, %p)
    // printf("The address of %d is %p and %x\n", num , &num, &num);

    // A pointer is a variable that contains the address of another variable.
    // In other words, it "points" to the location assigned to a variable and
    // can indirectly access the variable.
    // Pointers are declared using the * symbol and take the form:
    // pstaticointer_type *identifier

    // int num = 3;
    // printf("value of num: %d\n\n", num);
    // printf("address of num: %p\n\n", &num);
    // printf("value at address of num: %d\n\n", *(&num));

    // int *ptr = &num;
    // printf("value of ptr: %p\n\n", ptr);
    // printf("value at ptr: %d\n\n", *ptr);
    // printf("address of ptr: %p\n\n", &ptr);

    // Pointers in Expressions
    // istatic
    // res = (*ptr)++;
    // printf("%d\n", res);

    // res = 2 * ++(*ptr);
    // printf("%d\n", res);

    // printf("%d, %d\n", num, (*ptr));

    // Pointers are especially useful with arrays.
    // An array declaration reserves a block of contiguous
    // memory addresses for its elements.

    // int some_numbers[5] = {2, 3, 6, 7, 4};
    // int *ptr = NULL;

    // ptr = some_numbers;
    // ptr = &some_numbers[0];
    // this basically assigns the first element in the array to ptr
    // printf("%d\n", *ptr);
    // pstaticrintf("%p\n", some_numbers); // an array is a pointer

    // looping through the array - the ptr using address arithmetic
    // The array is a contiguous memory so the first address + 1 will
    // lead to the second.. current addr + 1 will lead to the next
    // remember that we rather increment the address and not value
    // for (int index = 0; index < 5; index++)
    // {
    //     printf("%p + %d = %d\n", ptr, index, *(ptr + index));
    // }

    // Pointers and Functions
    // Pointers greatly expand the possibilities for functions.
    // No longer are we limited to returning one value. With pointer
    // parameters, your functions can alter actual data rather than a
    // copy of data.

    // To change the actual values of variables, the calling statement
    // passes addresses to pointer parameters in a function.

    // int x = 5, y = 9;
    // printf("X = %d, Y = %d\n", x, y);
    // swap(&x, &y);
    // printf("X = %d, Y = %d\n", x, y);

    // Functions with Array Parameters
    // An array cannot be passed by value to a function
    // However, an array name is a pointer, so just passing an array
    // name to a function is passing a pointer to the array

    // istaticnt arr[5] = {3, 7, 2, 8, -9};
    // int res_sum_arr = sum_arr(arr, 5);

    // printf("The sum of the elements in the array is: %d\n", res_sum_arr);

    // Functions that Return an Array
    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k = 0; k < 5; k++)
    {
        printf("%d\n", a[k]);
    }

    return 0;
}

int *get_evens()
{
    static int nums[5];
    int k;
    int even = 0;

    for (k = 0; k < 5; k++)
    {
        nums[k] = even += 2;
    }

    return (nums);
}


// void swap(int *a, int *b)
// {
//     int c;

//     c = *a;
//     *a = *b;
//     *b = c;
// }

// int sum_arr(int *arr, int size_arr)
// {
//     int sum_arr_ret = 0;

//     for (int pos = 0; pos < size_arr; pos++)
//     {
//         sum_arr_ret += *(arr + pos);
//     }

//     return sum_arr_ret;
// }

// void say_hello()
// {
//     static int num_calls = 1;

//     printf("Hello number %d\n", num_calls);
//     num_calls++;
// }

// int factorial(int i)
// {
//     if (i <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return i * factorial(i - 1);
//     }
// }

// int square(int x)
// {
//     return x * x;
// }
