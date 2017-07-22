#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include "funkcje.h"
using namespace std;

void menu()
{
    cout<<"-----------------------------------"<<endl;
    cout<<"| 1. What is linux?               |"<<endl;
    cout<<"| 2. What is linux distro?        |"<<endl;
    cout<<"| 3. Why does linux matter?       |"<<endl;
    cout<<"| 4. Who created linux?           |"<<endl;
    cout<<"| 5. What distro do I recommend?  |"<<endl;
    cout<<"| 6. Exit                         |"<<endl;
    cout<<"-----------------------------------"<<endl;
}

void choice()
{
    cout<<"Your choice: ";
    int option;
    cin>>option;
    switch(option)
    {
    case 1:
    {
        fstream file;
        string line;
        file.open("what.txt",ios::in);
        if(!file.good())
        {
            cout<<"Couldn't open a file...";
            exit(0);
        }
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
        after();
    }
    case 2:
        {
            fstream file;
            string line;
            file.open("distro.txt",ios::in);
            if(!file.good())
            {
                cout<<"Couldn't open a file...";
                exit(0);
            }
            while(getline(file,line))
            {
                cout<<line<<endl;
            }
            file.close();
            after();
        }
    case 3:
        {
            fstream file;
            string line;
            file.open("matter.txt",ios::in);
            if(!file.good())
            {
                cout<<"Couldn't open a file...";
                exit(0);
            }
            while(getline(file,line))
            {
                cout<<line<<endl;
            }
            file.close();
            after();
        }
    case 4:
        {
            fstream file;
            string line;
            file.open("creator.txt",ios::in);
            if(!file.good())
            {
                cout<<"Couldn't open a file...";
                exit(0);
            }
            while(getline(file,line))
            {
                cout<<line<<endl;
            }
            file.close();
            after();
        }
    case 5:
        {
        fstream file;
        string line;
        file.open("recommend.txt",ios::in);
        if(!file.good())
        {
            cout<<"Couldn't open a file...";
            exit(0);
        }
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
        after();
        }
    case 6: exit(0);
    }
}

void after()
{

    cout<<"What do you want to do? "<<endl;
    cout<<"1. Go to choice menu"<<endl;
    cout<<"2. Exit"<<endl;
    int after_choice;
    cout<<"Your choice: ";
    cin>>after_choice;
    if (after_choice==1)
    {
        menu();
        choice();
    }
    else if (after_choice==2)
    {
        exit(0);
    }
    else
    {
        cout<<"This is not a option!"<<endl;
        Sleep(1000);
        after();
    }
}
