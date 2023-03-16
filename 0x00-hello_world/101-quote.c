#include <unistd.h>
#include <string.h>

int main(void) {
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const size_t length = strlen(message);
    const ssize_t bytes_written = write(2, message, length);
    return bytes_written != length;
}
