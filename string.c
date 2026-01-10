#include <stdio.h>
#include <string.h>

// 文字列について
// 文字列はchar型の配列で管理される
// 文字列の末尾にはNULL文字('\0')が必要。

void func(char *s)
{
  printf("引数で渡された文字列: %s\n", s);
}

int main(void)
{
  char str[] = "Hello, World!\n";
  func(str);

  char strs[3][5] = { "dog", "cat", "bird" };
  for (int i = 0; i < 3; i++) {
    for (int j = 0; strs[i][j] != '\0'; j++) {
      printf("[%c]", strs[i][j]);
    }
    printf("\n");
  }

  char str1[] = "Hello";
  char str2[] = "HELLO";

  // strcmp関数は、2つの文字列を比較して、等しい場合は0を返す。
  if (strcmp(str1, str2) == 0) {
    printf("'%s'と'%s'は等しい\n", str1, str2);
  } else {
    printf("'%s'と'%s'は等しくない\n", str1, str2);
  }

  return 0;
}
