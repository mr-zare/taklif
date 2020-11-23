#include <stdio.h>
#include <math.h>
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
	printf("%d %d\n", s, rooz);
	//be ezae har  1nomre ke moadelesh kamtar az 20 bashe 100toman jarime mishe. hala edame barname mohasebe meqdar sal mored niaz bararye jobran zarare
	int p=1000,j=0;
	double k,t=1;
	p=1000-((20-m)*100);
	if(p<=0){
		printf("badbakht:(");
		j=1;
	}
	k=p*(pow(1.5,t));
	while (k<=1000)
	{
		t=t+1;
		k=p*(pow(1+0.5,t));
		
	}
	if(j==0)
		printf( "%lf sal bayad montazer bashe",t);
	return (0);
}