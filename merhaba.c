/**
 * Bu kod BMT103 dersi uyglumasında
 * 22181616044 Nolu
 * Abdurrahman Aydın Tarafından yazılmıştır.
 * **/
/*
#include <stdio.h>
int main() {
   // Birinci Boşluğa şubenizi ikinci boşluğa adınızı ve soyadınızı yazın.
   printf("Ben A1 şubesinden MD \n");
   // Aşağıdaki satırları yorumlayınız.
   // Burada 65 değerinin desimal karşılğı yazılcak.
   printf("Çıktı: %d\n", 65);
   // Burada 65  değerinin octal değeri.
   printf("Çıktı: %o\n", 65);
   // Burada 0101 değerinin decimal değeri.
   printf("Çıktı: %d\n", 0101);
   // Burada 65 değerinin işaretsiz hexadicemal değeri.
   printf("Çıktı: %X\n", 65);
   // Burada 0X41 değerinin decimal değeri.
   printf("Çıktı: %d\n", 0X41);
   // Burada -65 değerinin işaretsiz decimal değeri.
   printf("Çıktı: %u\n",-65);
   // Burada 65.5 değerinin float değeri.
   printf("Çıktı: %f\n",65.5);
   // Burada 65.5 değerinin bilimsel değeri.
   printf("Çıktı: %e\n", 65.5);
   // Burada 65.5 değerinin %e'nin ya da %f'in kısa hali.
   printf("Çıktı: %g\n", 65.5);
   // Burada 65 değerinin karakter hali.
   printf("Çıktı: %c\n", 65);
   // Burada 'A' değerinin işaretli integer değeri.
   printf("Çıktı: %d\n", 'A');
   return 0 ;
}
*/
/*Bu bir açıklamadır*/

/*
#include <stdio.h>

int main(){

   int sayi;

   printf("4 basamakli sayi giriniz:");
   scanf("%d",&sayi);

   int veri1 = sayi % 10;
   int veri2 = (sayi % 100 ) / 10 ;
   int veri3 = (sayi % 1000 ) / 100 ;
   int veri4 = (sayi % 10000 ) / 1000;

   // printf("%d\n",veri1);
   // printf("%d\n",veri2);
   // printf("%d\n",veri3);
   // printf("%d\n",veri4);

   int sonuc1 = veri1 * 10 + veri2 ; //ab
   int sonuc2 = veri3 * 10 + veri4 ; //cd
   int sonuc3 = veri2 * 10 + veri1 ; //ba
   int sonuc4 = veri4 * 10 + veri3 ; //dc

   if ( sonuc1 * sonuc2 == sonuc3 * sonuc4){
      printf("Sayin ters yuz sayi");
   }
   else {
      printf("Sayin ters yuz degil");
   }

   return 0;
}
*/

/*
#include <stdio.h>

int main(){

   int sayi;

   printf("5 basamakli sayi giriniz:");
   scanf("%d",&sayi);

   int veri1 = sayi % 10;
   int veri2 = (sayi % 100 ) / 10 ;
   int veri3 = (sayi % 1000 ) / 100 ;
   int veri4 = (sayi % 10000 ) / 1000;
   int veri5 = (sayi % 100000) / 10000 ;

   int sonsayi = veri1 * 10000 + veri2 * 1000 + veri3 * 100 + veri4 * 10 + veri5;

   if ( sonsayi = sayi){
      printf("Sayin  palindrom sayi");
   }
   else {
      printf("Sayin palindrom degil");
   }

   return 0;
}

*/

// #include <stdio.h>

// int main(){

//    float ales, dil, agno;

//    printf("ALES puaninizi giriniz: \n");
//    scanf(" %f",&ales);

//    printf("Yabanci dil puaninizi giriniz: \n");
//    scanf(" %f",&dil);

//    printf("AGNO'yu giriniz: \n");
//    scanf(" %f",&agno);

//    float puan = (ales / 2) + (dil / 4 ) + (agno / 4);

//    if (puan >= 60){
//       printf("Lisansustu egitime hak kazandin");
//    }
//    else {
//       printf("Lisansustu egitime hak kazanamadin");
//    }

//    return 0;
// }
/*

#include <stdio.h>

int main()
{

   int age, boy, kilo;

   printf("Yasinizi giriniz: ");
   scanf("%d", &age);
   printf("Kilonuzu kg cinsinden giriniz: ");
   scanf("%d", &kilo);
   printf("Boyunuzu cm cinsinden giriniz: ");
   scanf("%d", &boy);

   float boy1 = boy * 0.01;
   float boy2 = boy1 * boy1;
   //  printf("%f\n",boy);
   //  printf("%f\n",boy1);
   //  printf("%f",boy2);

   float vki = (kilo / boy2);
   if (13 <= age && age <= 17)
   {
      if (vki >= 18.50 && vki < 25)
      {
         printf("Askeri liseye basvurun kabul edildi");
      }
      else
      {
         printf("Askeri liseye basvurun kabul edilmedi");
      }
   }
   else
   {
      printf("Yasiniz tutmuyor");
   }
   return 0;
}
*/

