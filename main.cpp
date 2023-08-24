#include <iostream>

#include "Includes/2direclist.h"
int main() {

    List<int>* liste = new List<int>;
    liste->Append(12);liste->Append(12);liste->Append(12);liste->Append(12);liste->Append(12);liste->Append(12);
    liste->Remove();
    liste->Remove();
    std:cout << *liste << endl;

}
