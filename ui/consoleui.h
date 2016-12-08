#ifndef CONSOLEUI_H
#define CONSOLEUI_H
#include <iostream>
#include <fstream>
#include <vector>
#include <services/servicelayer.h>
#include <services/geniusservice.h>
#include <services/computerservice.h>
#include <validation/computervalidation.h>
#include <validation/geniusvalidation.h>
#include <stdlib.h>
#include <cstdio>
#include <string>

class ConsoleUI
{
public:
    ConsoleUI();
    void run();
private:
    ServiceLayer _service;
    GeniusService _geniusservice;
    ComputerService _computerservice;
    void displayUnsortedList();
    void displaySortedList();
    void addNewEntryToDataSet();
    void searchForEntries();
    void deleteAnEntry();
    void printGVector(vector<GeniusModel> GVector);
    void printCVector(vector<ComputerModel> CVector);
    void printGeniusSort();
    void printComputerSort();
    void printError();
<<<<<<< HEAD
    void smile();
=======
    void printMenu();
    void clearscreen ();
>>>>>>> bf860eee1dedebea0363a183d4fabd4868a25b90
};

#endif //CONSOLEUI_H
