#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	char text[] = "Hello, this is a test of POSIX knowledge";
	char error[] = "Encountered an error! Exiting";

	int file = open("MyText.txt", O_WRONLY | O_CREAT, 0644);

	if (file == -1)
	{
		write(1, error, sizeof(error) - 1);
		close(file);
		return 2;
	}

	ssize_t bytes_written = write(file, text, sizeof(text) - 1);
	
	if (bytes_written == -1)
	{
		write(1, error, sizeof(error) -1);
		close(file);
		return 2;
	}

	close(file);

	return 0;
}
