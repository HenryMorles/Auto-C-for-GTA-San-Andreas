#include <windows.h>
#include <iostream>
#include <tchar.h>
#include <cmath>    

#define VK_C 323

int main() {
	int x = 300, y = 300;
	int step = 10;

	while (true) {
		if (GetAsyncKeyState((unsigned short)'2') & 0x57) {
			bool Over = false;
			int score = 0;
			while (!Over) {

				std::cout << "Works !";
				if (score % 7 == 0) {
					Sleep(33);
					keybd_event(0x51, 0x51, KEYEVENTF_EXTENDEDKEY | 0, 0);
					Sleep(33);
					keybd_event(0x51, 0x51, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
					Sleep(33);
					keybd_event(0x45, 0x45, KEYEVENTF_EXTENDEDKEY | 0, 0);
					Sleep(33);
					keybd_event(0x45, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				}
				Sleep(10);

				keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | 0, 0);
				Sleep(2);

				keybd_event(0x30, 0x30, KEYEVENTF_EXTENDEDKEY | 0, 0);
				Sleep(33);
				keybd_event(0x30, 0x30, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				Sleep(33);
				keybd_event(67, 67, KEYEVENTF_EXTENDEDKEY | 0, 0);
				Sleep(33);
				keybd_event(67, 67, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				if (GetAsyncKeyState((unsigned short)'2') & 0x57) {
					Over = true;
				}
				/*for (int i = 0; i < 10; i++) {
					Sleep(3);
					SetCursorPos(x -= step, y);
				}*/
				/*POINT p;
				GetCursorPos(&p);
				double mouseX = p.x;
				double mouseY = p.y;
				SetCursorPos(100, 400);
				*/
				++score;
			}
		}
		if (GetAsyncKeyState((unsigned short)'R') & 0x57) {
			int velocity_of_pressing = 33;
			keybd_event(VK_SHIFT, VK_SHIFT, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			//K
			keybd_event(0x4B, 0x4B, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x4B, 0x4B, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			/////////////////////
			Sleep(velocity_of_pressing);
			//J
			keybd_event(0x4A, 0x4A, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x4A, 0x4A, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			/////////////////////
			Sleep(velocity_of_pressing);
			//K
			keybd_event(0x4B, 0x4B, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x4B, 0x4B, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			/////////////////////
			Sleep(velocity_of_pressing);
			//S
			keybd_event(0x53, 0x53, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x53, 0x53, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			////////////////////
			Sleep(velocity_of_pressing);
			//Z
			keybd_event(0x5A, 0x5A, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x5A, 0x5A, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			///////////////////
			Sleep(velocity_of_pressing);
			//P
			keybd_event(0x50, 0x50, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x50, 0x50, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			///////////////////
			Sleep(velocity_of_pressing);
			//J
			keybd_event(0x4A, 0x4A, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(velocity_of_pressing);
			keybd_event(0x4A, 0x4A, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			Sleep(velocity_of_pressing);
			keybd_event(VK_SHIFT, VK_SHIFT, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);

			/*keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(100);

			keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
			keybd_event(VK_LCONTROL, VK_LCONTROL, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);

			keybd_event(VK_CAPITAL, VK_CAPITAL, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(100);

			keybd_event(VK_LCONTROL, VK_LCONTROL, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(100);

			keybd_event(VK_C, VK_C, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);

			keybd_event(VK_C, VK_C, KEYEVENTF_EXTENDEDKEY | 0, 0);
			Sleep(100);
			*/
		}
	}
	return 0;
}