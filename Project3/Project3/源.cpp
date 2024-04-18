#include<iostream>
using namespace std;


long fun(char s[])
{
	long n;
	int sign;
	for (; *s == '  '; s++);
	if (*s == '-')  sign = -1;
	else sign = 1;
	if (*s == '+' || *s == '-')s++;
	n = 0;
	while (*s >= 48 && *s <= 57)
	{
		n = 10 * n + (*s - '0');
		s++;
	}
	return sign*n;
	
}
void main()
{
	char s[10] = "  253aa6a";
	cout<<fun(s);
	system("pause");
}