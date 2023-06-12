#include <stdio.h>
#include <math.h>

/*
NOT p
NOT p
p AND q
(NOT p) AND q
(NOT p) OR q
p AND (NOT q)
p OR (NOT q))
(NOT p) AND (NOT q)
(NOT P) OR (NOT q)
*/
int main()
{
int p, q;
!p;
!q;
p && q;
p || q;
(!p) && q;
(!p) || q;
p && (!q);
p || (!q);
(!p) && (!q);
(!p) || (!q);

return 0;
}
