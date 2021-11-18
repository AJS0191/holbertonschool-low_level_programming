#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends a file if it exists
 * @filename: name of file being opened and worked with
 * @text_content: content written or appended
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int err;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND, O_WRONLY);

	if (fd == -1)
		return (-1);

		err = write(fd, text_content, strlen(text_content));

		if (err == -1)
			return (-1);
		
	close(fd);

	return (1);
}
