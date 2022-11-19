#include <stdio.h>
// membuat konstanta
#define EXERCISE "membuat konstanta"
#define BILANGAN 100

void main() {
  int angka = 10;
  char huruf = 'A';
  float pecahan = 4.5;

  printf("Exercise pertama adalah %s\n", EXERCISE);
  printf("konstanta BILANGAN adalah %i\n", BILANGAN);

  puts("Ini adalah fungsi puts ()");
  putchar('&');
}

// cara membatasi angka koma pada tipe data float 
void main() {
    float decimal = 4.5;
    printf("variable decimal : %f\n", decimal);
    printf("variable decimal : %.2f\n", decimal); //.2f = 2angka dibelakang koma
}

// cara menerima inputan dalam bahasa C
void main() {
  int age;
  float ipk;
  char name[20]; //[20]:simbol array dan membatasi juml ah huruf sebanyak 20

  printf("Input your name : ");
  scanf("%[^\n]s",name); 
  /*tdk menggunakan & karna char sudah otomatis menyimpan memori dari variabel name,[^\n]:berfungsi agar nama yg kita input dpt ditambahkan spasi exs: "Nina Aulia" selain itu fungsi scanf bisa diganti gets exs: gets(name;)*/
  printf("Input your age : ");
  scanf("%d", &age); // dlm scanf nama variabel ditambahkan karakter &
                     // (mengambil memori dari variable age)
  printf("Input your GPA : ");
  scanf("%f", &ipk);

  printf("\n\nHi %s", name);
  printf("\nyou are %d years old", age);
  printf("\nyour GPA is : %.2f ", ipk);
}
