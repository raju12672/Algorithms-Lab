#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

struct node {
	string name;
	string phone;
	string mail;
	string address;
	struct node* next;
};
struct user {
	string username;
	string password;
};

typedef struct node person;
person* h;

int n = 3;
struct user u[100];

void default_logins();
void start();
void exitapp();
void login();
void registration();
void about();
void menu();
void add();
void view();
void edit();
void remove();
void search();

int main() {
	h = NULL;
	system("color 5f");
	default_logins();
	start();

	return 0;
}

void default_logins() {
	u[0].username = "Albin";
	u[0].password = "12926";
	u[1].username = "Brishti";
	u[1].password = "12775";
	u[3].username = "Shawon";
	u[2].password = "12470";
}

void exitapp() {
	system("cls");
	cout << endl << endl;
	cout << "\t***************THANK YOU FOR USING PHONEBOOK***************" << endl << endl << endl;
	system("pause");
	exit(0);
}

void start() {

	system("cls");
	cout << endl;
	cout << "\t****************WELCOME TO PHONEBOOK*****************" << endl;
	cout << "\t_____________________________________________________" << endl << endl << endl << endl;

	cout << "\t1.Login     2.Register     3.About the App     4.Exit" << endl << endl;

	char c;
	cout << "\t";
	cin >> c;
	switch (c)
	{
	case '1': login();
		break;
	case '2': registration();
		break;
	case '3': about();
		break;
	case '4': exitapp();
		break;
	default:
		system("cls");
		printf("\n\tInvalid Entry\n\n");
		system("pause");
		start();
	}
}

void login() {
	system("cls");
	string username, password;
	int i;
	bool found = false, success = false;
	cout << endl << "\tEnter Login Data:";
	cout << endl << "\tUsername: ";
	cin >> username;
	for (i = 0; i < n; i++) {
		if (u[i].username == username) {
			found = true;
			break;
		}
	}
	if (!found)cout << endl << "\t" << username << " Not Found" << endl << endl;
	else {
		cout << "\tPassword: ";
		cin >> password;
		system("cls");
		if (password == u[i].password) {
			cout << endl << "\tLogin Successful!" << endl << endl << endl;
			success = true;
		}
		else cout << endl << "\tPassword Incorrect" << endl << endl;
	}
	system("pause");
	if (success)menu();
	else start();
}

void registration() {
	system("cls");
	cout <<endl<< "\tEnter New Username and Password To Register" << endl << endl;
	cout << "\tUsername: ";
	cin >> u[n].username;
	cout << endl << "\tPassword: ";
	cin >> u[n].password;
	n++;
	system("cls");
	cout << endl << "\tRegistration Successfull!" << endl << endl;
	system("pause");
	start();
}

void about() {
	system("cls");
	system("cls");
	cout << endl;
	cout << "\t**************WELCOME TO PHONEBOOK**************" << endl;
	cout << "\t__________________________________________________" << endl << endl;
	cout << "\tA PROJECT BY:" << endl << endl;
	cout << "\t\tMd. Albin Hossain" << endl;
	cout << "\t\tMaynul Islam" << endl;
	cout << "\t\tNajam Bin Saddi" << endl;
	cout << "\t\tBaby Naznin" << endl;
	cout << "\t\tRaju Ahmed" << endl;
	cout << "\t\tSection: R\tBatch: 52\t" << endl << endl;
	cout << endl << "\tSubmitted To:" << endl << endl;
	cout << "\t\tAnnita Tahsin Priyoti" << endl;
	cout << "\t\tDepartment of CSE" << endl << "\t\tDaffodil International University." << endl << endl << endl;
	system("pause");
	start();
}

void menu()
{
	system("cls");
	cout << endl;
	cout << "\t**************WELCOME TO PHONEBOOK**************" << endl;

	cout << endl << endl;
	cout << "\t                      MENU" << endl;
	cout << "\t_________________________________________________" << endl << endl << endl;

	cout << "\t1.Add New Contact      2.View List      3.Logout" << endl << endl;

	cout << "\t4.Edit Contact         5.Search         6.Delete" << endl << endl << "\t";
	char c;
	cin >> c;
	switch (c)
	{
	case '1': add();
		break;
	case '2': view();
		break;
	case '3': start();
		break;
	case '4': edit();
		break;
	case '5': search();
		break;
	case '6': remove();
		break;
	default:
		system("cls");
		printf("\n\tInvalid Entry\n\n");
		system("pause");
		menu();
	}
}

