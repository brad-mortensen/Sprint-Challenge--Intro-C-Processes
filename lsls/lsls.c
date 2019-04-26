#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d command line argument(s):\n", argc);
  struct dirent *pDirent;
  DIR *pDir;
  pDir = opendir(argv[1]);
  if (pDir == NULL)
  {
    printf("Cannot open directory '%s'\n", argv[1]);
    return 1;
  }
  while ((pDirent = readdir(pDir)) != NULL)
  {
    printf("[%s]\n", pDirent->d_name);
  }
  closedir(pDir);
  return 0;
}

// Open directory

// Repeatly read and print entries

// Close directory
