#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void str(char* arr);
int main()
{
	char arr[10000];
	scanf("%[^\n]", &arr);
	str(arr);
	return 0;
}
void str(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= '0' && arr[i] <= '9' || arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z'||arr[i] == ' ')
		{
			printf("%c", arr[i]);
		}
		i++;
	}
}