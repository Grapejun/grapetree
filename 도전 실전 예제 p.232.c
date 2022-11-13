# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[100];
	int count = 0;
	int count_num = 0;

	printf("문장 입력 : ");
	gets(str);
	printf("바뀐 문장 : ");

	while (str[count]) {
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] += 32;
			count_num++;
		}

		count++;
	}

	puts(str);
	printf("바뀐 문자 수 : %d\n", count_num);

	return 0;
}