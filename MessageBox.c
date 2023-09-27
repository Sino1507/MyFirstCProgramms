#include <windows.h>

int main(void) {

    MessageBoxW(
        NULL,
        L"My first MessageBox!",
        L"Hello World!",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );

    return EXIT_SUCCESS;
}
