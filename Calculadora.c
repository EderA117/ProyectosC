/*Calculadore*/
#include <stdio.h>
main()
{
	float u,s1,s2,o1,r1,r2,o2,m1,m2,o3,d1,d2,o4;
	printf ("\n Introduzca la opcion que se desee: ");
	printf ("\n Opcion 1 Suma");
	printf ("\n Opcion 2 Resta");
	printf ("\n Opcion 3 Multiplicacion");
	printf ("\n Opcion 4 Division \n" );
	scanf ("%f", &u);
	if (1==u)
	     {
	     	printf ("Escribe el primer valor" );
	     	scanf ("%f", &s1);
	     	printf ("Ahora el segundo");
	     	scanf ("%f", &s2);
	     	o1=s1+s2;
	     	printf ("Su resultado es: %f", o1);
		 }
	if (2==u)
	     {
	     	printf ("Escribe el primer valor" );
	     	scanf ("%f", &r1);
	     	printf ("Ahora el segundo");
	     	scanf ("%f", &r2);
	     	o2=(r1-r2);
	     	printf ("Su resultado es: %f", o2);
		 }
	if (3==u)
	     {
	     	printf ("Escribe el primer valor" );
	     	scanf ("%f", &m1);
	     	printf ("Ahora el segundo");
	     	scanf ("%f", &m2);
	     	o3=(m1*m2);
	     	printf ("Su resultado es: %f", o3);
		 }
	if (4==u)
	     {
	     	printf ("Escribe el primer valor" );
	     	scanf ("%f", &d1);
	     	printf ("Ahora el segundo");
	     	scanf ("%f", &d2);
	     	o4=d1/d2;
	     	printf ("Su resultado es: %f", o4);
		 }
	printf ("Gracias por su eleccion");
}
