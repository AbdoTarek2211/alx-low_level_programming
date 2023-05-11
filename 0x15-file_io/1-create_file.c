#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a file.
 * @filename: name of file
 * @text_content: content to be written
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
int fname, writef, count = 0;
if (filename == NULL)
return (-1);
if (text_content)
{
while(text_content[count])
count++;
}
fname = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
writef = write(fname, text_content, count);
if (fname == -1 || writef == -1)
return (-1);
close(fname);
return (1);
}
