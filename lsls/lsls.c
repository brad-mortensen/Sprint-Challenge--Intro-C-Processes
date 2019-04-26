#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d command line argument(s)\n", argc);
  struct dirent *pDirent;
  char *directory;
  if (argc <= 1)
  {
    directory = ".";
  }
  else
  {
    directory = argv[1];
  }
  DIR *pDir = opendir(directory);
  struct stat *buf = malloc(sizeof(struct stat));
  if (pDir == NULL)
  {
    printf("Cannot open directory '%s'\n", argv[1]);
    return 1;
  }
  while ((pDirent = readdir(pDir)) != NULL)
  {
    char *conCat = malloc(strlen(directory) + strlen(pDirent->d_name) + 1);
    strcat(conCat, directory);
    strcat(conCat, "/");
    strcat(conCat, pDirent->d_name);
    // printf("concatenated string path: %s", conCat);
    if (lstat(conCat, buf) == 0)
    {
      printf("%lld ", buf->st_size);
      printf("%s\n", pDirent->d_name);
    }
    else
    {
      perror(directory);
    }
  }
  free(buf);
  closedir(pDir);
  return 0;
}

// Open directory

// Repeatly read and print entries

// Close directory
