#include <stdio.h>
#include <math.h>

/*
(a) A ← (R >= 5) OR (T > Z) AND (X – Y + R > 3 * Z)
(b) B ← (|T| + 3 >= 4) AND NOT(3 * R / 2 < S * 3)
(c) C ← (X = 2) OR (Y = 1) AND ((Z = 0) OR (R > 3)) AND (S < 10)
(d) D ← (R ≠ S) OR NOT(√R < √X) AND (4327 * X * S * Z = 0)
*/

int main()
{
int A, B, C, D, R, T, Z, X, Y, S;

A = (R >= 5) || (T > Z) && (X – Y + R > 3 * Z);
B = (|T| + 3 >= 4) && ||(3 * R / 2 < S * 3);
C = (X = 2) || (Y = 1) && ((Z = 0) || (R > 3)) && (S < 10);
D = (R != S) || ! (sqrt(R) < sqrt(X)) && (4327 * X * S * Z = 0);




return 0;
}
