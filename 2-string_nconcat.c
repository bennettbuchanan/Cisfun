#include <stdio.h>
#include <stdlib.h>
int find_len(char *);
char *concat_strings(char *, char *, char *, int);

char *string_nconcat(char *s1, char *s2, int n)
{
  /* The concatenated string to return. */
  char *p;
  char *err = "Not enough memory allocated.";
  int len_s1, len_s2, len;

  /* Find the length of the sum of the two strings. */
  len_s1 = find_len(s1);
  len_s2 = find_len(s2);
  len = len_s1 + len_s2;
  p = malloc(sizeof(char) * len);

  /* Handle case where malloc fails. */
  if (p != NULL)
    {
      p = concat_strings(s1, s2, p, n);
      return(p);
    }
  else
    {
      return(err);
    }
}

char *concat_strings(char *s1, char *s2, char *p, int n)
{
  int i;
  int j = 0;

  /* Increment through the two strings and assign chars to the pointer */
  for (i = 0; s1[i] != '\0'; ++i) {
    p[j] = s1[i];
    ++j;
  }

  for (i = 0; s2[i] != '\0' && i < n; ++i) {
    p[j] = s2[i];
    ++j;
  }

  return (p);
}

int find_len(char *s)
{
  int i = 0;
  /* Increment through the string until NULL terminator */
  while (s[i] != '\0') {
    ++i;
  }
  return (i);
}
