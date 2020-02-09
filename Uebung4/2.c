#include <stdio.h>
#define ZEILEN         3
#define SPALTEN        4
typedef int MATRIX[ZEILEN][SPALTEN];
void matrixEingabe (int x, int y, MATRIX m);
void matrixAusgabe (int x, int y, MATRIX m);
void matrixAddition (int x, int y, MATRIX m1, MATRIX m2);
int
main ()
{
  MATRIX m1, m2;
  printf ("Bitte die erste Matrix eingeben.\n");
  matrixEingabe (ZEILEN, SPALTEN, m1);
  printf ("Bitte die zweite Matrix eingeben.\n");
  matrixEingabe (ZEILEN, SPALTEN, m2);
  printf ("Kontrollausgaben.\n");
  printf ("Matrix M1:\n");
  matrixAusgabe (ZEILEN, SPALTEN, m1);
  printf ("Matrix M2:\n");
  matrixAusgabe (ZEILEN, SPALTEN, m2);
  matrixAddition (ZEILEN, SPALTEN, m1, m2);
}

void
matrixEingabe (int x, int y, MATRIX m)
{
  printf ("Bitte die %d x %d Werte (zeilenweise) eingeben:\n", x, y);
  int i;
  for (i = 0; i < x; i++)
    {
      printf ("%d.Zeile: ", i + 1);
      scanf ("%d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3]);
    }
}

void
matrixAusgabe (int x, int y, MATRIX m)
{
  int i = 0;
  for (i = 0; i < x; i++)
    {
      printf ("%d %d %d %d\n", m[i][0], m[i][1], m[i][2], m[i][3]);
    }
}

void
matrixAddition (int x, int y, MATRIX m1, MATRIX m2)
{
  printf ("Ausgabe der Matrix M1+M2:");
  int i = 0;
  for (i = 0; i < x; i++)
    {
      printf ("%d %d %d %d\n", m1[i][0] + m2[i][0], m1[i][1] + m2[i][1],
	      m1[i][2] + m2[i][2], m1[i][3] + m2[i][3]);
    }
}

