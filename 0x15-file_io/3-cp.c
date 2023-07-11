#include"main.h"

char *create_fileit(char *thefile);
void close_fileit(int filed);

/**
 * create_fileit - copies content to another file
 * @thefile: The name of the file
 * Return: 0
*/
char *create_fileit(char *thefile)
{
char *file;

file = malloc(sizeof(char) * 1024);

if (file == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", thefile);
exit(99);
}

return (file);
}

/**
 * close_fileit - Closes file.
 * @filed: file descriptor
 */
void close_fileit(int filed)
{
int flt;

flt = close(filed);

if (flt == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed);
exit(100);
}
}

/**
 * main - Copies a file to another file.
 * @argc: number of arguments used.
 * @argv: An arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int openit, creat, readt, wryt;
char *file;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file = create_fileit(argv[2]);
openit = open(argv[1], O_RDONLY);
readt = read(openit, file, 1024);
creat = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (openit == -1 || readt == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(file);
exit(98);
}

wryt = write(creat, file, readt);
if (creat == -1 || wryt == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(file);
exit(99);
}

readt = read(openit, file, 1024);
creat = open(argv[2], O_WRONLY | O_APPEND);

} while (readt > 0);

free(file);
close_fileit(openit);
close_fileit(creat);

return (0);
}

