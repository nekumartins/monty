/**
 * push - Pushes an integer to the stack.
 * @stack: Double pointer to the stack.
 * @arg: The integer to be pushed.
 * @line_number: The line number of the push operation.
 */

void push(stack_t **stack, char *arg, unsigned int line_number)
{
	/*Check if arg is NULL*/
	if (arg == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/*Check if arg is a valid integer*/
	for (int i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}

	/*Create a new */
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/* Set the new node's value and next pointer */
	new_node->n = atoi(arg);
	new_node->next = *stack;
	new_node->prev = NULL;

	/* Update the head of the stack */
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
