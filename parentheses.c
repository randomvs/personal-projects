#include <stdio.h>

int parenthases(char *str)
{
	int open = 0;
	int missing = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(')
			open++;
		else if (str[i] == ')' && open == 0)
			missing++;
		else
			open--;

	}
		return (missing + open);
}

int main (void)
{
	char *str0 = "(())(())";
	char *str1 = "))((";
	char* str2 = "()(())))";

	printf("%s\n%d\n", str0, parenthases(str0));
	printf("%s\n%d\n", str1, parenthases(str1));
	printf("%s\n%d\n", str2, parenthases(str2));

}
