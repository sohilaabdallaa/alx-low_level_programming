#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

void print_error(const char *msg) {
    dprintf(STDERR_FILENO, "%s\n", msg);
}

int main(int argc, char **argv) {
    int fd_from, fd_to, ret;
    char buffer[BUF_SIZE];
    ssize_t nread, nwritten;

    if (argc != 3) {
        print_error("Usage: cp file_from file_to");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error("Error: Can't read from file");
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        print_error("Error: Can't write to file");
        exit(99);
    }

    while ((nread = read(fd_from, buffer, BUF_SIZE)) > 0) {
        nwritten = write(fd_to, buffer, nread);
        if (nwritten == -1) {
            print_error("Error: Can't write to file");
            exit(99);
        }
    }

	if (nread == -1) {
        print_error("Error: Can't read from file");
        exit(98);
    }
    ret = close(fd_from);
    if (ret == -1)
    {
	    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	    exit(100);
    }
    ret = close(fd_to);
    if (ret == -1)
    {
	    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	    exit(100);
    }
	return 0;
}

