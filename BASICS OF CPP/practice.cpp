#include <iostream>
#include <string>
#include "qrcodegen.hpp"  // Ensure you have this library

using namespace std;
using namespace qrcodegen;

// Function to display QR Code
void displayQRCode(const string& data) {
    const QrCode qr = QrCode::encodeText(data.c_str(), QrCode::Ecc::LOW);
    cout << qr.toString() << endl; // Display the QR code in the console
}

// Function to simulate accessing user contact information
void accessContactInfo() {
    string name = "John Doe";
    string contact = "+1234567890";

    cout << "\n--- Accessing Contact Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Contact: " << contact << endl;
}

int main() {
    string qrData = "Name: John Doe\nContact: +1234567890"; // QR code data

    cout << "Generating QR Code...\n";
    displayQRCode(qrData);

    // Simulate access to contact information
    cout << "\nAccessing contact information based on QR code scan...\n";
    accessContactInfo();

    return 0;
}
