#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX
 * @filename: text file
 * @letters: number of letters to be read and printed
 * Return: 0 or 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *outp;
ssize_t readf, writef, openf;
openf = open(filename, O_RDONLY);
if (openf == -1)
return (0);
outp = malloc(sizeof(char) * letters);
readf = read(openf, outp, letters);
writef = write(STDOUT_FILENO, outp, readf);
free(outp);
close(openf);
return (writef);
}
