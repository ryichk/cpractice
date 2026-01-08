#include <stdio.h>

// 関数について
// 関数にもアドレスがあり、そのアドレスを格納する関数ポインタがある。
// 関数のアドレスは関数名で取得できる。(アドレス演算子&をつける必要はない)
// 関数ポインタの宣言：`戻り値の型 (*変数名)(引数の型);`

void func(int a)
{
  printf("func関数が呼び出された。引数 = %d\n", a);
}

void dog()
{
  printf("🐶\n");
}

void cat()
{
  printf("🐱\n");
}

void bird()
{
  printf("🐦\n");
}

int main(void)
{
  void (*pF)(int) = func;
  (*pF)(10);

  void (*pFs[])() = { dog, cat, bird };
  for (int i = 0; i < 3; i++) {
    (*pFs[i])();
  }

  return 0;
}
