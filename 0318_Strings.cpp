// 0318_Strings.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main()
{
	printf("\tUrok_1__Modul__8__Domasnaa_rabota_1521261063 \n");
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;

	do {
		if (n == 1)
		{
			/*  1. 	Составить программу, которая:
			a.	запрашивает имя человека и повторяет его на экране;
			b.	запрашивает имя человека и повторяет его на экране с приветствием.
			*/
			char nm[15] = { 0 };
			char priva[] = "welcome!";
			printf("Enter name: ");
			scanf_s("%s", &nm, sizeof(nm));
			printf("Enter name one more time: ");
			scanf_s("%s", &nm, sizeof(nm));
			printf("\t%s %s\n", nm, priva);
		}

		else if (n == 2)
		{
			/*	2.  Составить программу, которая запрашивает название футбольной команды
			и повторяет его на экране со словами "— это чемпион!".
			*/
			char nm[15] = { 0 };
			char priva[] = "— это чемпион!";
			printf("Enter football club name: ");
			scanf_s("%s", &nm, sizeof(nm));
			printf("\t%s %s\n", nm, priva);
		}

		else if (n == 3)
		{
			/*  3.  Составить программу, которая запрашивает
			отдельно имя и отдельно фамилию,
			затем выводит их как одну символьную строку.
			*/
			char nm[13] = { 0 };
			char surnm[21] = { 0 };
			printf("Enter name: ");
			scanf_s("%s", &nm, sizeof(nm));
			printf("Enter surname: ");
			scanf_s("%s", &surnm, sizeof(surnm));
			printf("\t%s %s\n", nm, surnm);
		}

		else if (n == 4)
		{
			/*	4.  Составить программу, которая запрашиваетназвание государства и его столицы,
			 а затем выводит сообщение: "Столица государства ... — город ..."
			(на месте многоточий должны быть выведены соответствующие значения).*/
			char country[13] = { 0 };
			char capital[13] = { 0 };
			char cnt_txt[] = "Столица государства";
			char cpt_txt[] = "— город";
			printf("Enter country: ");
			scanf_s("%s", &country, sizeof(country));
			printf("Enter capital: ");
			scanf_s("%s", &capital, sizeof(capital));
			printf("\t%s %s %s %s\n", cnt_txt, country, cpt_txt, capital);
		}

		else if (n == 5)
		{
			/*	5.  Дано название футбольного клуба.
			Определить количество символов в нем.
			*/
			char football_club[] = "Nooit Opgeven Altijd Doorzetten Aangenaam Door Vermaak En Nuttig Door Ontspanning Combinatie Breda – Нидерланды";
			printf("\t%s\n", football_club);
			int dl = strlen(football_club);
			printf("\tdlina nazvania FK goroda Breda – Нидерланды = %d simvolov\n", dl);
		}

		else if (n == 6)
		{
			/*	6.  Дано название города.
			Определить, четно или нет количество символов в нем
			*/
			char gorod[15] = { 0 };
			printf("Enter city name: ");
			scanf_s("%s", &gorod, sizeof(gorod));
			printf("\t%s\n", gorod);
			int dl = strlen(gorod);
			if (dl%2==0) 
			printf("\tdlina nazvania goroda = %d, kol-vo simvolov chetno\n", dl);
			else 
				printf("\tdlina nazvania goroda = %d, kol-vo simvolov nechetno\n", dl);
		}

		else if (n == 7)
		{
			/*	7.  Даны две фамилии.
			Определить, какая из них длиннее.
			*/
			char fm1[21] = { 0 };
			char fm2[21] = { 0 };
			printf("Enter surname 1: ");
			scanf_s("%s", &fm1, sizeof(fm1));
			printf("Enter surname 2: ");
			scanf_s("%s", &fm2, sizeof(fm2));
			int dl1 = strlen(fm1);
			int dl2 = strlen(fm2);
			if (dl1 == dl2)
			{
				printf("%d = %d, % s = %s\n", dl1, dl2, fm1, fm2);
					
			}
			else if (dl1 > dl2) 
			{
				printf("%d > %d, %s dlinnei %s\n", dl1, dl2, fm1, fm2);
			}
			else 
				printf("%d < %d, %s koroche %s\n", dl1, dl2, fm1, fm2);
			
		}

		else if (n == 8)
		{
			/*	8.  Даны названия трех городов.
			Вывести на экран самое длинное и самое короткое название.
			*/
			char grd1[21] = { 0 };
			char grd2[21] = { 0 };
			char grd3[21] = { 0 };
			char * pt_ms[] = { grd1, grd2, grd3 };
						
			printf("Enter 3 cities cherez probel: ");
			scanf_s("%s %s %s", &grd1, sizeof(grd1), &grd2, sizeof(grd2), &grd3, sizeof(grd3));
			
			int dl1 = strlen(*pt_ms);
			int dl2 = strlen(*(pt_ms + 1));
			int dl3 = strlen(*(pt_ms + 2));
			int ms[] = {dl1, dl2, dl3};
		
			int * p_ms = &ms[0];
			int min = *p_ms;
			int max = *(p_ms+2);
			int i_min = 0;
			int i_max = 2;
			
			for (int i = 0; i < 3; i++)
			{
				if (min > *(p_ms + i))
				{
					min = *(p_ms + i);
					i_min = i;
				}
				if (max < *(p_ms + i))
				{
					max = *(p_ms + i);
					i_max = i;
				}
			}
			printf("\tsamoe dlinnoe %d %s, samoe korotkoe %d %s\n", max, *(pt_ms+i_max), min, *(pt_ms+i_min));
		}

		else if (n == 9)
		{
			/*	9.  Дано слово. Вывести на экран его третий символ
			*/
			char slovo[] ="Grzegorz Brzenczyszczzykiewicz";
			char * pt_slovo = &slovo[0];
			printf("slovo: %s\n", slovo);
			printf("3-i symvol: %c\n", *(pt_slovo + 2));
		}

		else if (n == 10)
		{
			/*	10. Введите массив символов из 12 элементов.
			Замените каждый символ- цифру на символ '!'
			*/
			int cnt = 0;
			char ms_smv[13] = { 0 };
			char * ptr = &ms_smv[0];
			char mas_key[] = { '0','1','2','3','4','5','6','7','8','9' };
			char * ptr_k = &mas_key[0];
			printf("Введите массив символов из 12 элементов, буквы и цифры без пробелов в случайном порядке: ");
			scanf_s("%s", ms_smv, sizeof(ms_smv));
			printf("DO:    %s\n", ms_smv);
			for (int i = 0; i < sizeof(ms_smv); i++)
			{
				for (int j = 0; j < sizeof(mas_key); j++)
				{
					if (*(ptr + i) == *(ptr_k + j))
					{
						*(ptr + i) = '!';
						cnt++;
					}
				}
			}
			printf("POSLE: %s %d zamen\n", ms_smv, cnt);
		}

		else if (n == 11)
		{
			/*	11. Дана матрица символов размером 3×5.
			Сколько раз среди данных символов встречаются символы +, -, *.	*/
			char ms_smv[16];
			char ms_key []={ '+', '-', '*'};
			char * ptr_keys=&ms_key[0];
			printf("Введите массив символов из 15 элементов, буквы цифры и символы  +, -, *\n");
			printf("без пробелов в случайном порядке: \n");
			scanf_s("%s", ms_smv, sizeof(ms_smv));
			printf("poluchen massiv: %s\n", ms_smv);
			int cnt = 0;
			for(int j=0;j<sizeof(ms_key);j++)
			{
			for (int k=0; k<3; k++)
				{
				for (int i = 0; i < 5; i++)
					{
					if (*((ms_smv + k) + i) == *(ptr_keys + j))   cnt++;
					}
				}
			}
			printf("символы  +, -, * встречаются %d раз\n", cnt);
		
		}

		else if (n == 12)
		{
			/*	12. Введите массив символов из 15 элементов.
			Подсчитать количество гласных русских букв. 	*/
			int cnt = 0;
			char ms_smv[16] = { 0 };
			char * ptr = &ms_smv[0];
			char mas_key[] = {'ё','у','е','ы','я','а','о','э','и','ю' };
			char * ptr_k = &mas_key[0];
			printf("Введите массив символов из 15 элементов,");
			printf("включая гласные русские буквы без пробелов в случайном порядке: \n");
			scanf_s("%s", ms_smv, sizeof(ms_smv));
			printf("massiv %s\n", ms_smv);
			for (int i = 0; i < sizeof(ms_smv); i++)
			{
				for (int j = 0; j < sizeof(mas_key); j++)
				{
					if (*(ptr + i) == *(ptr_k + j))
					{
						printf("%d %c  %d %c\n", i, *(ptr + i), j, *(ptr_k + j));
						cnt++;
					}
				}
			}
			printf("%d zamen\n", cnt);
		}

		else if (n == 13)
		{
			/*	13. Дан массив символов, среди которых есть символ двоеточие ‘:’.
			Определить, сколько символов ему предшествует.
			*/
			char text[] = "Балльшпильферайн Боруссия нойнцейн хундерт нойн:Футбольный Клуб Боруссия 1909,Дортмунд";
			char * ptr_txt = &text[0];
			char key = ':';
			int count = 0;
			int Dl = sizeof(text);
			for (int i = 0; i <Dl; i++)
			{
				if (*(ptr_txt + i) != key)	count++;
				else break;
			}
			printf("DO symvola ':' %d symvolov stroki\n", count);
		}

		else if (n == 14)
		{
			/*	14. Дан массив символов.
			Определить, сколько раз входит в него группа букв abc.
			*/
			char txt1[] = "abc The New Saints of Oacswestry Town abc&abc Llansabcntffrabid Football Club abc?";
			char txt2[] = "abc";
			printf("stroka1: %s\n", txt1);
			printf("stroka2: %s\n", txt2);
			char * pt_txt1 = &txt1[0];
			char * pt_txt2 = &txt2[0];
			
			int cnt=0;
			for (int i = 0; i < sizeof(txt1); i++)
			{
				int fl = 0;
				if (*(pt_txt1 + i) == *pt_txt2)
				{
				for (int j = 0; j < sizeof(txt2); j++) 
					{
					if (*(pt_txt2 + j) == *(pt_txt1 + i + j))  fl++;	
					}
				}
				if (fl == (sizeof(txt2)-1)) 
				{
				cnt++; 
				printf("cnt %d fl %d \n", cnt, fl);
				}	
			}
			printf("kol-vo raz: %d\n", cnt);
		}

		else if (n == 15)
		{
			/*	15. Заданы две строки.
			Построить новую строку, состоящую из символов,
			которые входят в первую строку, но не входят во вторую.
			*/
			char txt1[] = "qwerty@#$%^&йцукен_ёш_";
			char txt2[] = "@#$%^&*";
			printf("stroka1: %s\n", txt1);
			printf("stroka2: %s\n", txt2);
			char * pt_txt1 = &txt1[0];
			char * pt_txt2 = &txt2[0];
			char txt3[sizeof(txt1)] = { 0 };    // на случай если txt2 - нулевая
			char * pt_txt3 = &txt3[0];
			
			int cnt = 0;
			int fl = 0;
			for (int i = 0; i < sizeof(txt1); i++)
			{
				for (int j = 0; j < sizeof(txt2); j++)
				{
					if (*(pt_txt1 + i) == *(pt_txt2 + j))
					{
						j++; fl = 1; break;   // достаточно хотя бы 1-го совпадения чтобы выкинуть символ из процесса
					}
				}
				if (fl==0)
				{
					*(pt_txt3+cnt) = *(pt_txt1 + i);
					printf("i: %d txt3: %c  cnt: %d \n", i, *(pt_txt3 + cnt), cnt);
					cnt++;
				}
				fl = 0;
			}
			printf("txt3: %s %d \n", pt_txt3, cnt);
		}
		printf("Vvod nomera zadania, 0-exit: ");
		scanf_s("%d", &n);
	} while (n != 0);

	return 0;
}