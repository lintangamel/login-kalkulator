#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 255


void main(){
    login();
}
void print_menu(char head[100], char menu[10][100], int jm, int pil)
{
    printf("\n\n");
    printf("  ^==================^\n");
    printf("%s\n", head);
    printf("   ==================\n");
    int i;
    for (i = 1; i <= jm; i++)
    {
        if (pil == i)
        {
            printf("   ==> \t");
        }
        else
        {
            printf("\t");
        }
        printf("%d. %s \n", i, menu[i - 1]);
    }
    printf(" <==================>\n");
}

void login()
{
 char pasword[10],usrname[10], ch;
 int i;
 system("cls");

 printf("Enter User name: ");
 gets(usrname);
 printf("Enter the password <any 8 characters>: ");

 for(i=0;i<8;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }
 printf("\nYour Password is: ");

 for(i=0;i<8;i++)
 {
     printf("%c",pasword[i]);
 }
 mainmenu();

}

int mainmenu()
{
    system("color F0");
    int pil = 1;
    int pil1 = 1;
    int pil2 = 1;
    char menu_awal[5][100] = {"PingPoroLanSudo", "SinCosTan", "Hitung Keliling dan Luas", "Hitung Akar Kuadrat", "Exit"};
    int jm_awal = 5;
    char j;
    while (1)
    {
        system("cls");
        print_menu("    TUGAS KALKULATOR    ", menu_awal, jm_awal, pil);
        j = getch();
        if(j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 5)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil == 1)
            {
                menu_1();
            }
            else if (pil == 2)
            {
                menu_2();
            }
            else if (pil == 3)
            {
                menu_3();
            }
            else if (pil == 4)
            {
                akar();
            }
            else
            {
                system("cls");
                printf(" maaciiiww :v\n");
                return 1;
            }
        }
    }

    return 0;
}

int menu_1()
{
    int pil = 1;
    float a, b, x;
    char menu_1[5][100] = {"Perkalian", "Pembagian", "Penjumlahan", "Pengurangan", "Return Menu Utama"};
    int jm_1 = 5;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Ping Poro Lan Sudo", menu_1, jm_1, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 5)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil != 5)
            {
                do
                {
                    system("cls");
                    printf("Masukan angka pertama : ");
                    scanf("%f", &a);
                    printf("Masukan angka kedua : ");
                    scanf("%f", &b);
                    if (pil == 1)
                    {
                        x = a * b;
                        printf("hasil dari %.2f * %.2f adalah = %.2f \n", a, b, x);
                    }
                    else if (pil == 2)
                    {
                        x = a / b;
                        printf("hasil dari %.2f / %.2f adalah = %.2f \n", a, b, x);
                    }
                    else if (pil == 3)
                    {
                        x = a + b;
                        printf("hasil dari %.2f + %.2f adalah = %.2f \n", a, b, x);
                    }
                    else if (pil == 4)
                    {
                        x = a - b;
                        printf("hasil dari %.2f - %.2f adalah = %.2f \n", a, b, x);
                    }
                    printf("Press any key to continue . . .");
                    getch();

                    printf("\nIngin mengulang? (y/n) : ");
                    scanf(" %c", &k);
                } while (k == 'y');
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

void menu_2()
{
    int pil = 1;
    float derajat, radian, x;
    char menu_2[4][100] = {"Sinus", "Cosinus", "Tangen", "Return Menu Utama"};
    int jm_2 = 4;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Sinus Cosinus Tangen", menu_2, jm_2, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 4)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil != 4)
            {
                do
                {
                    system("cls");
                    if (pil == 1)
                    {
                        printf("Masukan derajat sinus : ");
                        scanf("%f", &derajat);
                        radian = (derajat * M_PI) / 180;
                        x = sin(radian);
                        printf("hasil sinus adalah = %.2f \n", x);
                    }
                    else if (pil == 2)
                    {
                        printf("Masukan derajat cosinus : ");
                        scanf("%f", &derajat);
                        radian = (derajat * M_PI) / 180;
                        x = cos(radian);
                        printf("hasil cosinus adalah = %.2f \n", x);
                    }
                    else if (pil == 3)
                    {
                        printf("Masukan derajat tangen : ");
                        scanf("%f", &derajat);
                        radian = (derajat * M_PI) / 180;
                        x = tan(radian);
                        printf("hasil tangen adalah = %.2f \n", x);
                    }

                    printf("Press any key to continue . . .");
                    getch();

                    printf("\nIngin mengulang? (y/n) : ");
                    scanf(" %c", &k);
                } while (k != 'y');

            }
            else
            {
                printf ("Pilihan Tidak Tersedia");
                getch();
            }
        }
    }
    return 1;
}

