#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <fstream>
using namespace std;

class User {
public:
    string username;
    string password;

    void tampilUser() {
        cout << "Username: " << username << endl;
    }
};

class Hotel {
public:
    string namaKamar;
    int harga;
    bool tersedia;

    void tampilHotel() {
        cout << "Kamar: " << namaKamar << endl;
        cout << "Harga: " << harga << endl;
        cout << "Status: " << (tersedia ? "Tersedia" : "Tidak tersedia") << endl;
    }
};

class Booking {
public:
    string namaUser;
    string kamarDipilih;
    int lamaInap;
    int totalHarga;

    void tampilBooking() {
        cout << "User: " << namaUser << endl;
        cout << "Kamar: " << kamarDipilih << endl;
        cout << "Lama Inap: " << lamaInap << " hari" << endl;
        cout << "Total: " << totalHarga << endl;
    }
};

int main() {
    cout << "ngeooongg!" << endl;
    return 0;
}
