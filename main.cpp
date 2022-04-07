#include <iostream>
#include <Windows.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    int data[] = {3840, 1080, 0};

    char* _;
    for (int i = 1; i < argc; i++)
    {
        data[i - 1] = strtol(argv[i], &_, 10);
    }

    HWND hWnd = FindWindowA(NULL, "LEGO Star Wars - The Skywalker Saga");
    
    SetWindowPos(hWnd, NULL, data[2], 0, data[0], data[1], 0);

    return 0;
}
