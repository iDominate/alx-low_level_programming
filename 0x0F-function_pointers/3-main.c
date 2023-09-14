

/**
 * main - entry point
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int op1, int op2, result;
	char op;

	op1 = op2 = result = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (!argv[2][1])
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	op = argv[2][0];
	if( op != '+' && s != '-' && s != '/' && s != '%' && s != '*')
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	result = (get_op_func(argv[2]))(op1, op2);
	printf("%d\n", result);
	return (0);

}
