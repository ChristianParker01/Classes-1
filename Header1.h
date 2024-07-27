#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
using namespace std;

// Define an enumeration for the different publication types
enum PublicationType { BOOK, MAGAZINE, NEWSPAPER, AUDIO, VIDEO };

//Publication class
class Publication {
private:
    //Member variables
    string title;
    string publisher;
    double price;
    int year;
    PublicationType type;
    int stock;
public:
    //Store the parameters in the Publication member variables.
    void storePublication(string itemTitle, string itemPublisher, double itemPrice, int itemYear, PublicationType itemType, int itemStock);
    //Display the contents of the Publication member variables.
    void displayInfo();
    //Subtract 1 from stock, testing that the stock is not zero.
    void checkOut();
    //Add 1 to the stock.
    void checkIn();
    //Return the value in the title member variable.
    string getTitle();
    //Return the value in the stock member variable.
    int getStock();
};

#endif