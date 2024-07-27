#include <iostream>
#include "Publication.h"

using namespace std;

void Publication::storePublications(string itemTitle, string itemPublisher, double itemPrice, int itemYear, PublicationType itemType, int itemStock)
{
    title = itemTitle;

    publisher = itemPublisher;

    price = itemPrice;

    year = itemYear;

    type = itemType;

    stock = itemStock;
}

void Publication::displayInfo()
{
    cout << "TITLE: " << title << '\n';

    cout << "PUBLISHER: " << publisher << '\n';

    cout << "PRICE: " << price << '\n';

    cout << "YEAR: " << year << '\n';

    cout << "TYPE: ";

    if (type == 0)

        cout << "BOOK\n";

    else if (type == 1)

        cout << "MAGAZINE\n";

    else if (type == 3)

        cout << "NEWSPAPER\n";

    else if (type == 4)

        cout << "AUDIO\n";

    else if (type == 5)

        cout << "VIDEO\n";

    else

        cout << "Invalid!\n";

    cout << "STOCK: " << stock << '\n';
}

void Publication::checkOut()
{
    stock -= 1;
}

void Publication::checkIn()
{
    stock += 1;
}

string Publication::getTitle()
{
    return title;
}

int Publication::getStock()
{
    return stock;
}