# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[100];
	int count = 0;
	int count_num = 0;

	printf("���� �Է� : ");
	gets(str);
	printf("�ٲ� ���� : ");

	while (str[count]) {
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] += 32;
			count_num++;
		}

		count++;
	}

	puts(str);
	printf("�ٲ� ���� �� : %d\n", count_num);

	return 0;
}