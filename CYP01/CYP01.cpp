# include <stdio.h>

int main()
{
	int anchopantalla;
	int altopantalla;
	int x1, y1, x2, y2;
	float pCoordX, pCoordY, pAncho, pAlto;
	scanf_s("%i %i %f %f %f %f", &anchopantalla, &altopantalla, &pCoordX, &pCoordY,
		&pAncho, &pAlto);
	x1 = anchopantalla * pCoordX;
	y1 = altopantalla * pCoordY;
	x2 = x1 + (anchopantalla * pAncho);
	y2 = y1 + (altopantalla * pAlto);
	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", anchopantalla, altopantalla, pCoordX, pCoordY,
		pAncho, pAlto, x1, y1, x2, y2);
}