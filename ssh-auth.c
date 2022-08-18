#include <stdio.h>

int main()
{
  char keygen[100];
  char command[100];

  printf("Enter a private SSH keygen file: ");
  scanf("%s", keygen);
  sprintf(command, "ssh-add ~/.ssh/ %s", keygen);
  system(command);

  return 0;
}
