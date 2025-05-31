#include <Windows.h>

INT main() {
	HWND hWindow = FindWindow("Shell_TrayWnd"), NULL); // Search for the window
        
        if (hWindow) {
	    ShowWindow(hWindow, SW_HIDE); // Hide taskbar, can be replaced with SW_MAX, SW_MINIMIZE etc.
        }
	return 0;
}