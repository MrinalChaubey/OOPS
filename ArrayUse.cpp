#include<bits/stdc++.h>
using namespace std;

class Shop {
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void Shop::setprice() {
    cout << "Enter item Number for item " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price for your Item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop::displayprice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The price of item with Itemid " << itemid[i]
             << " is " << itemprice[i] << endl;
    }
}

int main() {
    Shop s;
    s.initcounter();

    for (int i = 0; i < 5; i++) {
        s.setprice();
    }

    s.displayprice();
}
