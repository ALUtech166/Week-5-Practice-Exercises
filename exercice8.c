/** C program **/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define MAX_WORDS   500


int main() {

    printf("Welcome to C program that reads the content of a file\n");

    // s meaning the sentence
    FILE *file;
    int i;

    char ch;
    int characters, words, lines;
    
    
   
    // open the file 
    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Ouff Error, This file doesn't exist.\n");
        printf("Please try again Later and make sure the file exist.\n");

        exit(0);
    } else {
        printf("File Opened Successfully. Reading Content now \n\n");
        
    }

    
    
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);


    /* Close files to release resources */
    fclose(file);


    return 0;
}