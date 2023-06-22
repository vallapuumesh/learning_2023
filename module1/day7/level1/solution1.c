/*File Copy: Write a C program to copy a file using file operations*/

#include <stdio.h>

#define BUFFER_SIZE 4096

int main()
{
    FILE *sourceFile, *targetFile;
    char sourcePath[100], targetPath[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    printf("Enter the path of the target file: ");
    scanf("%s", targetPath);

    sourceFile = fopen(sourcePath, "rb");
    if (sourceFile == NULL)
    {
        printf("Failed to open the source file.\n");
        return 1;
    }

    targetFile = fopen(targetPath, "wb");
    if (targetFile == NULL)
    {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0)
    {
        fwrite(buffer, 1, bytesRead, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}