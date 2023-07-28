#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move ptr to the end of dest */
    while (*ptr)
    {
        ptr++;
    }

    /* Copy characters from src to dest */
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0'; /* Append null terminator to dest after the concatenation */
    return dest;
}

