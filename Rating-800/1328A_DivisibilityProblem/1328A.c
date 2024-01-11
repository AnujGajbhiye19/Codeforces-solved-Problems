#include <stdio.h>

int
main ()
{
  int t;
  scanf ("%d", &t);
  while (t--)
    {
      long a, b;
      scanf ("%ld %ld", &a, &b);
      if(a%b==0){
          printf("%d\n",0);
      }
      else{
          printf("%ld\n", (b*((a/b)+1))-a);
      }
    }

  return 0;
}
