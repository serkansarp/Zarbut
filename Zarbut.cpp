#include <iostream>
#include <clocale>
#include <ctime>
#include <string>
#include <thread>		//	required for sleep
#include <chrono>		//	+ required for sleep

using namespace std;

// ZARBUT:

int main() {
	setlocale(LC_ALL, "Turkish");
	int zar, zaratisi = 150, toplampara = -1000, kazanilan = NULL; string karzarar = "s", karzarar2 = "s2", karzarar3 = "s3";
	srand(time(NULL));

	// Kapak Logo ve Metin
	cout << endl << endl << "  ---------------------------------------------------------------" << endl;
	cout << " |               ¶¶¶¶¶¶   ¶¶¶¶   ¶¶¶¶¶   ¶¶¶¶¶   ¶¶  ¶¶  ¶¶¶¶¶¶  |" << endl;
	cout << " |                  ¶¶   ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶    ¶¶    |" << endl;
	cout << " |                 ¶¶    ¶¶¶¶¶¶  ¶¶¶¶¶   ¶¶¶¶¶   ¶¶  ¶¶    ¶¶    |" << endl;
	cout << " |                ¶¶     ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶    ¶¶    |" << endl;
	cout << " | v.1.2         ¶¶¶¶¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶¶¶¶    ¶¶¶¶     ¶¶ ©  |" << endl;
	cout << " |---------------------------------------------------------------|" << endl;
	cout << " |                                      Serkan SARP - 2022 Mayýs |" << endl;
	cout << " |---------------------------------------------------------------|" << endl;
	cout << " | " << char(4) << " Oyun kurallarý basittir. Tek zarla oynanýr.                 | " << endl;
	cout << " | " << char(4) << " Masaya oturmak 1000 TL'dir. -1000 zarar ile baþlanýr, amaç  |" << endl;
	cout << " |   bu parayý kurtarýp, olabildiðince de kazanmaktýr.           |" << endl;
	cout << " | " << char(4) << " Tek zarlar kaybettirir, çift zarlar kazandýrýr.             | " << endl;
	cout << " | " << char(4) << " Her zar, kendisinin 10 katý kadar para kaybettirir veya     | " << endl;
	cout << " |   kazandýrýr. Yani 3: 30 TL kaybettirir, 4: 40 TL kazandýrýr. |" << endl;
	cout << " | " << char(4) << " Oyun 150 zar atýþýndan sonra biter. Sonrasýnda istenirse    | " << endl;
	cout << " |   yeni oyuna girilebilir.                                     |" << endl;
	cout << " | " << char(4) << " Her zar atýþýnda, üstte yazan TOPLAM KÂR / ZARAR, o zar     | " << endl;
	cout << " |   atýþýndan önceki durumu gösterir. Zar atýldýktan sonraki    |" << endl;
	cout << " |   durum bir sonraki ekranda görülür.                          |" << endl;
	cout << " | " << char(4) << " Kumar herkes için kötü bir alýþkanlýktýr. Oyun ise          | " << endl;
	cout << " |   programcýnýn sadece yazýlým becerilerini geliþtirmek için   |" << endl;
	cout << " |   ele aldýðý bir projedir.                                    |" << endl;
	cout << " | " << char(4) << " Zar atmak için Enter tuþu kullanýlýr. 1000 TL ile oyuna     | " << endl;
	cout << " |   girmek için Enter tuþuna basabilirsiniz.                    |" << endl;
	cout << "  ---------------------------------------------------------------" << endl;
	cout << "\033[2J\033[1;1H";








	for (zaratisi = 150; zaratisi >= 0; zaratisi--) {
		//cout << "\033c" << endl;
		//cout << string(50, '\n');
		cout << "\033[2J\033[1;1H";
		//clrscr();
		//cout << "Flushing the output stream." << flush;
		//cout << "\033[2J\033[1;1H";

		// Her seferinde yeniden yazýlacak Zarbut logosu
		cout << " ¶¶¶¶¶¶   ¶¶¶¶   ¶¶¶¶¶   ¶¶¶¶¶   ¶¶  ¶¶  ¶¶¶¶¶¶" << endl;
		cout << "    ¶¶   ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶    ¶¶" << endl;
		cout << "   ¶¶    ¶¶¶¶¶¶  ¶¶¶¶¶   ¶¶¶¶¶   ¶¶  ¶¶    ¶¶" << endl;
		cout << "  ¶¶     ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶    ¶¶" << endl;
		cout << " ¶¶¶¶¶¶  ¶¶  ¶¶  ¶¶  ¶¶  ¶¶¶¶¶    ¶¶¶¶     ¶¶ ©" << endl;
		cout << " -----------------------------------------------" << endl;

		zar = rand() % 6 + 1;
		cout << " TOPLAM KÂR/ZARAR : " << toplampara << endl;
		cout << " KALAN ZAR ATIÞI  : " << zaratisi << endl;

		// Atýlan Zara Göre Kâr/Zarar Hesabý
		if (zar % 2 == 0) {
			kazanilan = zar * 10;
		}
		else {
			kazanilan = (zar * 10) * -1;
		}

		// Hýzlý 6 Yüzlü Tek Zar Atýþý Simüle Edilerek Oluþturuldu
		// Ancak Oyun Ýçin Yavaþ Geldiðinden 2 Kat Hýzlandýrýldý
		int slip = 150;
		cout << endl << "  " << char(5) << " Zar sallanýyor";
		this_thread::sleep_for(chrono::milliseconds(slip*2));
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " "; this_thread::sleep_for(chrono::milliseconds(slip)); cout << ".";
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " "; this_thread::sleep_for(chrono::milliseconds(slip)); cout << ".";
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " "; this_thread::sleep_for(chrono::milliseconds(slip)); cout << ".";
		this_thread::sleep_for(chrono::milliseconds(slip*3));
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " Atýlacak";
		this_thread::sleep_for(chrono::milliseconds(slip));
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " "; this_thread::sleep_for(chrono::milliseconds(slip)); cout << ".";
		this_thread::sleep_for(chrono::milliseconds(slip)); cout << " "; this_thread::sleep_for(chrono::milliseconds(slip)); cout << "."; this_thread::sleep_for(chrono::milliseconds(slip)); cout << " ";
		this_thread::sleep_for(chrono::milliseconds(slip*2));
		cout << "Atýldý!";
		this_thread::sleep_for(chrono::milliseconds(slip));
		cout << endl << endl;


		// Zar Görselinin Gösterimi, Gelen Zarýn ve Kâr/Zarar Durumunun Gösterimi
		if (zar == 1) {
			cout << "  ....... " << endl << " |       |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " |       |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 2) {
			cout << "  ....... " << endl << " |     Q |  Gelen Zar  : " << zar << endl << " |       |  =================" << endl << " | Q     |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 3) {
			cout << "  ....... " << endl << " |     Q |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " | Q     |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 4) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " |       |  =================" << endl << " | Q   Q |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 5) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " |   Q   |  =================" << endl << " | Q   Q |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else if (zar == 6) {
			cout << "  ....... " << endl << " | Q   Q |  Gelen Zar  : " << zar << endl << " | Q   Q |  =================" << endl << " | Q   Q |  Kâr / Zarar: " << kazanilan << endl << "  ....... " << endl;
		}
		else { cout << "ERROR" << endl; exit(1); }

		cout << " " << char(4) << " Yeni zar atmak için Enter tuþuna basýnýz" << endl;

		if (toplampara > 0) {
			cout << " " << char(4) << " Kâra geçtiniz." << endl;
		}

		cout << " -----------------------------------------------" << endl;

		toplampara = toplampara + kazanilan;

		cin.get();

		// Kazanç - Kayýp 
		if (kazanilan <= 0) { karzarar = " kaybettiðiniz "; }
		else { karzarar = " kazandýðýnýz "; }

		// Kâr - Zarar - Ne Kâr Ne Zarar
		if (toplampara < 0) { karzarar2 = " zarar "; }
		else if (toplampara > 0) { karzarar2 = " kâr "; }
		else { karzarar2 = " ne kâr, ne zarar "; }

		// Sonuç Metni 1/2
		if (toplampara < 0) { karzarar3 = " zararýnýzý çýkarmanýz iþten bile deðil."; }
		else if (toplampara > 0) { karzarar3 = " kârýnýzý katlayabilirsiniz."; }
		else { karzarar3 = " belki þansýnýz daha fazla güler."; }

		// Sonuç Metni 2/2
		if (zaratisi == 0) {
			cout << endl << " " << char(5) << " ZARBUT sona erdi. Son attýðýnýz " << zar << " zarýyla";
			cout << karzarar << kazanilan << " TL sonunda toplam " << toplampara << " TL";
			cout << endl << "  " << karzarar2 << " ile masadan kalkýyorsunuz." << " Yeni oyunda";
			cout << karzarar3 << endl << endl;

			cin.get();

			exit(0);
		}
	}




	return 0;
};
