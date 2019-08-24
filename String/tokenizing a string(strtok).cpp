#include <stdio.h>
#include <string.h>

int main ()
{
  ///char str[] ="- This, a sample string.";

  char str[] ="_Hello_Vasya(and_Petya)__bye_(and_OK)";
  char * pch;

  printf ("Splitting string \"%s\" into tokens:\n",str);

  pch = strtok (str,"_()");

  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, "()");
  }
  return 0;
}
