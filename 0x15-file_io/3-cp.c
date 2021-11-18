#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - copies a file
 * @argc: number of args
 * @argv: args
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int oF, nF, err;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	oF = open(argv[1], O_RDONLY);

	if (oF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	nF = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (nF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* err will also keep count of chars printed */
	while ((err = read(oF, buf, 1024)) != 0)
	{
		if (err == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
		if (write(nF, buf, err) != err)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	}

	err = close(oF);

	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", oF);
		exit(100);
	}
	err = close(nF);

	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", nF);
		exit(100);
	}
	return (0);
}
