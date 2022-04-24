#include <iostream>
using namespace std;
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	/* 1)
	float temp;

	  printf ("Cual es la temperatura? ");
		scanf ("%f", &temp);

	  float celsius=0.55f * (temp -32);

	  printf ("su temperatura en celsius es %f", celsius);
	*/

	/* 2)
	  int año;

	  printf ("en q año naciste?");

	  scanf ("%i", &año);

	  printf ("Naciste en el año %i", año );
	*/
	/* 3)
	int edad;
	int edadRegistro;
	printf ("que edad tenes? ");
	scanf ("%i", &edad);

	  if (edad < 17)
	  {
		printf("no puede sacar el registro, necesita tener por lo menos 17");
	  }
	else if (edad ==17)
	{
	  printf ("podes sacar el registro con autorizacion de tus padres");
	  }
	else if (edad >= 18)
	{
	  printf ("Podes sacar el registro por tu cuenta, de haberlo sacado a que edad
	lo sacaste?"); scanf ("%i", &edadRegistro);


	}
	printf ("Tenes q renovar el registro a los %i", edadRegistro);
	}
	*/

	/* 4)
	int monto;

			printf("Cuanto es el monto?");

			scanf_s("%d", &monto);

			if (monto > 2000)
			{
					int descuento = monto - (monto * 12) / 100;

					printf("debido a q su compra es mayor a $2000 tiene un
	descuento de 12 porciento su compra sale $ %i", descuento);
			}
			else
			{
					printf(" su compra sale $ %i", monto + "no tiene descuento");
			}

			*/

			/* 5)
		  int monto;

					printf("Cuanto es el monto?");

					scanf_s("%d", &monto);

					if (monto > 2000)
					{
							int descuento = monto - (monto * 12) / 100;

							printf("debido a q su compra es mayor a $2000 tiene un
			   descuento de 12 porciento su compra sale $ %i", descuento);
					}
					else
					{
							printf(" su compra sale $ %i", monto + "no tiene descuento");
					}

					*/

					/*
					int edad;

						printf("Ingrese su edad: ");
						scanf_s("%i", &edad);

						switch (edad)
						{
						case 1:
							printf("Se tendrá que dar 1° DOSIS DE LA TRIPLE VIRAL");
							break;

						case 2:
							printf(" Se tendrá que dar DOSIS ANUAL DE LA VACUNA GRIPAL ");
							break;

						case 5:
							printf("Se tendra que dar 2° DOSIS DE LA TRIPLE VIRAL");
							break;

						case 11:
							printf("Se tendra que dar 2 DOSIS DE HPV ");
							break;

						default:

							if (edad >= 18)
							{
								printf("Se tendrá que dar la DOBLE VIRAL");
							}
							else {
								printf("No se tiene que dar ninguna vacuna ");
							}
							break;
						*/

						/* 6)
						float alto;
						float ancho;
					  printf ("Cuantos mide el alto");
					  scanf ("%f", &alto);

					  printf ("Cuantos mide el ancho");
					  scanf ("%f", &ancho);

					  float perimetro= alto *4 + ancho *4;
					  float precio= perimetro*6;

					  printf ("Se necesitan %f metros de alambre para rodear 2 veces el campo",
					  perimetro);

					  printf ("El costo sera $ %f",precio);
					  */
					  /* 7)
						int hora;
						int minuto;
						int segundo;

						printf ("Cuantas horas son? ");
						scanf ("%i", &hora);
						printf ("Cuantas minutos son? ");
						scanf ("%i", &minuto);
						printf ("Cuantas segundos son? ");
						scanf ("%i", &segundo);

						int segundosTotales= hora * 3600 + minuto * 60 + segundo;

						printf ("La hora mencionada suma %i segundos",segundosTotales);


						if (segundosTotales>=86400)
						{
						  printf ("\nLa hora mencionada es mas de un dia");
						}
						*/
						/* 8)
						int edad;

						printf ("que edad tenes");
						scanf ("%i", &edad);

						switch (edad) {
						  case 13:
						  printf ("Tenes que estar en primer año");
						  break;
						  case 14:
						  printf ("Tenes que estar en segundo año");
						  break;
						  case 15:
						  printf ("Tenes que estar en tercer año");
						  break;
						  case 16:
						  printf ("Tenes que estar en cuarto año");
						  break;
						  case 17:
						  printf ("Tenes que estar en quinto año");
						  break;
						}*/
						/* 9)
						int cafe;
						printf("que cafe queres? \n espresso opcion 1 \n Latte opcion 2 \n negro
					  opcion 3 \n mas cafe que leche opcion 4\n"); scanf ("%i", &cafe);

					  switch (cafe) {
						case 1:
						printf ("elegiste espresso");
						break;
						case 2:
						printf ("elegiste Latte");
						break;
						case 3:
						printf ("elegiste Negro");
						break;
						case 4:
						printf ("elegiste mas cafe que leche");
						break;
					  } */
					  /* 10)
						int num1;
							  int num2;

							  printf("Cual es el primer numero?\n");
							  scanf_s("%i", &num1);
							  printf("Cual es el segundo numero?\n");
							  scanf_s("%i", &num2);

							  while (num1 != num2)
							  {
									  printf("%i, ", num1);
									  num1++;
							  }*/
							  /* 11)
							   int num1;
							   int num2;

									 printf("Cual es el primer numero?\n");
									 scanf("%i", &num1);
									 printf("Cual es el segundo numero?\n");
									 scanf("%i", &num2);

									 int result= pow(num1, num2);
									 printf("%i", &result);
							   */
							   /* 12)
								 int num1;

									   printf("Cual es el numero impar?\n");
									   scanf("%i", &num1);


									   while (num1 % 2 == 0)
									   {
											   printf("escribi un numero impar error\n");
											   printf("Cual es el numero?\n");
											   scanf("%i", &num1);

									   }

									   printf("Numero correcto");
								 */
}
