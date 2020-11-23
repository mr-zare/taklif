#include <stdio.h>

int main()
{
	int a;
	float m = 0, b;
	scanf("%d", &a);
	//a:tedad emtehanat v b:nomre anha m:mopadel fard ast
	for (int i = 0; i < a; i++)
	{
		scanf("%f", &b);
		m = m + b;
	}
	m = m / a;
	printf("%f\n", m);
	//hala dar edame mirim bebinim in fard tanbal cheqadr omr karde be rooz v saat
	int hour,s,rooz;
	scanf("%d", &hour);
	s = (hour / (365 * 24));
	rooz = (hour % (365 * 24) / 24);
	printf("%d %d", s, rooz);

	return (0);
}