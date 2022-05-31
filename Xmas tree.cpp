#include <iostream>
#include <windows.h>

using namespace std;

void xmas_tree(int lines) {

    int stars = 1, spaces = lines - 1, spaces_for_phrase;

    if (lines < 7 || lines > 30) 
    {
        cout << "\n !Ошибка! Значение меньше 7 или больше 30!" << endl;

        cout << "\n Введите число> ";

        cin >> lines;

        xmas_tree(lines);
    } 
    else 
    {
        cout << endl;

        for (int i = 0; i < lines; ++i) 
        {
            cout << " ";

            for (int k = 0; k < spaces; ++k) cout << " ";

            for (int l = 0; l < stars; ++l) 
            {
                cout << "*";

                spaces_for_phrase = l;
            }

            --spaces;

            stars += 2;

            cout << endl;

            Sleep(500);
        }

        spaces_for_phrase = (spaces_for_phrase - 13) / 2;

        for (int i = 0; i <= spaces_for_phrase; ++i) cout << " ";

        cout << "С Новым Годом!" << "\n\n";

        Sleep(500);
    }
}

int main() 
{
    setlocale(LC_CTYPE, "rus");

    system("color 02");

    int user_lines;

    cout << " Введите число (от 7 до 30 включительно)> ";

    cin >> user_lines;

    xmas_tree(user_lines);

    cout << "\n\n Что произошло?" << "\n\n Была построена новогодняя ель с введенным количеством строк\n\n\n\n ";

    system("pause");
}
