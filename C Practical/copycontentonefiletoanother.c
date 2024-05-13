/*Write a C program to copy the contents of one file to another.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");

    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

/*NO OUTPUT GENERATED SOURCE FILE LOCATION ERROR*/