void keliling_bangun_datar()
{
    int pil = 1;
    float a, b, c, x;
    char menu[5][100] = {"Keliling Persegi", "Keliling Trapesium", "Keliling layang-layang", "keliling Lingkaran", "Kembali Ke Menu Sebelumnya"};
    int jm = 5;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Keliling Bangun Datar", menu, jm, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 5)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil != 5)
            {
                do
                {
                    system("cls");
                    if (pil == 1)
                    {
                        printf("Masukan panjang persegi : ");
                        scanf("%f", &a);
                        printf("Masukan lebar persegi : ");
                        scanf("%f", &b);
                        x = (a * 2) + (b * 2);
                        printf("Keliling Persegi adalah = %.2f \n", x);
                    }
                    else if (pil == 2)
                    {
                        printf("Masukan Sisi Atas Trapesium Sama Kaki : ");
                        scanf("%f", &a);
                        printf("Masukan Sisi Bawah Trapesium Sama Kaki : ");
                        scanf("%f", &b);
                        printf("Masukan Sisi Miring Trapesium Sama Kaki : ");
                        scanf("%f", &c);
                        x = a + b + (c * 2);
                        printf("Keliling Trapesium Sama Kaki adalah = %.2f \n", x);
                    }
                    else if (pil == 3)
                    {
                        printf("Masukan panjang Sisi Atas : ");
                        scanf("%f", &a);
                        printf("Masukan Panjang Sisi Bawah : ");
                        scanf("%f", &b);
                        x = 2 * (a + b);
                        printf("Keliling Layang-layang adalah = %.2f \n", x);
                    }
                    else if (pil == 4)
                    {
                        printf("Masukan panjang Diameter : ");
                        scanf("%f", &a);
                        printf("Masukan Panjang Jari Jari : ");
                        scanf("%f", &b);
                        x = 22 / 7 * a;
                        printf("Keliling Lingkaran berdasarkan diameter adalah = %.2f \n", x);
                        x = 2 * 22 / 7 * b;
                        printf("Keliling Lingkaran berdasarkan jari-jari adalah = %.2f \n", x);
                    }
                    printf("Press any key to continue . . .");
                    getch();

                    printf("\nIngin mengulang? (y/n) : ");
                    scanf(" %c", &k);
                } while (k == 'y');
            }
            else
            {
                return 1;
            }
        }
    }
    return 1;
}

void luas_bangun_datar()
{
    int pil = 1;
    float a, b, c, x;
    char menu[5][100] = {"Luas Persegi", "Luas Trapesium", "Luas layang-layang", "Luas Lingkaran", "Kembali Ke Menu Sebelumnya"};
    int jm = 5;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Luas Bangun Datar", menu, jm, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 5)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil != 5)
            {
                do
                {
                    system("cls");
                    if (pil == 1)
                    {
                        printf("Masukan panjang persegi : ");
                        scanf("%f", &a);
                        printf("Masukan lebar persegi : ");
                        scanf("%f", &b);
                        x = a * b;
                        printf("Luas Persegi adalah = %.2f \n", x);
                    }
                    else if (pil == 2)
                    {
                        printf("Masukan Sisi Atas Trapesium Sama Kaki : ");
                        scanf("%f", &a);
                        printf("Masukan Sisi Bawah Trapesium Sama Kaki : ");
                        scanf("%f", &b);
                        printf("Masukan Sisi Tinggi Trapesium Sama Kaki : ");
                        scanf("%f", &c);
                        x = 0.5 * (a + b) * c;
                        printf("Luas Trapesium Sama Kaki adalah = %.2f \n", x);
                    }
                    else if (pil == 3)
                    {
                        printf("Masukan Diagonal Panjang : ");
                        scanf("%f", &a);
                        printf("Masukan Diagonal Lebar : ");
                        scanf("%f", &b);
                        x = a * b;
                        printf("Luas Layang-layang adalah = %.2f \n", x);
                    }
                    else if (pil == 4)
                    {
                        printf("Masukan panjang Diameter : ");
                        scanf("%f", &a);
                        printf("Masukan Panjang Jari Jari : ");
                        scanf("%f", &b);
                        x = 0.25 * 22 / 7 * a * a;
                        printf("Luas Lingkaran berdasarkan diameter adalah = %.2f \n", x);
                        x = 0.25 * 22 / 7 * (b * 2) * (b * 2);
                        printf("Luas Lingkaran berdasarkan jari-jari adalah = %.2f \n", x);
                    }
                    printf("Press any key to continue . . .");
                    getch();

                    printf("\nIngin mengulang? (y/n) : ");
                    scanf(" %c", &k);
                } while (k == 'y');
            }
            else
            {
                return 1;
            }
        }
    }
    return 1;
}

