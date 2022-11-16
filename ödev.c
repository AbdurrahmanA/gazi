

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
}

*/
