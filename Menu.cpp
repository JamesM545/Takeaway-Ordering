#include <iostream>
#include <fstream>
#include "Menu.h"
#include <string>
using namespace std;

void CreateMenu() {
    ifstream file("menu.csv");
    string item;

    if (!file.is_open())
    {
        std::cout << "An error occured: Failed to open file" << endl;
    }

    do {
        while (file.is_open()) {
            getline(file, item, ',');

            switch (item[0]) {
            case 'a':
            {
                for (int i = 0; i < 20; i++){
                    getline(file, item, ',');
                    cout << item << endl;
                }
            }
            case 'm':
            {
                for (int i = 0; i < 20; i++) {
                    getline(file, item, ',');
                    cout << item << endl;
                }
            }
            case 'b':
                for (int i = 0; i < 40; i++) {
                    getline(file, item, ',');
                    cout << item << endl;
                }
                break;
            }
        }
    }
    while (!file.eof());
    file.close();
}