#include <iostream>
#include <wchar.h>

using namespace std;

 
inline void SbrosVvoda() { if (wcin.peek() != '\n') while (wcin.peek() != '\n') wcin.ignore(); }

int main()
{	setlocale(LC_ALL, "ru");
	bool xit = false;
	wchar_t chr = ' ';
	wchar_t alhavit[33] = { L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�', L'�' };
	short i;
	wchar_t slovo[7] = { L'�', L'�', L'�', L'�', L'�', L'�', L'�' };
	wchar_t sSlovo[7] = { '?', '?', '?', '?', '?', '?', '?' };
	wchar_t charbk[16] = { L'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };
	short indchr = 0;
	bool good;
	short sbok = 9;
	short hsws = 0;
		chr = ' ';

	wcout << L"������� �����\n";

	 
	while (true)
	{
		 
		if (hsws == 7)
		{
			wcout << L"�� ������ ��� �����.\n";
			wcout << L"����� ���� :\"";
			wcout << slovo;
			wcout << L"\".\n";
			wcout << L"������� �� ����.\n";
	 		}

	 
		if (sbok < 0)
		{
			wcout << L"\n����������� �������.\n";
			wcout << L"����� ���� : \"";
			wcout << slovo;
			wcout << L"\".\n";
			wcout << L"������� �� ����.\n";
		 	}

	rls:

 	
		wcout << sSlovo << L"\n";

 
		wcout << L"���-�� �������:" << sbok + 1 << ".\n";
		wcout << L"�����:\n";
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
			wcout << L"\n������.\n\n";
			goto rls;
		}

 
		for (i = 0; i < 15; i++)
			if (chr == charbk[i])
			{
				wcout << L"\n������.�y��� �����������.\n\n";
				goto rls;
			}
 
		good = false;
		for (i = 0; i < 7; i++)
			if (chr == slovo[i])
			{
				wcout << L"���������\n\n";
				sSlovo[i] = slovo[i];
				hsws++;
				good = true;
				break;
			}
		if (!good)
		{
			wcout << L"�� ���������\n\n";
			sbok--;
		};
		charbk[indchr] = chr;
		indchr++;
			}
  	}