#include <stdio.h>
#include <stdlib.h>

// int add(int a, int b);
// int compare(const void *elem1, const void *elem2);

int main()
{
    // strings

    /* A string in C is an array of characters that ends with
    a NULL character '\0'. */
    // char username[11] = "johndoe123";
    // printf("%s\n", username);

    /*  this is a string literal
     When you provide a string literal to initialize the string,
      the compiler automatically adds a NULL character '\0' to the
     char array. */

    // char username1[11] = {'j', 'o', 'h', 'n', 'd', 'o', 'e', '1', '2', '3', '\0'};
    // printf("%s\n", username1);

    /* With this approach, the NULL character must be added explicitly.
    Note that the characters are enclosed in single quotation marks. */

    /* A string pointer declaration such as char *str = "stuff"; is
    considered a constant and cannot be changed from its initial value. */

    // char *username2 = "johndoe123";
    // printf("%s\n", username2);

    /* Standard Library string functions in <string.h>
    strlen() - get length of a string
    strcat() - merge two strings
    strcpy() - copy one string to another
    strlwr() - convert string to lower case
    strupr() - convert string to upper case
    strrev() - reverse string
    strcmp() - compare two strings */

    // string input
    /* To retrieve a line of text or other string from the user, C
    provides the scanf(), gets(), and fgets() functions. */

    // char fullname[10];
    // printf("Enter your fullname: ");
    // scanf("%s", fullname);

    // printf("FullName: %s\n", fullname);

    /* When scanf() is used to read a string, there is no need for & to access
     the variable address because an array name acts as a pointer. */

    // char fullname1[10];
    // printf("Enter your fullname: ");
    /* gets(fullname1); */
    /* A better version of gets is fgets */
    /*     fgets(fullname1, 12, stdin); */

    /* This prevents buffer overflow, which happens when the string array isn't
    big enough for the typed text. */

    /* printf("FullName: %s\n", fullname1); */

    /* char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, 50, stdin);
    printf("%s\n", full_name); */

    // string output

    /* String output is handled with the fputs(), puts(), and printf() functions. */
    /* We have seen several use of printf */

    /*  char password[10];
    char *text = "Enter pwd: ";
    fputs(text, stdout);
    fgets(password, 11, stdin); */
    /* fputs(password, stdout); */
    /* puts(password); */ /* Adds new line by default */

    // String functions

    /* The sprintf and sscanf Functions
    sprintf is like a string builder - you take a couple of vars and create one
    sscanf is like a string splitter - you take a whole var and break it into a
     couple of others  */

    /* char sentence[100];
    char firstname[10], lastname[10];
    int age;
    float weight;

    printf("Enter fullname, age and weigh: ");
    scanf("%s %s %d %f", firstname, lastname, &age, &weight);

    sprintf(sentence, "My name is %s %s, I am %d years and I weigh, %.2f",
            firstname, lastname, age, weight);

    puts(sentence); */

    /* Now we can break down a sentence into fragments with sscanf */

    /* char *dist = "john doe 32 34.2";
    char dfirstname[10], dlastname[10];
    int dage;
    float dweight;

    sscanf(dist, "%s %s %d %f", dfirstname, dlastname, &dage, &dweight);
    printf("Firstname: %s\nLastname: %s\nAge: %d\nWeight: %.2f\n",
           dfirstname, dlastname, dage, dweight); */

    /* char input[10];
    int num;

    printf("Enter a number: ");
    fgets(input, 10, stdin);
    num = atoi(input);

    printf("%d\n", num); */

    // Function Pointers
    /* int (* add_)(int, int);
    add_ = add;

    printf("%d\n", add_(3, 6)); */

    // The void Pointer
    /* A void pointer is used to refer to any address type in memory
     and has a declaration that looks like:
    void *ptr; */

    /* int i = 34;
    float f = 23.57;
    char c = 'c';
    char *s = "Hello";
    void *ptr = NULL;

    ptr = &i;
    printf("%d\n", *((int *)ptr));

    ptr = &f;
    printf("%.2f\n", *((float *)ptr));

    ptr = &c;
    printf("%c\n", *((char *)ptr));

    ptr = &s;
    printf("%s\n", *((char **)ptr)); */

    /* When dereferencing a void pointer, you must first type cast the
    pointer to the appropriate data type before dereferencing with *.
    You cannot perform pointer arithmetic with void pointers. */

    // Function Pointers as Arguments
    /* A function pointer used as an argument is sometimes referred to
     as a callback function because the receiving function "calls it back".  */

    /* int arr[5] = {52, 23, 56, 19, 4};
    int num = 5, width = 4, i = 0;

    qsort((void *)arr, num, width, compare);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }*/

    return 0;
}

// int add(int a, int b)
// {
//     return a + b;
// }

// int compare(const void *elem1, const void *elem2)
// {
//     if ((*(int *)elem1) == (*(int *)elem2))
//     {
//         return 0;
//     }
//     else if ((*(int *)elem1) < (*(int *)elem2))
//     {
//         return -1;
//     }
//     else
//     {
//         return 1;
//     }
// }