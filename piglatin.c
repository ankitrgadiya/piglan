#include "piglatin.h"

int main (void)
{
	char buffer[MAX_SIZE], secret[MAX_SIZE];
	scanf ("%s", buffer);

	pigl (buffer, secret);
	printf ("%s", secret);

	return EXIT_SUCCESS;
}

void pigl (char *string, char *secret)
{
	int length = strlen (string);
	int i, j;

	for (i = 0; i < length; i++) {
		if (isalpha (*(string + i))) {
			if (vowel (*(string + i))) {
				break;
			}
		}
	}

	for (j = i; j < length; j++, secret++)
		*(secret) = *(string + j);

	for (j = 0; j < i; j++, secret++)
		*(secret) = *(string + j);

	*(secret) = 'a';
	*(secret + 1) = 'y';
	*(secret + 2) = '\0';
	return;
}

bool vowel (char a)
{
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int i;

	if (isupper (a))
		a = a - 'A' + 'a';

	for (i = 0; i < 5; i++) {
		if (a == *(vowels + i))
			return true;
	}

	return false;
}
