#include <iostream>
#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean Test(12);
    Test.clear();
    cout << Test[1] << endl;
    Test.bitOn(1);
    Test.bitOn(19);
    cout << Test[1] << endl;

    cout << "Program Done." << endl;
    return EXIT_SUCCESS;
}

