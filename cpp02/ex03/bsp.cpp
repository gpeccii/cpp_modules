#include "Point.hpp"

// Funzione myFabs per calcolare il valore assoluto di un numero float
float myFabs(float num) {
	if (num < 0)
		return -num;
	else
		return num;
}

// Funzione per calcolare l'area di un triangolo dato dai punti a, b e c
float calculateArea(const Point &a, const Point &b, const Point &c) {
	return myFabs(
		(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
		(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
		(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
	) / 2.0;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	// Verifica se il punto è un vertice del triangolo
	if (a == point || b == point || c == point)
		return false;

	// Calcola l'area del triangolo originale ABC
	float areaABC = calculateArea(a, b, c);

	// Calcola l'area dei triangoli ABP, BCP e CAP
	float areaABP = calculateArea(a, b, point);
	float areaBCP = calculateArea(b, c, point);
	float areaCAP = calculateArea(c, a, point);

	// Se una delle aree è zero, significa che il punto è sul bordo, ritorna false
	if (areaABP == 0 || areaBCP == 0 || areaCAP == 0)
		return false;

	// Se la somma delle aree dei tre triangoli è uguale all'area del triangolo originale, il punto è dentro
	return (areaABP + areaBCP + areaCAP) == areaABC;
}

