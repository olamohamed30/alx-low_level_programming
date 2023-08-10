#include <unistd.h>
#include <string.h>
// ssize_t write(int fd, const void *buf, size_t count);

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, strlen(message));

    return (1);
}
