#include "main.h"

/**
 * create_file - Creates file.
 * @filename: name of the file to create.
 * @text_content: terminated string to write to file.
 * Return: 0
*/
int create_file(const char *filename, char *text_content)
{
int fileit, wryt, chec = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (chec = 0; text_content[chec];)
chec++;
}

fileit = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wryt = write(fileit, text_content, chec);

if (fileit == -1 || wryt == -1)
return (-1);

close(fileit);
return (1);
}


