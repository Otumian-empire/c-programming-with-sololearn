#include <stdio.h>

#define PI_ 3.1432

int main(void)
{
    // hello world
    // printf("Hello world\n");

    // datatypes: int, float, double, char
    // datatypes vary from one platform to another - sifeof
    // printf("int - %ld\n", sizeof(int));
    // printf("float - %ld\n", sizeof(float));
    // printf("double - %ld\n", sizeof(double));
    // printf("char - %ld\n", sizeof(char));

    // format specifiers
    // %p, %s
    // d decimal - (%d, %i)
    // c character - %c
    // s string
    // f float - (%f, %g)
    // x hexadecimal

    // variables
    // int number_of_cows = 120;
    // float weight_of_avg_cow = 300; // kg
    // float total_weight_of_cows = weight_of_avg_cow * number_of_cows;
    // char grade = 'A';

    // printf("An average cow weighs, %f and there are %d cows.\n", weight_of_avg_cow, number_of_cows);

    // printf("Therefore there are a total of %f, in weight of cows\n", total_weight_of_cows);

    // printf("All the cows are grade %c cows\n", grade);

    // constants using const and #define
    // use #define
    // const float PI = 3.1432;
    // float radius = 5.67;
    // float area = radius * radius * PI;

    // printf("A circcle of radius, %f, has an area of %f\n", radius, area);

    // printf("This is the PI_ = %f\n", PI_);

    // The difference between const and #define is that const uses
    // memory for storage and #define does not.

    // input and output
    // getchar() returns the value of the next single character
    // printf("Whats cow's grade: ");
    // char cows_grade = getchar();

    // printf("Cow's grade is %c\n", cows_grade);

    // gets(var) function is used to read input as an ordered sequence of
    // characters, also called a string which is a collection of character
    // or a char array.

    // char cows_fullname[20];
    // gets(cows_fullname);

    // printf("Cow's fullname is %s. How fortunate of cow\n", cows_fullname);

    // scanf() scans input that matches format specifiers
    // int number_of_rats;

    // printf("Whats the number of rabbits you have: ");
    // scanf("%d", &number_of_rats);

    // printf("There are %d rabbits as you claimed\n", number_of_rats);

    // char first_name[15];
    // char last_name[15];

    // printf("Enter first and last name: ");
    // The & isn't needed for a string because it acts as a pointer.
    // scanf("%s %s", first_name, last_name);

    // printf("Your full name is %s %s\n", first_name, last_name);

    // putchar() Outputs a single character.
    // char char_a = 'a';
    // putchar(char_a);
    // printf("\n");

    // The puts() function is used to display output as a string
    // char some_str[15] = "This is robert";
    // puts(some_str);
    // printf("\n");

    // int age;
    // float weight;
    // char first_name_[10];

    // printf("Enter your age, weight and fullname please: ");
    // scanf("%d %f %s", &age, &weight, first_name_);

    // printf("You are %d years old and you weight, %f kg. %s, welcome to our gym.\n", age, weight, first_name_);

    // A format specifier can include several options along with a
    // conversion character: %[*][max_field]conversion character,
    // used in scanf
    // The optional * will skip the input field.
    // The optional max_width gives the maximum number of characters to
    // assign to an input field.

    // int x, y;
    // char text[20];

    // scanf("%2d %d %*f %5s", &x, &y, text);
    // input: 1234  5.7  elephant
    // printf("%d  %d  %s", x, y, text);
    // output: 12  34  eleph

    // Escape sequences begin with a backslash \:
    // \n new line
    // \t horizontal tab
    // \\ backslash
    // \b backspace
    // \' single quote
    // \" double quote

    // %[-][width].[precision]conversion character
    // used in printf
    // The optional - specifies left alignment of the data in the string.
    // The optional width gives the minimum number of characters for the data.
    // The period . separates the width from the precision.
    // The optional precision gives the number of decimal
    // places for numeric data. If s is used as the conversion character,
    // then precision determines the number of characters to print.
    // The conversion character converts the argument, if necessary, to the
    // indicated type:
    // d decimal
    // c character
    // s string
    // f float
    // e scientific notation
    // x hexadecimal

    // printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
    // printf("Pi = %3.2f\n", 3.14159);
    // printf("Pi = %-8.5f\n", 3.14159);
    // printf("There are %d %s in the tree.", 22, "apples");

    // To print the % symbol, use %% in the format string.

    // operators
    // C supports arithmetic operators + (addition), - (subtraction), *
    // (multiplication), / (division), and % (modulus division).

    // int length = 10;
    // int width = 5;
    // int area;

    // area = length * width;
    // printf("%d \n", area);

    // type casting
    // float average;
    // int total = 23;
    // int count = 4;

    // average = (float)total / count;
    // printf("%.2f\n", average);

    // we also do  x += 1, x op= val
    return 0;
}