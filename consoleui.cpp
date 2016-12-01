#include "consoleui.h"

using namespace std;

ConsoleUI::ConsoleUI()
{

}

void ConsoleUI::run()
{
    char input = ' ';

    do
    {
        cout << "============================" << endl;
        cout << "Enter 1 for Unsorted list" << endl;
        cout << "Enter 2 for Sorted list" << endl;
        cout << "Enter 3 to Add entry" << endl;
        cout << "Enter 4 to Search entry" << endl;
        cout << "Enter q to Quit" << endl;
        cout << "============================" << endl;
        cin >> input;


        switch (input)
        {
        case '1':
        {
            clearscreen ();
            cout << "Unsorted list" << endl;
            ServiceLayer s;
            vector<Genius> GVector = s.getGenius();

            for(unsigned int i = 0; i < GVector.size(); i++)
            {
                cout << GVector[i] << endl;
            }
            cout << endl;
            break;
        }
        case '2':
        {
           clearscreen ();
            cout << "Sorted list" << endl;
            ServiceLayer s;
            vector<Genius> GVector = s.sortVector();

            for(unsigned int i = 0; i < GVector.size(); i++)
                {
                    cout << GVector[i] << endl;
                }
            cout << endl;
            break;
        }
        case '3':
        {
            clearscreen ();
            bool saved = false;

            string name;
            char gender;
            int dateOfBirth;
            int dateOfDeath;
            ServiceLayer s;

            cout << "Add entry" << endl;
            cout << "Name: ";

            cin.ignore();
            getline(cin,name,'\n');
            cout << "Gender (m/f): ";
            cin >> gender;
            cout << "Year of birth: ";
            cin >> dateOfBirth;
            cout << "Year of death: ";
            cin >> dateOfDeath;

            saved = s.addEntry(name,gender,dateOfBirth,dateOfDeath);

            if(saved == true)
            {
                cout << "Entry saved" << endl;
            }
            else
            {
                cout << "Entry failed" << endl;
            }
            cout << endl;
            break;
        }
        case '4':
        {
            clearscreen ();
            string name;

            cout << "Search for entry" << endl;
            cin.ignore();
            getline(cin,name,'\n');
            ServiceLayer s;

            try
            {
                Genius g = s.find(name);
                cout << g << endl;
            }
            catch(int)
            {
                cout << "Did not find anything" << endl;
            }
            cout << endl;
            break;
        }
        case 'q':
        {
            clearscreen ();
            break;
        }
        default:
        {
            cout << "Please enter a number between 1-3" << endl;
            cout << "or q to quit the application" << endl;
            break;
        }

    }

    }while(!(input == 'q' || input == 'Q'));

}

void ConsoleUI::clearscreen ()
{
    system("cls");
}


