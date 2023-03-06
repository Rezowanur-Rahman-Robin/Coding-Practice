// C program for the above approach
#include <stdio.h>
#include <string.h>
#define MAX 100

// Function to reverse the file content
void reverseContent(char* x)
{

    // Opening the path entered by user
    FILE* fp = fopen(x, "a+");

    // If file is not found then return
    if (fp == NULL) {
        printf("Unable to open file\n");
        return;
    }

    // To store the content
    char buf[100];
    int a[MAX], s = 0, c = 0, l;

    // Explicitly inserting a newline
    // at the end, so that o/p doesn't
    // get effected.
    fprintf(fp, " \n");
    rewind(fp);

    // Adding current length so far +
    // previous length of a line in
    // array such that we have starting
    // indices of upcoming lines
    while (!feof(fp)) {
        fgets(buf, sizeof(buf), fp);
        l = strlen(buf);
        a = s += l;
    }

    // Move the pointer back to 0th index
    rewind(fp);
    c -= 1;

    // Print the contents
    while (c >= 0) {
        fseek(fp, a, 0);
        fgets(buf, sizeof(buf), fp);
        printf("%s", buf);
        c--;
    }

    return ;
}

// Driver Code
int main()
{
    // File name in the directory
    char x[] = "file1.txt";

    // Function Call to reverse the
    // File Content
    reverseContent(x);
    return 0;
}
