/*	File : Test01.c++
    Created: 24-03-26
    Author : �赿��
*/
#include <iostream>
#include <cstring>
using namespace std;


class Product {
protected:
    int id;
    double price;
    string producer;
public:
    Product(int id, double price, const string& producer)
        : id(id), price(price), producer(producer) {}

    virtual void printDetails() const = 0; 
    int getId() const {
        return id;
    }
};
class Book : public Product {
    string ISBN;
    string author;
    string title;
public:
    Book(int id, double price, const string& producer, const string& ISBN, const string& author, const string& title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}
    void printDetails() const override {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << endl;
    }
};

class Handphone : public Product {
    string model;
    int RAM;
public:
    Handphone(int id, double price, const string& producer, const string& model, int RAM)
        : Product(id, price, producer), model(model), RAM(RAM) {}
    void printDetails() const override {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", Model: " << model << ", RAM: " << RAM << endl;
    }
};

class Computer : public Product {
    string model;
    string cpu;
    int RAM;
public:
    Computer(int id, double price, const string& producer, const string& model, const string& cpu, int RAM)
        : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}
    void printDetails() const override {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << ", Model: " << model << ", CPU: " << cpu << ", RAM: " << RAM << endl;
    }
};


int main() {
    Product* products[100];
    int numProducts = 0;

    while (true) {
        cout << "-----��ǰ���� ���α׷�-----" << endl;
        cout << "1. ��ǰ �߰�" << endl;
        cout << "2. ��ǰ ���" << endl;
        cout << "3. ��ǰ �˻�" << endl;
        cout << "0. ����" << endl;
        cout << "�޴��� �����ϼ���: ";

        int choice;
        cin >> choice;

        if (cin.fail()) {
            cout << "�߸��� �Է��Դϴ�. ���ڸ� �Է����ּ���." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

     
        switch (choice) {
        case 1: {
            cout << "1. å �߰� 2. �ڵ��� �߰� 3. ��ǻ�� �߰�" << endl;
            cout << "�߰��� ��ǰ�� �����ϼ���: ";
            int productChoice;
            cin >> productChoice;

            int id;
            double price;
            string producer;
            string model;
            int RAM;
            string ISBN;
            string author;
            string title;

            cout << "ID�� �Է��ϼ���: ";
            cin >> id;
            cout << "������ �Է��ϼ���: ";
            cin >> price;
            cout << "�����ڸ� �Է��ϼ���: ";
            cin >> producer;

            switch (productChoice) {
            case 1:
                cout << "ISBN�� �Է��ϼ���: ";
                cin >> ISBN;
                cout << "���ڸ� �Է��ϼ���: ";
                cin >> author;
                cout << "������ �Է��ϼ���: ";
                cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);
                break;
            case 2:
                cout << "���� �Է��ϼ���: ";
                cin >> model;
                cout << "RAM�� �Է��ϼ���: ";
                cin >> RAM;
                products[numProducts++] = new Handphone(id, price, producer, model, RAM);
                break;
            case 3:
                cout << "���� �Է��ϼ���: ";
                cin >> model;
                cout << "CPU�� �Է��ϼ���: ";
                cin >> model;
                cout << "RAM�� �Է��ϼ���: ";
                cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
                break;
            default:
                cout << "�߸��� �����Դϴ�." << endl;
            }
            break;
        }
        case 2:
            cout << "��ǰ ��� ���" << endl;
            for (int i = 0; i < numProducts; ++i) {
                cout << i + 1 << ". ";
                products[i]->printDetails();
            }
            break;
        case 3: {
            cout << "��ǰ �˻�" << endl;
            cout << "�˻��� ��ǰ ID�� �Է��ϼ���: ";
            int searchId;
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < numProducts; i++) {
                if (products[i]->getId() == searchId) {
                    cout << "��ǰ�� ã�ҽ��ϴ�:" << endl;
                    products[i]->printDetails();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "�ش� ID�� ��ǰ�� ã�� �� �����ϴ�." << endl;
            }
            break;
        }
        case 0:
            cout << "���α׷��� �����մϴ�." << endl;
            return 0;
        default:
            cout << "�߸��� �����Դϴ�." << endl;
        }
    }

    return 0;
}