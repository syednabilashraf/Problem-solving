#include <iostream>

using namespace std;

int main()
{
    int hotel_rooms[10] = {0};

    int n = 0;
    cin >> n;

    string events;
    cin >> events;

    for (int i = 0; i < n; i++)
    {
        if (events[i] == 'L')
        {
            for (int index = 0; index < 10; index++)
            {
                if (hotel_rooms[index] != 1)
                {
                    hotel_rooms[index] = 1;
                    break;
                }
            }
        }
        else if (events[i] == 'R')
        {
            for (int index = 9; index >= 0; index--)
            {
                if (hotel_rooms[index] != 1)
                {
                    hotel_rooms[index] = 1;
                    break;
                }
            }
        }
        else
        {
            int room_number = int(events[i]) - '0';
            hotel_rooms[room_number] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << hotel_rooms[i];
    }
    
    cout << endl;
}