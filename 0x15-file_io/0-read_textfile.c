#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - prints certain amount of chars from filname (cat?)
 * @filename: name of file being opened and worked with
 * @letters: amount of chars to be written
 *
 * Return: the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i = 0;
	int fd;
	char *buf;

	/* check if filename is null*/
	if (!filename)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	/* set fd to given filename , set to readonly*/
	fd = open(filename, O_RDONLY);
	/* edge case if open fails; open returns -1 on fail */
	if (fd == -1)
		return (0);

	/* sets "letters" cha of buffer to first "letters" cha of filename*/
	read(fd, buf, letters);

	if (!buf)
		return (0);
	/*done with fd so close it*/
	close(fd);

	/*use write to print from buffer*/

	i = write(STDOUT_FILENO, buffer, length);
	return (i);
}
