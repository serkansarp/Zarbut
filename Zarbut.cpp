#include <iostream>
#include <clocale>
#include <ctime>
#include <string>
#include <windows.h>     //required for Sleep()

using namespace std;

// ZARBUT:

int main() {
	setlocale(LC_ALL, "Turkish");
	int zar, zaratisi = 150, toplampara = -1000, kazanilan = NULL; string karzarar = "s", karzarar2 = "s2", karzarar3 = "s3";
	srand(time(NULL));

	// Kapak Logo ve Metin
	cout << endl << endl << "  ---------------------------------------------------------------" << endl;
	cout << " |               ������   ����   �����   �����   ��  ��  ������  |" << endl;
	cout << " |                  ��   ��  ��  ��  ��  ��  ��  ��  ��    ��    |" << endl;
	cout << " |                 ��    ������  �����   �����   ��  ��    ��    |" << endl;
	cout << " |                ��     ��  ��  ��  ��  ��  ��  ��  ��    ��    |" << endl;
	cout << " | v.1.2         ������  ��  ��  ��  ��  �����    ����     �� �  |" << endl;
	cout << " |---------------------------------------------------------------|" << endl;
	cout << " |                                      Serkan SARP - 2022 May�s |" << endl;
	cout << " |---------------------------------------------------------------|" << endl;
	cout << " | " << char(4) << " Oyun kurallar� basittir. Tek zarla oynan�r.                 | " << endl;
	cout << " | " << char(4) << " Masaya oturmak 1000 TL'dir. -1000 zarar ile ba�lan�r, ama�  |" << endl;
	cout << " |   bu paray� kurtar�p, olabildi�ince de kazanmakt�r.           |" << endl;
	cout << " | " << char(4) << " Tek zarlar kaybettirir, �ift zarlar kazand�r�r.             | " << endl;
	cout << " | " << char(4) << " Her zar, kendisinin 10 kat� kadar para kaybettirir veya     | " << endl;
	cout << " |   kazand�r�r. Yani 3: 30 TL kaybettirir, 4: 40 TL kazand�r�r. |" << endl;
	cout << " | " << char(4) << " Oyun 150 zar at���ndan sonra biter. Sonras�nda istenirse    | " << endl;
	cout << " |   yeni oyuna girilebilir.                                     |" << endl;
	cout << " | " << char(4) << " Her zar at���nda, �stte yazan TOPLAM K�R / ZARAR, o zar     | " << endl;
	cout << " |   at���ndan �nceki durumu g�sterir. Zar at�ld�ktan sonraki    |" << endl;
	cout << " |   durum bir sonraki ekranda g�r�l�r.                          |" << endl;
	cout << " | " << char(4) << " Kumar herkes i�in k�t� bir al��kanl�kt�r. Oyun ise          | " << endl;
	cout << " |   programc�n�n sadece yaz�l�m becerilerini geli�tirmek i�in   |" << endl;
	cout << " |   ele ald��� bir projedir.                                    |" << endl;
	cout << " | " << char(4) << " Zar atmak i�in Enter tu�u kullan�l�r. 1000 TL ile oyuna     | " << endl;
	cout << " |   girmek i�in Enter tu�una basabilirsiniz.                    |" << endl;
	cout << "  ---------------------------------------------------------------" << endl;
	cin.get();








	for (zaratisi = 150; zaratisi >= 0; zaratisi--) {
		//cout << "\033c" << endl;
		//cout << string(50, '\n');
		system("cls");
		//clrscr();
		//cout << "Flushing the output stream." << flush;
		//cout << "\033[2J\033[1;1H";

		// Her seferinde yeniden yaz�lacak Zarbut logosu
		cout << " ������   ����   �����   �����   ��  ��  ������" << endl;
		cout << "    ��   ��  ��  ��  ��  ��  ��  ��  ��    ��" << endl;
		cout << "   ��    ������  �����   �����   ��  ��    ��" << endl;
		cout << "  ��     ��  ��  ��  ��  ��  ��  ��  ��    ��" << endl;
		cout << " ������  ��  ��  ��  ��  �����    ����     �� �" << endl;
		cout << " -----------------------------------------------" << endl;

		zar = rand() % 6 + 1;
		cout << " TOPLAM K�R/ZARAR : " << toplampara << endl;
		cout << " KALAN ZAR ATI�I  : " << zaratisi << endl;

		// At�lan Zara G�re K�r/Zarar Hesab�
		if (zar % 2 == 0) {
			kazanilan = zar * 10;
		}
		else {
			kazanilan = (zar * 10) * -1;
		}

		// H�zl� 6 Y�zl� Tek Zar At��� Sim�le Edilerek Olu�turuldu
		// Ancak Oyun ��in Yava� Geldi�inden 2 Kat H�zland�r�ld�
		int slip = 150;
		cout << endl << "  " << char(5) << " Zar sallan�yor";
		Sleep(slip); Sleep(slip);
		Sleep(slip); cout << " "; Sleep(slip); cout << ".";
		Sleep(slip); cout << " "; Sleep(slip); cout << ".";
		Sleep(slip); cout << " "; Sleep(slip); cout << ".";
		Sleep(slip); Sleep(slip); Sleep(slip);
		Sleep(slip); cout << " At�lacak";
		Sleep(slip);
		Sleep(slip); cout << " "; Sleep(slip); cout << ".";
		Sleep(slip); cout << " "; Sleep(slip); cout << "."; Sleep(slip); cout << " ";
		Sleep(slip); Sleep(slip);
		cout << "At�ld�!";
		Sleep(slip);
		cout << endl << endl;


		// Zar G�rselinin G�sterimi, Gelen Zar�n ve K�r/Zarar Durumunun G�sterimi
		if (zar == 1) {
			cout << "  ....... " << endl << " |       |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " |       |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 2) {
			cout << "  ....... " << endl << " |     Q |  Gelen Zar  : " << zar << endl << " |       |  =================" << endl << " | Q     |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 3) {
			cout << "  ....... " << endl << " |     Q |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " | Q     |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 4) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " |       |  =================" << endl << " | Q   Q |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 5) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " | Q   Q |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 6) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " | Q   Q |  =================" << endl << " | Q   Q |  K�r / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else { cout << "ERROR" << endl; exit(1); }

		cout << " " << char(4) << " Yeni zar atmak i�in Enter tu�una bas�n�z" << endl;

		if (toplampara > 0) {
			cout << " " << char(4) << " K�ra ge�tiniz." << endl;
		}

		cout << " -----------------------------------------------" << endl;

		toplampara = toplampara + kazanilan;

		cin.get();

		// Kazan� - Kay�p 
		if (kazanilan <= 0) { karzarar = " kaybetti�iniz "; }
		else { karzarar = " kazand���n�z "; }

		// K�r - Zarar - Ne K�r Ne Zarar
		if (toplampara < 0) { karzarar2 = " zarar "; }
		else if (toplampara > 0) { karzarar2 = " k�r "; }
		else { karzarar2 = " ne k�r, ne zarar "; }

		// Sonu� Metni 1/2
		if (toplampara < 0) { karzarar3 = " zarar�n�z� ��karman�z i�ten bile de�il."; }
		else if (toplampara > 0) { karzarar3 = " k�r�n�z� katlayabilirsiniz."; }
		else { karzarar3 = " belki �ans�n�z daha fazla g�ler."; }

		// Sonu� Metni 2/2
		if (zaratisi == 0) {
			cout << endl << " " << char(5) << " ZARBUT sona erdi. Son att���n�z " << zar << " zar�yla";
			cout << karzarar << kazanilan << " TL sonunda toplam " << toplampara << " TL";
			cout << endl << "  " << karzarar2 << " ile masadan kalk�yorsunuz." << " Yeni oyunda";
			cout << karzarar3 << endl << endl;

			cin.get();

			exit(0);
		}
	}




	return 0;
};
