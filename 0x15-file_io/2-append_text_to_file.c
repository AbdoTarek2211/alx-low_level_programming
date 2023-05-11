#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fname, writef, count = 0;
if (filename == NULL)
return (-1);
if (text_content)
{
while (text_content[count])
count++;
}
fname = open(filename, O_WRONLY | O_APPEND);
writef = write(fname, text_content, count);
if (fname == -1 || writef == -1)
return (-1);
close(fname);
return (1);
}
}
