#include <iostream>
using namespace std;

int main()
{
    string text;

    while(true)
    {
        cout << "\nEnter String: ";
        cin >> text;

        if(text == "exit")
        {
            cout << "Program Closed";
            break;
        }

        int state = 0;

        for(int i = 0; i < text.length(); i++)
        {
            char ch = text[i];

            if(state == 0)
            {
                if(ch == 'a')
                {
                    state = 1;
                }
                else
                {
                    state = -1;
                }
            }

            else if(state == 1)
            {
                if(ch == 'a')
                {
                    state = 1;
                }
                else if(ch == 'b')
                {
                    state = 2;
                }
                else
                {
                    state = -1;
                }
            }

            else if(state == 2)
            {
                if(ch == 'b')
                {
                    state = 2;
                }
                else if(ch == 'a')
                {
                    state = 3;
                }
                else
                {
                    state = -1;
                }
            }

            else if(state == 3)
            {
                if(ch == 'a')
                {
                    state = 3;
                }
                else if(ch == 'b')
                {
                    state = 4;
                }
                else
                {
                    state = -1;
                }
            }

            else if(state == 4)
            {
                if(ch == 'b')
                {
                    state = 4;
                }
                else if(ch == 'a')
                {
                    state = 3;
                }
                else
                {
                    state = -1;
                }
            }

            if(state == -1)
            {
                break;
            }
        }

        if(state == 1 || state == 2 || state == 3 || state == 4)
        {
            cout << "Accepted";
        }
        else
        {
            cout << "Rejected";
        }
    }

    return 0;
}


