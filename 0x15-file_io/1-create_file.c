#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and writes to it, or appends it if it exists
 * @filename: name of file being opened and worked with
 * @text_content: content written or appended
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	/* int length = strlen(text_content); */

	if (!filename)
		return (-1);

	/* opens or creates "filename" with write permission;appends if exists*/
	fd = open(filename, O_APPEND | O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