/*
Fonksiyon kullanımı
döngü kullanımı
kontrol yapılarının kulanımı(if,switch case)
Dosya okuma ve yazma işlemlerinin gerçekleştirilmesi
*/
/*
#include <stdio.h>

void main()
{

   int sayi1;
   float sayi3 = 0;

   printf("Bir sayi giriniz: ");
   scanf("%d", &sayi1);

   for (int a = 1; a <= sayi1; a++)
   {

      float sayi2 = ((a * a + 1.23) / (a - 0.25));
      printf("%f\n", sayi2);
      sayi3 += sayi2;
      printf("%f\n", sayi3);
   }
}


/*
#include <stdio.h>

void main()
{

   int sayi1;

   printf("Bir sayi giriniz: ");
   scanf("%d", &sayi1);

   for (int a = 1; a <= sayi1; a++)
   {

      for (int b = 1; b <= a; b++)
      {

         printf("#");
      }
      printf("\n");
   }
}
*/
/*
#include <stdio.h>

void main()
{

   char tip;
   int mesafe, gun;
   float ucret;

   printf("Araba tercihinizi giriniz:\nArazi(A)\nBinek(B)\nStatition(S)\nSpor(P)\n");
   scanf("%c", &tip);

   printf("Kullandiginiz gun sayisini giriniz: ");
   scanf("%d", &gun);

   printf("Gittiginiz mesafeyi giriniz: ");
   scanf("%d", &mesafe);

   switch (tip)
   {
   case 'A':;
   case 'a':
      ucret = mesafe * 18 + gun * 20;
      break;

   case 'B':;
   case 'b':
      ucret = mesafe * 22 + gun * 32;
      break;
   case 'S':;
   case 's':
      ucret = mesafe * 28 + gun * 43;
      break;
   case 'P':;
   case 'p':
      ucret = mesafe * 36 + gun * 51;
      break;
   default:
      printf("Gecerli bir deger giriniz");
      break;
   }
   printf("Odemeniz gereken tutar: %.2f TL", ucret);
}

*/

#include <stdio.h>

void main()
{

   int kod;
   int RenaultKod = 0, MazdaKod = 0, HondaKod = 0, FordKod = 0;
   float ucret, RenaultUcret = 0, MazdaUcret = 0, HondaUcret = 0, FordUcret = 0;

   do
   {
      printf("Arac kodunu giriniz: Renault(1), Mazda(2), Honda(3), Ford(4) \n");
      printf("Almak istediginiz benzin ucretini giriniz: ");
      scanf("%d %f", &kod, &ucret);

      switch (kod)
      {
      case 1:
         RenaultKod++;
         RenaultUcret += ucret;
         break;
      case 2:
         MazdaKod++;
         MazdaUcret += ucret;
         break;
      case 3:
         HondaKod++;
         HondaUcret += ucret;
         break;
      case 4:
         FordKod++;
         FordUcret += ucret;
         break;

      default:
         break;
      }

   } while (kod != 111)
   ;

   int enbuyukkod = RenaultKod, i = 1;

   if (MazdaKod > enbuyukkod)
   {
      enbuyukkod = MazdaKod;
      i = 2;
   }
   if (HondaKod > enbuyukkod)
   {
      enbuyukkod = HondaKod;
      i = 3;
   }
   if (FordKod > enbuyukkod)
   {
      enbuyukkod = FordKod;
      i = 4;
   }

   printf("En cok gelen arac ");

   switch (i)
   {
   case 1:
      printf("Renault (%d)", RenaultKod);
      break;
   case 2:
      printf("Mazda (%d)", MazdaKod);
      break;
   case 3:
      printf("Honda (%d)", HondaKod);
      break;
   case 4:
      printf("Ford (%d)", FordKod);
      break;
   }


   float encokpara = RenaultUcret;
   int j = 1;

   if (MazdaUcret > encokpara)
   {
      encokpara = MazdaUcret;
      j = 2;
   }
   if (HondaUcret > encokpara)
   {
      encokpara = HondaUcret;
      j = 3;
   }
   if (FordUcret > encokpara)
   {
      encokpara = FordUcret;
      j = 4;
   }

   printf("\nEn cok yakit alan arac ");

   switch (j)
   {
   case 1:
      printf("Renault (%.3f)", RenaultUcret);
      break;
   case 2:
      printf("Mazda (%.3f)", MazdaUcret);
      break;
   case 3:
      printf("Honda (%.3f)", HondaUcret);
      break;
   case 4:
      printf("Ford (%.3f)", FordUcret);
      break;
   }

}