#include <stdio.h>

// 構造体について
// struct宣言で新しい型を定義できる
//
// typedef宣言で既存の型に別名を付けられる
// 構造体定義とtypedef宣言を同時に行うことができる

typedef struct Person
{
  char name[16];
  int age;
} Person;

void print_person(Person p)
{
  printf("name = %s, age = %d\n", p.name, p.age);
}

// 構造体のメンバにアクセスするためにポインタを渡す。
// 値を変更しない場合はconstを付ける。
// ポインタを渡せば構造体のコピーが発生しないのでメモリ効率が良い。
// 構造体へのポインタに対してはアロー演算子(->)を使ってもメンバにアクセスできる。
void birthday(Person *p)
{
  (*p).age++;
  // p->age++; と書いても同じ。
}

int main(void)
{
  Person a = { "SUZUKI TARO", 17 };
  Person b = { "YAMADA JIRO", 20 };

  print_person(a);
  print_person(b);

  birthday(&a);
  print_person(a);

  return 0;
}
