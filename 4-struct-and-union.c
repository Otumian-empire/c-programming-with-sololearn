#include <stdio.h>
#include <string.h>

// typedef struct
// {
//     char *name;
//     char gender;
//     char sex;
// } employee;

// void print_employee(employee e)
// {
//     printf("Full Name: %s\nGender: %c\nSex: %c\n",
//            e.name, e.gender, e.sex);
// }

// typedef struct
// {
//     char *name;
// } profile;

// void print_prof_ptr(profile *e)
// {
//     printf("Full Name: %s\n", e->name);
//     // printf("Full Name: %s\n", (*e).name);
// }

// void print_prof(profile e)
// {
//     printf("Full Name: %s\n", e.name);
// }

int main()
{
    // Structures
    /* A structure is a user-defined data type that groups related 
    variables of different data types.
    A structure declaration includes the keyword struct, a structure
     tag for referencing the structure, and curly braces { } with a 
     list of variable declarations called members.  */

    /* struct Human
    {
        char full_name[100];
        int age;
        float weight, height;
    }; */

    /* A structure is also called a composite or aggregate data type.
    Some languages refer to structures as records */

    /* declare an instance of Human, initializing with curly braces */
    /* struct Human john = {"Michael Asante", 34, 23.4, 45.6}; */

    /* using curly braces after declaration */
    /* struct Human peter;
    peter = (struct Human){"Peter Kwabena Asante", 45, 45.4, 120.6}; */

    /* Using named paramters */
    /* struct Human hannah =
        {
            .full_name = "Hannah Deloris Mintah",
            .age = 45,
            .weight = 67.67,
            .height = 35.09}; */

    /* Accessing the members of a struct with the dot operator */
    /* printf("Full Name: %s\nAge: %d\nWeight: %.2f\nHeight: %.2f\n",
           hannah.full_name, hannah.age, hannah.weight, hannah.height); */

    //Typedef
    /* The typedef keyword creates a type definition that simplifies code
     and makes a program easier to read. it eliminates the need to use the
      keyword struct when declaring variables.  */

    // employee mic = {"Daniel Somonaz", 'M', 'F'};
    // print_employee(mic);

    // Pointers to Structures
    /* profile p = {.name="Santiago Doe"};

    print_prof(p);
    print_prof_ptr(&p); */

    // Union
    /* A union allows to store different data types in the same memory location. */

    union prof
    {
        char *name;
        // char name[20];
        int age;
        float height;
    };

    /* After declaring a union, you can declare union variables. You can even assign
     one union to another of the same type: */
    union prof a;
    union prof b;

    // a = b;
    /* Unions are used for memory management. The largest member data type is used
     to determine the size of the memory to share and then all members use this one
      location. This process also helps limit memory fragmentation. Memory management
       is discussed in a later lesson. */

    a.age = 23;
    printf("%d\n", a.age);

    a.height = 34.54;
    printf("%f\n", a.height);

    a.name = "Daniel Doe";
    printf("%s\n", a.name);

    /* Assuming I called all after all has be assigned, then the last will overwrite */

    return 0;
}
