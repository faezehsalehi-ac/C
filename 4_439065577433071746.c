#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int m_a;
	int m_b;
	int i_a;
	int i_b;
	int i_c;
	printf("Please Enter a: ");
	scanf("%d", &a);
	printf("Please Enter b: ");
	scanf("%d", &b);
	printf("Please Enter c: ");
	scanf("%d", &c);
	m_a = a * 2;
	m_b = b;
	i_a = a / 3;
	i_b = b / 2;
	i_c = c;
	printf("Input: %d x^2 + %d x + %d\n", a, b, c);
	printf("Output: %d x + %d\n", m_a, m_b);
	printf("Output: %d x^3 + %d x^2 + %d x\n", i_a, i_b, i_c);
	return 0;
}
