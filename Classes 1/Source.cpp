// Christian Parker
// CIS 1202 101
// July 27, 2024


#include <iostream>
#include "Publication.h"

using namespace std;

void getPublicationInfo(Publication&);

int main()
{
    Publication pub;

    getPublicationInfo(pub);

    cout << "TITLE: " << pub.getTitle() << '\n';

    pub.checkOut();

    cout << "STOCK: " << pub.getStock() << '\n';

    pub.checkIn();

    cout << "STOCK: " << pub.getStock() << '\n';

    return 0;
}

void getPublicationInfo(Publication& pub)
{
    string title, publisher;

    double price;

    int year, stock;

    PublicationType type;

    cout << "Enter title: ";

    getline(cin, title);

    cout << "Enter publisher: ";

    getline(cin, publisher);

    int typeCode;

    cout << "\nSelect code for type: \n";

    cout << "1.    BOOK\n";

    cout << "2.    MAGAZINE\n";

    cout << "3.    NEWSPAPER\n";

    cout << "4.    AUDIO\n";

    cout << "5.    VIDEO\n";

    cout << "Enter code: ";

    cin >> typeCode;

    type = static_cast<PublicationType>(typeCode - 1);

    cout << "\nEnter price: ";

    cin >> price;

    cout << "\nEnter year: ";

    cin >> year;

    cout << "\nEnter stock: ";

    cin >> stock;

    pub.storePublications(title, publisher, price, year, type, stock);
}