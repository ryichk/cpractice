#include <stdio.h>

// 関数のアドレスを受け取る関数のことを高階関数という。

void with_tax(int price)
{
  printf("税込価格 = %d\n", (int)(price * 1.1));
}

void without_tax(int price)
{
  printf("税抜き価格 = %d\n", price);
}

void print_price(void (*pF)(int), int price)
{
  (*pF)(price);
}

int main(void)
{
  print_price(with_tax, 100);
  print_price(without_tax, 100);
}
