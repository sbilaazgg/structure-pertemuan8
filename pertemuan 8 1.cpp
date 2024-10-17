#include <iostream>
#include <string>

using namespace std;

struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

// Function to determine zodiac sign based on birth date
string getZodiacSign(int day, int month) {
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "AQUARIUS";
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "PISCES";
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "ARIES";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "TAURUS";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "GEMINI";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "CANCER";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "LEO";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "VIRGO";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "LIBRA";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "SCORPIO";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "SAGITTARIUS";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "CAPRICORN";
    return "UNKNOWN";
}

int main() {
    TanggalLahir birthDate;
    cout << "Masukkan tanggal lahir Anda (dd-mm-yyyy): ";
    scanf("%d-%d-%d", &birthDate.tanggal, &birthDate.bulan, &birthDate.tahun);

    string zodiacSign = getZodiacSign(birthDate.tanggal, birthDate.bulan);

    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: " << birthDate.tanggal << "-" << birthDate.bulan << "-" << birthDate.tahun << endl;
    cout << "Zodiak Anda adalah: " << zodiacSign << endl;

    return 0;
}
