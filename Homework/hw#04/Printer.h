#pragma once
#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>
#include <string>

using namespace std;

class Printer {
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
protected:
    Printer(string mo = "", string me = "", int a = 0);
    bool isValidPrint(int pages);
    void print(int pages);
    void showPrinter();
};

class InkJetPrinter : public Printer {
    int availableInk;
public:
    InkJetPrinter(string mo = "", string me = "", int a = 0, int i = 0);
    bool isValidInkJetPrint(int pages);
    void printInkJet(int pages);
    void showInkJetPrinter();
};

class LaserPrinter : public Printer {
    int availableToner;
public:
    LaserPrinter(string mo = "", string me = "", int a = 0, int t = 0);
    bool isValidLaserPrint(int pages);
    void printLaser(int pages);
    void showLaserPrinter();
};

#endif 
