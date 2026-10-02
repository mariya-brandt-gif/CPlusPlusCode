#include <iostream>
using namespace std;

struct Date
{
	int day;  //4
	int month;//4
	int year; //4
	char month_name[15];//15   27
};
struct Worker
{
	char name[20];
	char surname[20];
	char position[20];
	char department[20];
	float salary;  //84 + 52  136
	Date birthdate;
	Date hiredate;
};


void ShowWorker(Worker& worker)
{
	cout << "\nName : " << worker.name << endl;
	cout << "Surname : " << worker.surname << endl;
	cout << "Position : " << worker.position << endl;
	cout << "Department : " << worker.department << endl;
	cout << "Salary : " << worker.salary << endl;

	cout << "Birthdate : " << worker.birthdate.day <<
		"/" << worker.birthdate.month << "/" << worker.birthdate.year << endl;

	cout << "HireDAte : " << worker.hiredate.day <<
		"/" << worker.hiredate.month << "/" << worker.hiredate.year << endl << endl;

}
Worker Input(Worker worker)
{
	cout << "Enter name : "; cin >> worker.name;
	cout << "Enter surname : "; cin >> worker.surname;
	cout << "Enter position : "; cin >> worker.position;
	cout << "Enter department : "; cin >> worker.department;
	cout << "Enter salary : "; cin >> worker.salary;

	cout << "Birthday day "; cin >> worker.birthdate.day;
	cout << "Birthday month "; cin >> worker.birthdate.month;
	cout << "Birthday year "; cin >> worker.birthdate.year;

	cout << "Hiredate day "; cin >> worker.hiredate.day;
	cout << "Hiredate month "; cin >> worker.hiredate.month;
	cout << "Hiredate year "; cin >> worker.hiredate.year;
	return worker;
}

//Exercice 1
struct WashingMachine
{
	char company[20];
	char color[20];
	float width;
	float length;
	float heigth;
	float power;
	int spin_speed;
	int heating_temperature;
};

void ShowWashingMachine(WashingMachine& washing_machine)
{
	cout << "----- Washing Machine -----" << endl;
	cout << " Company: " << washing_machine.company << endl;
	cout << " Color: " << washing_machine.color << endl;
	cout << " Width: " << washing_machine.width << endl;
	cout << " Length: " << washing_machine.length << endl;
	cout << " Heigth: " << washing_machine.heigth << endl;
	cout << " Power: " << washing_machine.power << endl;
	cout << " Spin speed: " << washing_machine.spin_speed << endl;
	cout << " Heating temperature: " << washing_machine.heating_temperature << endl;
}

WashingMachine InputWashingMachine(WashingMachine washing_machine)
{
	cout << "Enter company: "; cin >> washing_machine.company;
	cout << "Enter color: "; cin >> washing_machine.color;
	cout << "Enter width: "; cin >> washing_machine.width;
	cout << "Enter length: "; cin >> washing_machine.length;
	cout << "Enter heigth: "; cin >> washing_machine.heigth;
	cout << "Enter power: "; cin >> washing_machine.power;
	cout << "Enter spin speed: "; cin >> washing_machine.spin_speed;
	cout << "Enter heating temperature: "; cin >> washing_machine.heating_temperature;
	return washing_machine;
}
//Exercice 2
struct Iron
{
	char company[20];
	char model[20];
	char color[20];
	int min_temp;
	int max_temp;
	bool steam;
	float power;
};

void ShowIron(Iron& iron)
{
	cout << "----- Iron -----" << endl;
	cout << " Company: " << iron.company << endl;
	cout << " Model: " << iron.model << endl;
	cout << " Color: " <<iron.color << endl;
	cout << " Minimum temperature: " << iron.min_temp << endl;
	cout << " Maximum temperature: " << iron.max_temp << endl;
	cout << " Steam: 1 -> yes, 0 -> no: " << iron.steam << endl;
	cout << " Power: " << iron.power << endl;
}

Iron InputIron(Iron iron)
{
	cout << " Company: "; cin >> iron.company;
	cout << " Model: "; cin >> iron.model;
	cout << " Color: "; cin >> iron.color;
	cout << " Minimum temperature: "; cin >> iron.min_temp;
	cout << " Maximum temperature: "; cin >> iron.max_temp;
	cout << " Steam: Steam: 1 -> yes, 0 -> no: "; cin >> iron.steam;
	cout << " Power: "; cin >> iron.power;
	return iron;
}
//Exercice 3
struct Boiler
{
	char company[20];
	char color[20];
	float power;
	float volume;
	int heating_temperature;
};

void ShowBoiler(Boiler& boiler)
{
	cout << "----- Boiler -----" << endl;
	cout << " Company: " << boiler.company << endl;
	cout << " Color: " << boiler.color << endl;
	cout << " Power: " << boiler.power << endl;
	cout << " Volume: " << boiler.volume << endl;
	cout << " Heating temperature: " << boiler.heating_temperature << endl;
}

