#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hora_in, min_in, seg_in;
	int hora_out, min_out, seg_out;
	int minT, cent;

	printf("introduza hora de entrada no formato h:m:s\n");
	scanf("%d:%d:%d", &hora_in, &min_in, &seg_in);


	printf("introduza hora de saida no formato h:m:s\n");
	scanf("%d:%d:%d", &hora_out, &min_out, &seg_out);

	if (seg_out > 0)
		min_out++;

	minT = (hora_out - hora_in) * 60 + min_out - min_in;

	printf("min: %d\n", minT);

	// 5:10:1
	// 10:15:2
	// -> 306

	if (minT <= 60)
		cent = minT * 2;
	else if (minT <= 360)
		cent = 60 * 2 + (360 - 60) * 1 + (minT - 360) * 1;
	else
		cent = 60 * 2 + (360 - 60) * 1 + (minT - 360) * 0.5;

	










}