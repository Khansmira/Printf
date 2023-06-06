#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @character: character to print
 * Return: Success(1)
 */
int _putchar(char character)
{
	static int bufferCount;
	static char buffer[1024];

	if (character == -1)
	{
		bufferCount = 0;
		return (0);
	}
	if (character == -2 || bufferCount == 1024)
	{
		write(1, buffer, bufferCount);
		bufferCount = 0;
	}
	if (character != -1 && character != -2)
	{
		buffer[bufferCount] = character;
		bufferCount++;
		return (1);
	}
	return (0);
}
