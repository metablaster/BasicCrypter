#include <Windows.h>

int main()
{	
	char* title = "If you see this...";
	char* message = "...the crypter works!";

	MessageBox(NULL, message, title, MB_OK | MB_ICONEXCLAMATION );
	return 0;
}