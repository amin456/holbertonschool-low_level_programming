#include"holberton"
/**
 *_islower - main function
 *return :1
 *return :0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
