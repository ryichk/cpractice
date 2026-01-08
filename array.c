#include <stdio.h>

// 引数はint p[]でも同様。
// 配列の先頭アドレスが分かれば、配列の要素にアクセスできる。
void func(int *p)
{
  p[0] = 80;
  p[1] = 81;
  p[2] = 82;
}

int main(void)
{
  int scores[] = { 10, 20, 30 };
  func(scores);

  printf("scoresの大きさ = %ld\n", sizeof(scores));
  printf("scoresの要素数 = %ld\n", sizeof(scores) / sizeof(scores[0]));

  for (int i = 0; i < 3; i++) {
    printf("scores[%d] = %d\n", i, scores[i]);
  }

  return 0;
}