void volume_bangun_ruang()
{
    int pil = 1;
    float a, b, c, d, e, f, x;
    char menu[5][100] = {"Volume Kubus", "Volume Prisma", "Volume Limas", "Volume Bola", "Kembali Ke Menu Sebelumnya"};
    int jm = 5;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Volume Bangun Ruang", menu, jm, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 5)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil != 5)
            {
                do
                {
                    system("cls");
                    if (pil == 1)
                    {
                        printf("Masukan panjang sisi kubus : ");
                        scanf("%f", &a);
                        x = a * a * a;
                        printf("Volume Kubus adalah = %.2f \n", x);
                    }
                    else if (pil == 2)
                    {
                        printf("Masukan Sisi Persegi : ");
                        scanf("%f", &a);
                        printf("Masukan Lebar Alas Segitiga : ");
                        scanf("%f", &b);
                        printf("Masukan Tinggi Segitiga : ");
                        scanf("%f", &c);
                        printf("Masukan Jari Jari Lingkaran : ");
                        scanf("%f", &d);
                        printf("Masukan Diameter Lingkaran : ");
                        scanf("%f", &e);
                        printf("Masukan Tinggi prisma : ");
                        scanf("%f", &f);
                        x = a * a * f;
                        printf("Volume Prisma Persegi adalah = %.2f \n", x);
                        x = 0.5 * b * c * f;
                        printf("Volume Prisma Segitiga adalah = %.2f \n", x);
                        x = 0.25 * 22 / 7 * (d * 2) * (d * 2) * f;
                        printf("Volume Silinder berdasarkan jari-jari adalah = %.2f \n", x);
                        x = 0.25 * 22 / 7 * e * e * f;
                        printf("Volume Silinder berdasarkan diameter adalah = %.2f \n", x);
                    }
                    else if (pil == 3)
                    {
                        printf("Masukan Sisi Persegi : ");
                        scanf("%f", &a);
                        printf("Masukan Lebar Alas Segitiga : ");
                        scanf("%f", &b);
                        printf("Masukan Tinggi Segitiga : ");
                        scanf("%f", &c);
                        printf("Masukan Jari Jari Lingkaran : ");
                        scanf("%f", &d);
                        printf("Masukan Diameter Lingkaran : ");
                        scanf("%f", &e);
                        printf("Masukan Tinggi prisma : ");
                        scanf("%f", &f);
                        x = a * a * f / 3;
                        printf("Volume Limas Persegi adalah = %.2f \n", x);
                        x = 0.5 * b * c * f / 3;
                        printf("Volume Limas Segitiga adalah = %.2f \n", x);
                        x = 0.25 * 22 / 7 * (d * 2) * (d * 2) * f / 3;
                        printf("Volume Limas Silinder berdasarkan jari-jari adalah = %.2f \n", x);
                        x = 0.25 * 22 / 7 * e * e * f / 3;
                        printf("Volume Limas Silinder berdasarkan diameter adalah = %.2f \n", x);
                    }
                    else if (pil == 4)
                    {
                        printf("Masukan Jari Jari Lingkaran : ");
                        scanf("%f", &a);
                        printf("Masukan Diameter Lingkaran : ");
                        scanf("%f", &b);
                        x = 3.14 * 4 / 3 * pow(a, 3);
                        printf("Volume Bola berdasarkan jari-jari adalah = %.2f \n", x);
                        x = 3.14 * 4 / 3 * pow(b / 2, 3);
                        printf("Volume Bola berdasarkan diameter adalah = %.2f \n", x);
                    }
                    printf("Press any key to continue . . .");
                    getch();

                    printf("\nIngin mengulang? (y/n) : ");
                    scanf(" %c", &k);
                } while (k == 'y');
            }
            else
            {
                return 1;
            }
        }
    }
    return 1;
}

void menu_3()
{
    int pil = 1;
    char menu_3[4][100] = {"Hitung Keliling Bangun Datar", "Hitung Luas Bangun Datar", "Hitung Volume Bangun Ruang", "Return Menu Utama"};
    int jm_3 = 4;
    char j;
    char k;
    while (1)
    {
        system("cls");
        print_menu("   Keliling Luas Volume", menu_3, jm_3, pil);
        j = getch();
        if (j == 72)
        {
            if (pil > 1)
            {
                pil--;
            }
        }
        else if (j == 80)
        {
            if (pil < 4)
            {
                pil++;
            }
        }
        else if (j == 13)
        {
            if (pil == 1)
            {
                keliling_bangun_datar();
            }
            else if (pil == 2)
            {
                luas_bangun_datar();
            }
            else if (pil == 3)
            {
                volume_bangun_ruang();
            }
            else
            {
                return 1;
            }
        }
    }
    return 1;
}

void akar()
{
    float a, x;
    char k;
    do
    {
        system("cls");
        printf("masukan bilangan yang akan diakar : ");
        scanf("%f", &a);
        x = sqrt(a);
        printf("Hasil akar dari %.2f adalah %.2f \n", a, x);
        printf("Press any key to continue . . .");
        getch();

        printf("\nIngin mengulang? (y/n) : ");
        scanf(" %c", &k);
    } while (k == 'y');
}




