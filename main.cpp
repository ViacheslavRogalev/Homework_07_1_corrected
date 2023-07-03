#include <iostream>
#include <windows.h>

#define MODE 1

#if !defined MODE
#error "MODE �� ����������, ���������� ���������� ���������� ��������� MODE"
#endif

int add(int x, int y)
{
    return x + y;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

 #ifdef MODE

   #if MODE == 0

     std::cout << "������� � ������ ����������" << std::endl;

   #elif MODE == 1

     std::cout << "MODE ����������" << std::endl;
     std::cout << "������� � ������ ������" << std::endl;

     int num1;
     int num2;
     std::cout << "������� ����� 1: ";
     std::cin >> num1;
     std::cout << "������� ����� 2: ";
     std::cin >> num2;

     std::cout << "��������� ��������: " << add(num1, num2) << std::endl;

   #else MODE

     std::cout << "����������� �����. ���������� ������" << std::endl;

   #endif

 #endif
}