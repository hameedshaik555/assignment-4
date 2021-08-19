#include <stdio.h>
#include <string.h>

// by using function str 
void isPalindrome(char str[])
{
	//  it from leftmost and rightmost from corner 
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters while they are same
	while (h > l)
	{
		if (str[l++] != str[h--]) check the condition if its true it enters the loop 
		{
			printf("%s is not a palindrome\n", str);
			return;
		}
	}
	printf("%s is a palindrome\n", str);
}

// to test above functions 
int main()
{
	isPalindrome("abba");
	isPalindrome("abbccbba");
	isPalindrome("hameed");
	return 0;
}