void add() {
	system("cls");
	person* p, * n = NULL;
	p = h;
	n = new person;
	cout << endl << "\tEnter New Contact's Data" << endl;
	cout << endl << "\tName: ";
	cin >> n->name;
	cout << endl << "\tPhone No: ";
	cin >> n->phone;
	cout << endl << "\tEmail: ";
	cin >> n->mail;
	cout << endl << "\tAddress: ";
	cin >> n->address;
	n->next = NULL;
	if (h == NULL)h = n;
	else {
		while (p->next != NULL)p = p->next;
		p->next = n;
	}
	system("cls");
	cout << endl << "\tRecord Saved" << endl << endl;
	system("pause");
	menu();
}

void view() {
	system("cls");
	person* p = h;
	if (p == NULL)cout << endl << "\tYour PhoneBook is Empty\n" << endl;
	else {
		cout << endl << "\tContact List" << endl;
		cout << "\t____________________________________________________" << endl;
		for (int i = 1; p != NULL; i++,p=p->next) {
			cout << endl << "\t" << i << "." << endl;
			cout << "\tName: " << p->name << endl;
			cout << "\tPhone: " << p->phone << endl;
			cout << "\tEmail: " << p->mail << endl;
			cout << "\tAddress: " << p->address << endl << endl;
		}
		cout << endl;
	}
	system("pause");
	menu();
}

void search() {
	system("cls");
	string name;
	bool found = false;
	person* p;
	p = h;
	if (p == NULL)cout << endl << "\tPhoneBook is Empty\n" << endl;
	else {
		cout << endl << "\tEnter a Name to Search: ";
		cin >> name;
		while (p != NULL) {
			if (p->name == name) {
				found = true;
				break;
			}
			p = p->next;
		}
		system("cls");
		if (!found)cout << endl << "\t" << name << " Did Not Match any Contact" << endl << endl;
		else {
			cout << "\tName: " << p->name << endl;
			cout << "\tPhone: " << p->phone << endl;
			cout << "\tEmail: " << p->mail << endl;
			cout << "\tAddress: " << p->address << endl << endl;
		}
	}
	system("pause");
	menu();
}

void remove() {
	system("cls");
	string name;
	bool found = false;
	person* p = h, * toDelete;
	if (p == NULL)cout << endl << "\t" "PhoneBook is Empty\n" << endl;
	else {
		cout << endl << "\tEnter a Name to Delete: ";
		cin >> name;
		if (name == h->name) {
			toDelete = h;
			h = h->next;
			free(toDelete);
			found = true;
		}
		else while (p->next != NULL) {
			if (p->next->name == name) {
				found = true;
				toDelete = p->next;
				p->next = p->next->next;
				free(toDelete);
				break;
			}
		}
		system("cls");
		if (found)cout << endl << "\t" << name << " Deleted Successfully" << endl << endl;
		else cout << endl << "\t" << name << " Not found" << endl << endl;
	}
	system("pause");
	menu();
}

void edit() {
	system("cls");
	string name;
	bool found = false;
	person* p, * n;
	p = new person;
	p = h;
	n = new person;
	if (p == NULL)cout << endl << "\tPhoneBook is Empty" << endl << endl;
	else {
		cout << endl << "\tEnter a Contact Name to Edit: ";
		cin >> name;
		while (p != NULL) {
			if (p->name == name) {
				found = true;
				break;
			}
			p = p->next;
		}
		system("cls");
		if (!found)cout << endl << "\t" << name << " Did Not Match any Contact" << endl << endl;
		else {
			cout << "\tName: " << p->name << endl;
			cout << "\tPhone: " << p->phone << endl;
			cout << "\tEmail: " << p->mail << endl;
			cout << "\tAddress: " << p->address << endl << endl;
			n = p;
			cout << endl << "\tEnter New Data: " << endl;
			cout << endl << "\tName: ";
			cin >> n->name;
			cout << endl << "\tPhone No: ";
			cin >> n->phone;
			cout << endl << "\tEmail: ";
			cin >> n->mail;
			cout << endl << "\tEnter address: ";
			cin >> n->address;
			cout << endl << "\tContact Updated Successfully" << endl << endl << endl;
		}
	}
	system("pause");
	menu();
}