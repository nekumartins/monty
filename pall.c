/**
 * pall - Prints all the values on the stack, starting from the top.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number of the command in the Monty file.
 */
void pall(stack_t *stack, unsigned int line_number)
{
	/*Traverse the stack and print all values*/
	stack_t *current = stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
