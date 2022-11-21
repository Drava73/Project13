#include <iostream>
#include <wchar.h>

using namespace std;

 
inline void SbrosVvoda() { if (wcin.peek() != '\n') while (wcin.peek() != '\n') wcin.ignore(); }

int main()
{	setlocale(LC_ALL, "ru");
	bool xit = false;
	wchar_t chr = ' ';
	wchar_t alhavit[33] = { L'а', L'б', L'в', L'г', L'д', L'е', L'ё', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ь', L'ы', L'ъ', L'э', L'ю', L'я' };
	short i;
	wchar_t slovo[7] = { L'ч', L'е', L'р', L'н', L'и', L'к', L'а' };
	wchar_t sSlovo[7] = { '?', '?', '?', '?', '?', '?', '?' };
	wchar_t charbk[16] = { L'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };
	short indchr = 0;
	bool good;
	short sbok = 9;
	short hsws = 0;
		chr = ' ';

	wcout << L"Загадал слово\n";

	 
	while (true)
	{
		 
		if (hsws == 7)
		{
			wcout << L"Ты угадал мое слово.\n";
			wcout << L"Слово было :\"";
			wcout << slovo;
			wcout << L"\".\n";
			wcout << L"Спасибо за игру.\n";
	 		}

	 
		if (sbok < 0)
		{
			wcout << L"\nзакончились попытки.\n";
			wcout << L"Слово было : \"";
			wcout << slovo;
			wcout << L"\".\n";
			wcout << L"Спасибо за игру.\n";
		 	}

	rls:

 	
		wcout << sSlovo << L"\n";

 
		wcout << L"Кол-во попыток:" << sbok + 1 << ".\n";
		wcout << L"Буква:\n";
		wcin >> chr;
		SbrosVvoda();
 		good = false;
		for (i = 0; i < 33; i++)
			if (chr == alhavit[i])
			{
				good = true;
				break;
			}
		if (!good)
		{
			wcout << L"\nОшибка.\n\n";
			goto rls;
		}

 
		for (i = 0; i < 15; i++)
			if (chr == charbk[i])
			{
				wcout << L"\nОшибка.Бyква повторяется.\n\n";
				goto rls;
			}
 
		good = false;
		for (i = 0; i < 7; i++)
			if (chr == slovo[i])
			{
				wcout << L"Правильно\n\n";
				sSlovo[i] = slovo[i];
				hsws++;
				good = true;
				break;
			}
		if (!good)
		{
			wcout << L"Не правильно\n\n";
			sbok--;
		};
		charbk[indchr] = chr;
		indchr++;
			}
  	}