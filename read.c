#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	char error[] = "Encountered error";

	/* open the file */
	int file = open("MyText.txt", O_RDONLY);

	/* handle error, comes in really handy */
	if (file == -1)
	{
		write(1, error, sizeof(error) - 1);
		return 2;
	}

	/* we store the characters read here, 1024 is just A random number to accomodate all. */
	char buffer[1024];
	
	/* read */
	ssize_t bytes_read = read(file, buffer, sizeof(buffer) - 1);

	/* handle reading errors */
	if (bytes_read == -1)
	{
		write(1, error, sizeof(error) - 1);
		return 2;
	}

	/* add a null terminator for writing purpose */
	buffer[bytes_read] = '\0';

	/* write what you read */
	write(1, buffer, bytes_read);

	/* close the file */
	close(file);

	return 0;
}
