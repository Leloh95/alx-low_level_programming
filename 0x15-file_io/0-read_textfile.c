#include "main.h"

/**
 * read_textfile- Read text file print to the posix.
 * @filename: file to be read
 * @letters: letters to be read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lett;
	ssize_t readit;
	ssize_t fileit;
	ssize_t wryt;

fileit = open(filename, O_RDONLY);
if (fileit == -1)
return (0);

lett = malloc(sizeof(char) * letters);
readit = read(fileit, lett, letters);
wryt = write(STDOUT_FILENO, lett, readit);
free(lett);
close(fileit);
return (wryt);
}

