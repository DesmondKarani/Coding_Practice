#include <stdio.h>
int main(void)
{
	int CAT_Final [][2] = {
		{20, 39},
		{13, 2},
		{3, 12},
		{6, 78}
	};

	printf("By the way des CAT na Final za mao alikua na %d na %d 😂😂\n", CAT_Final [2][0], CAT_Final [2][1]);
	/**Please note that in the above, CAT_Final [2][1] means that you're
	 * accessing element 3, the second element in this elements 🙂
	 */
	printf("You should know that these marks are stored in %p and %p, just incase you want to hack them 😂\n", &CAT_Final [2][0], &CAT_Final [2][1]);
	return 0;
}
