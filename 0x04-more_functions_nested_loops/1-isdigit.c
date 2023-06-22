/**
 * _isdigit - checks for single digit numbers
 *
 * Description: checks if input is a single digit
 * @c: input of type int
 *
 * Return: returns 1 on success
 */

int _isdigit(int c)
{
	int num, output;

	for (num = 0; num < 10; num++)
	{
		if(c == num)
		{
			output = 1;
			break;
		}
		else
		{
			output = 0;
		}
		num++;
	}
	return (output);
}
