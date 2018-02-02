#include <stdio.h>
void main()
{
  char k;
  printf("Input a character\n");
  scanf("%c", &k);
  if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z')) {
    if (k =='a' || k =='A' || k =='e' || k =='E' || k =='i' || k =='I' || k =='o' || k =='O' || k == 'u' || k =='U')
      printf("%c is a vowel.\n", k);
    else
      printf("%c is a consonant.\n", k);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", k);
  
}
