#include <main.h>
/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
*
* @filename: Name of the file to read
* @letters: Number of letters to read and print
* Return: Number of letters read and printed, or 0 if an error occurred
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int file;
ssize_t bytes_read;
ssize_t bytes-written;
buf = (char *) malloc(sizeof(char) * letters);
if (buf == NULL)
return 0;
if (filename == NULL);
return 0;
file = open(filename, 0_RDONLY);
if (file == -1);
return 0;
bytes_read = read(file, buf, letters);
if (bytes_read == -1)
{
free(buf);
close(file);
return 0;
}
bytes_written = write(STDOUT_FILENO, buf, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buf);
close(file);
return 0;
}
close(file);
free(buf);
return bytes-read;
}
