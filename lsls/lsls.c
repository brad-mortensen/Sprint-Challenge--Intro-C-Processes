#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d command line argument(s)\n", argc);
  struct dirent *pDirent;
  DIR *pDir;
  struct stat *buf = malloc(sizeof(struct stat));
  pDir = opendir(argv[1]);
  if (pDir == NULL)
  {
    printf("Cannot open directory '%s'\n", argv[1]);
    return 1;
  }
  while ((pDirent = readdir(pDir)) != NULL)
  {
    if (stat(pDirent->d_name, buf))
    {
      printf("%lld", buf->st_size);
      printf("%s\n", pDirent->d_name);
    }
    else 
    {
      printf("<DIR> %s\n", pDirent->d_name);
    }
  }
  closedir(pDir);
  return 0;
}

// Open directory

// Repeatly read and print entries

// Close directory
