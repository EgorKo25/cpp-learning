#include "iostream"

int main(int argc, char **argv[])
{
    /* 1. Base data about c++ */
    setlocale(LC_ALL, "Rus"); // For correct Ru symbols display
    // /b - Remove the latest displayed symbol
    // /t - tab symbols
    // /n - line break

    // Data types
    // float - 4b
    // double - 8b
    /* 
    1 b = 8 bit
    int - 4b
    short - 2b
    long - 4b
    char - 1b
    bool - 1b 
    */

    int a;                     // Announcement
    a = 1;                     // Initialization
    double b = 2.45, c = 1.94; // Multiple Ad and Initialization

    const char NEW_LINE = '\n'; // Comand format const [type] [NAME] = [value];
    // The name of the constant is always written in large letters.

    // Standard output input streams

    std::cout << "This is a standard output stream!" << std::endl;
    // cin - Standard input stream
    // Ex:
    std::cout << "Enter a number: ";
    std::cin >> a;

    return 0;
}
