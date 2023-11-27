#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file to which text is to be appended.
* @text_content: NULL terminated string to add at the end of the file
* Return: returns 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
FILE *fp;
int len = 0;

if (filename == NULL)
	return (-1);

fp = fopen(filename, "a");
if (fp == NULL)
	return (-1);

if (text_content != NULL)
{
	while (text_content[len])
	len++;
	if ((int)fwrite(text_content, 1, len, fp) != (int)len)
	{
	fclose(fp);
	return (-1);
	}
}

fclose(fp);
return (1);
}
