
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *allocate_buffer(char *filename);
void close_file(int fd);

int main(int argc, char **argv)
{
    int fd_read, fd_write, bytes_read, bytes_written;
    char *buffer;

    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>n", argv[0]);
        exit(EXIT_FAILURE);
    }

    buffer = allocate_buffer(argv[2]);

    fd_read = open(argv[1], O_RDONLY);
    if (fd_read == -1)
    {
        printf("Error: Cannot open file %sn", argv[1]);
        exit(EXIT_FAILURE);
    }

    fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd_write == -1)
    {
        printf("Error: Cannot create file %sn", argv[2]);
        close_file(fd_read);
        exit(EXIT_FAILURE);
    }

    while ((bytes_read = read(fd_read, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_write, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            printf("Error: Cannot write to file %sn", argv[2]);
            close_file(fd_read);
            close_file(fd_write);
            exit(EXIT_FAILURE);
        }
    }

    if (bytes_read == -1)
    {
        printf("Error: Cannot read from file %sn", argv[1]);
        close_file(fd_read);
        close_file(fd_write);
        exit(EXIT_FAILURE);
    }

    close_file(fd_read);
    close_file(fd_write);

    free(buffer);
    return 0;
}

char *allocate_buffer(char *filename)
{
    char *buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        printf("Error: Cannot allocate buffer for file %sn", filename);
        exit(EXIT_FAILURE);
    }

    return buffer;
}

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        printf("Error: Cannot close file descriptor %dn", fd);
        exit(EXIT_FAILURE);
    }
}
