#include <stdio.h>

int main()
{
    // C can open, read and write into files
    // using fopen in stdio.h
    // fopen(filename, mode) which returns a file pointer
    // modes, w, r, a, w+, r+, and a+
    // fclose(file_pointer) to close the file
    // if the return value is 0 then the file has been closed
    // successfully, EOF (end of file) is returned if there
    // is an error in closing.

    // create a file object
    FILE *fptr = fopen("hello.txt", "w+");

    if (fptr != NULL)
    {
        printf("%s\n", "File was created successfully");
    }

    // writing to file
    fputc('A', fptr);
    fprintf(fptr, "\nHello there I am from the fprintf function\n");
    fputs("My name is daniel amoah\n", fptr);

    fclose(fptr);

    FILE *readf = fopen("hello.txt", "r");

    if (readf != NULL)
    {
        char buff[100];

        fgets(buff, 99, readf);
        // fgets(buff, 99, readf);

        printf("%s\n", buff);
    }
    else
    {
        printf("%s\n", "Could not read from file");
    }
    fclose(readf);

    //     fputc(char, fp) Writes character char to the file pointed to by fp.

    // fputs(str, fp) Writes string str to the file pointed to by fp.

    // fprintf(fp, str, vars) Prints string str to the file pointed to by fp. str can optionally include format specifiers and a list of variables vars.

    return 0;
}