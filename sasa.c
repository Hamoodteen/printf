/**
 * main - call printf
 *
 * Return: int
*/
int main(void)
{
	char l = 'b';
	char *str;
	str = "bbb";

	_printf("s%casa\n", l);
	_printf("s%sasa", str);

	return (0);
}
