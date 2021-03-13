#include <stdio.h>

/**
 * print_array - function to print given array character by character
 * up to n characters
 * @array: character array to print
 * @n: number of characters to print; if n > len(array), print full array
 *
 * Return: 0 on success
 */

int print_array(char *array, int n)
{
	/* initialize index counter variable to move through array */
	int i = 0;

	/* i = 0: start index at 0, beginning of the array */
	/* i++: move through array char-by-char by increasing index each loop */
	/* array[i]: end loop when at end of string, indicated by null byte*/
	/* i < n: or end loop when index has reached number of byte to print */
	for (i = 0; array[i] != '\0' && i < n; i++)
		/* print single char from array at current index position */
		putchar(array[i]);
	/* print new line after */
	putchar('\n');
	/* return 0 if function is successful */
	return (0);
}