Boiler InputBoiler(Boiler boiler)
{
	cout << " Company: "; cin >> boiler.company;
	cout << " Color: "; cin >> boiler.color;
	cout << " Power: "; cin >> boiler.power;
	cout << " Volume: "; cin >> boiler.volume;
	cout << " Heating temperature: "; cin >> boiler.heating_temperature;
	return boiler;

}


int main()
{
	//{
	//	//float int char long short long long double bool

	//	Date birthdate = { 10, 5, 2000, "May" };
	//	cout << "------------ My Birthday -----------------" << endl;
	//	cout << "Day : " << birthdate.day << endl;
	//	cout << "Month : " << birthdate.month << endl;
	//	cout << "Year : " << birthdate.year << endl;
	//	cout << "Month name : " << birthdate.month_name << endl;

	//	/*Date friend_birthday;
	//	cout << "Enter day : "; cin >> friend_birthday.day;
	//	cout << "Enter month : "; cin >> friend_birthday.month;
	//	cout << "Enter year : "; cin >> friend_birthday.year;
	//	cout << "Enter month name : "; cin >> friend_birthday.month_name;
	//	cout << "------------ Friend Birthday -----------------" << endl;
	//	cout << "Day : " << friend_birthday.day << endl;
	//	cout << "Month : " << friend_birthday.month << endl;
	//	cout << "Year : " << friend_birthday.year << endl;
	//	cout << "Month name : " << friend_birthday.month_name << endl;*/

	//	Worker worker = { "Oleg", "Oliunuk", "manager","finance",45999.99,
	//		{5,4,2007},{7,7,2026} };
	//	ShowWorker(worker);

	//	Worker read_worker{};
	//	read_worker = Input(read_worker);
	//	ShowWorker(read_worker);


	//	Date event = { 26,10,2026,"October" };

	//	cout << event.day << endl;
	//	cout << event.month << endl;
	//	cout << event.year << endl;
	//	cout << event.month_name << endl;

	//	Date empty;
	//	empty = event;
	//	cout << empty.day << endl;
	//	cout << empty.month << endl;
	//	cout << empty.year << endl;
	//	cout << empty.month_name << endl;

	//	Date* ptr = nullptr;
	//	ptr = &event;
	//	cout << (*ptr).day << endl;
	//	cout << ptr->month << endl;;
	//	cout << ptr->year << endl;;
	//	cout << ptr->month_name << endl;;

	//	int a;//  4b
	//	char b;//  1b
	//	double c;// 8b
	//	int* p;//  4b
	//	cout << "sizeof int " << sizeof(int) << endl;
	//	cout << "sizeof a " << sizeof(a) << endl;
	//	cout << "sizeof b " << sizeof(b) << endl;
	//	cout << "sizeof c " << sizeof(c) << endl;
	//	cout << "sizeof p" << sizeof(p) << endl;
	//	cout << "sizeof p" << sizeof(double*) << endl;
	//	cout << "sizeof p" << sizeof(float*) << endl;
	//	cout << "sizeof p" << sizeof(char*) << endl;
	//	cout << "sizeof event" << sizeof(event) << endl;
	//	cout << "sizeof worker" << sizeof(worker) << endl;
	//}

	{
		////Exercice 1 Variante 1
		//cout << "Exercice 1 Variante 1" << endl;
		//WashingMachine washing_machine = { "Samsung", "white", 60.0, 65.0, 85.0, 2000.0, 1200, 90 };
		//ShowWashingMachine(washing_machine);
		////Exercice 1 Variante 2
		//cout << "Exercice 1 Variante 2" << endl;
		//WashingMachine washing_machine2{};
		//washing_machine2 = InputWashingMachine(washing_machine2);
		//ShowWashingMachine(washing_machine2);

		////Exercice 2 Variante 1
		//cout << "Exercice 2 Variante 1" << endl;
		//Iron iron = { "Samsung", "CAVA", "white", 60, 220, true, 2400 };
		//ShowIron(iron);
		////Exercice 2 Variante 2
		//cout << "Exercice 2 Variante 2" << endl;
		//Iron iron2{};
		//iron2 = InputIron(iron2);
		//ShowIron(iron2);
		
		//Exercice 3 Variante 1
		cout << "Exercice 3 Variante 1" << endl;
		Boiler boiler = { "Samsung", "white", 2200, 80, 85};
		ShowBoiler(boiler);

		//Exercice 3 Variante 2
		cout << "Exercice 2 Variante 2" << endl;
		Boiler boiler2{};
		boiler2 = InputBoiler(boiler2);
		ShowBoiler(boiler2);

	}



}

