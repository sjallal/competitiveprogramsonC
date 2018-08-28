//C Program to Display its own Source Code as its Output
#include <stdio.h>

int main()
{
    FILE *fp;   //file_address
    char ch;    //Character variable

    fp = fopen(__FILE__,"r");  //open the file __FILE__ is a predefined MACRO.
    do
    {
        ch = getc(fp);  //read the individual characters
        putchar(ch);   //display each character
     }
     while (ch != EOF);   //while end of file
     fclose(fp);  //close the file
     return 0;
}
