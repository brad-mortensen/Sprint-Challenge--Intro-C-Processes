#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d command line argument(s):\n", argc);
  if (argc <= 1)
  {
  }
  for (int i = 0; i < argc; i++)
  {
    printf("   %s\n", argv[i]);
  }
  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}