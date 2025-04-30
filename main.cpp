#include <cstdlib>
#include <stdio.h>
#include<iostream>     //Консольный ввод/вывод
#include<string.h>    // Операции со строками
#include<string>
#include<fstream>
#include <chrono>
#include <thread>
using namespace std;

void PlaySound(){
    system("afplay 1.mp3");
}
void PlaySound1(){
	system("afplay 2.mp3");
}
void PlaySound2(){
	system("afplay 3.mp3");
}
void labrador() {
	string s; 
	ifstream file("labrador.txt");
	while (getline(file, s))
	{
		cout << s << endl; 
	}
	file.close();
}
void Shiba() {
	string a; 
	ifstream file("Shiba-inu.txt");
	while (getline(file, a))
	{
		cout << a << endl; 
	}
	file.close(); 
}

void Ovcharka() {
	string b; 
	ifstream file("Ovcharka.txt");
	while (getline(file, b))
	{
		cout << b << endl;  
	}
	file.close(); 
}

int vibor;

int main(){
    while (true) {
        cout << "Здравствуйте! Программа данные о животном" << endl;
        cout << "Нажмите 1 для Шиба-ину" << endl;
        cout << "Нажмите 2 для Лабрадор" << endl;
        cout << "Нажмите 3 для Овчарка" << endl;
        cout << "Нажмите 4 для выхода" << endl;
        cin >> vibor;

        if (vibor < 1 || vibor > 4) {
            cout << "Ошибка: введите число от 1 до 4." << endl;
            continue; // возвращаемся к началу цикла
        }

        switch(vibor) {
            case 1:
            	Shiba();
        	PlaySound();
            break;
            case 2:
            	labrador();
        	PlaySound1();
            break;
            case 3:
            		Ovcharka();
                PlaySound2();
            break;
            case 4:
                cout << "Выход из программы." << endl;
            return 0;
        }
    }
}