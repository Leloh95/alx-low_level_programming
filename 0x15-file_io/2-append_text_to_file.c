#include"main.h"
/**
 * append_text_to_file - Appends text at end file.
 * @filename: name of the file where texts to be appended.
 * @text_content: text to appended to the end file.
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fileit, wryt, chec = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (chec = 0; text_content[chec];)
chec++;
}

fileit = open(filename, O_WRONLY | O_APPEND);
wryt = write(fileit, text_content, chec);

if (fileit == -1 || wryt == -1)
return (-1);

close(fileit);
return (1);
}

