#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // header file to use time function

using namespace std;

void wishme() // function to wish user according to time
{
    // current date and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Sir" << endl;
        string phrase = "Good Morning Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Sir" << endl;
        string phrase = "Good Afternoon Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening Sir" << endl;
        string phrase = "Good Evening Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is " << endl
         << dt << endl;
}

int main()
{
    system("cls");

    cout << "\t\t\t======================= WELCOME ====================================" << endl;
    cout << "\t\t\t======================= I'M A VIRTUAL ASSISTANT ====================" << endl;
    cout << "\t\t\t======================= I'M HERE TO HELP YOU =======================" << endl
         << endl;

    char password[20]; // to take password
    char ch[100];      // to take the command from user

    do
    {
        cout << "===========================" << endl;
        cout << " ENTER YOUR PASSWORD " << endl;
        cout << "===========================" << endl
             << endl;

        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (strcmp(password, "pass1234") == 0)
        {
            cout << "Correct Password " << endl;
            wishme();
            do
            {
                cout << "\n ============================================== \n"
                     << endl;
                cout << endl
                     << "How can I help you Sir..." << endl
                     << endl;

                string phrase = "How can I help you Sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "Your query ======>";
                gets(ch);
                cout << endl;
                cout << "Here is the result for your query ====>";

                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hello") == 0 || strcmp(ch, "hey") == 0)
                {
                    cout << "Hello Sir...." << endl;
                    string phrase = "Hello Sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0)
                {
                    cout << "I'm a Virtual Assistant created by master Deepjoy !!!" << endl;
                    string phrase = "I'm a Virtual Assistant created by master Deepjoy";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0)
                {
                    cout << "I'm good sir, tell me how I can help you !!!" << endl;
                    string phrase = "I'm good sir, tell me how I can help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "date") == 0 || strcmp(ch, "time") == 0)
                {
                    string phrase = "Showing Date and Time Sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    datetime();
                }

                else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0)
                {
                    cout << "Good Bye sir,have a nice day!!!" << endl;
                    string phrase = "Good Bye sir,have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if (strcmp(ch, "open notepad") == 0)
                {
                    cout << "opening notepad......" << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("notepad.exe");
                }

                else if (strcmp(ch, "open google") == 0)
                {
                    cout << "opening google......" << endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if (strcmp(ch, "open youtube") == 0)
                {
                    cout << "opening youtube......" << endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if (strcmp(ch, "open instagram") == 0)
                {
                    cout << "opening instagram......" << endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                else if (strcmp(ch, "open twitter") == 0)
                {
                    cout << "opening twitter......" << endl;
                    string phrase = "opening twitter";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.twitter.com");
                }

                else if (strcmp(ch, "open github") == 0)
                {
                    cout << "opening github......" << endl;
                    string phrase = "opening github";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.github.com");
                }

                else if (strcmp(ch, "open linkedin") == 0)
                {
                    cout << "opening linkdein......" << endl;
                    string phrase = "opening linkdein";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.linkedin.com");
                }

                else if (strcmp(ch, "open Microsoft Word") == 0)
                {
                    cout << "opening Microsoft Word" << endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (strcmp(ch, "open Microsoft Excel") == 0)
                {
                    cout << "opening Microsoft Excel" << endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (strcmp(ch, "open Microsoft Powerpoint") == 0)
                {
                    cout << "opening Microsoft Powerpoint" << endl;
                    string phrase = "opening Microsoft Powerpoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (strcmp(ch, "open Microsoft Paint") == 0)
                {
                    cout << "opening Microsoft Paint" << endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else
                {
                    cout << "Sorry could not understand your query please try again" << endl;
                    string phrase = "Sorry could not understand your query please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            cout << "Incorrect Password " << endl;
            string phrase = "Incorrect Password please try again";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);

    return 0;
}