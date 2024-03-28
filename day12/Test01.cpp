/*	File : Test01.c++
    Created: 24-03-26
    Author : 김동주
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
        cout << "-----상품관리 프로그램-----" << endl;
        cout << "1. 상품 추가" << endl;
        cout << "2. 상품 출력" << endl;
        cout << "3. 상품 검색" << endl;
        cout << "0. 종료" << endl;
        cout << "메뉴를 선택하세요: ";

        int choice;
        cin >> choice;

        if (cin.fail()) {
            cout << "잘못된 입력입니다. 숫자를 입력해주세요." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

     
        switch (choice) {
        case 1: {
            cout << "1. 책 추가 2. 핸드폰 추가 3. 컴퓨터 추가" << endl;
            cout << "추가할 상품을 선택하세요: ";
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

            cout << "ID를 입력하세요: ";
            cin >> id;
            cout << "가격을 입력하세요: ";
            cin >> price;
            cout << "생산자를 입력하세요: ";
            cin >> producer;

            switch (productChoice) {
            case 1:
                cout << "ISBN을 입력하세요: ";
                cin >> ISBN;
                cout << "저자를 입력하세요: ";
                cin >> author;
                cout << "제목을 입력하세요: ";
                cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);
                break;
            case 2:
                cout << "모델을 입력하세요: ";
                cin >> model;
                cout << "RAM을 입력하세요: ";
                cin >> RAM;
                products[numProducts++] = new Handphone(id, price, producer, model, RAM);
                break;
            case 3:
                cout << "모델을 입력하세요: ";
                cin >> model;
                cout << "CPU를 입력하세요: ";
                cin >> model;
                cout << "RAM을 입력하세요: ";
                cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, model, RAM);
                break;
            default:
                cout << "잘못된 선택입니다." << endl;
            }
            break;
        }
        case 2:
            cout << "상품 목록 출력" << endl;
            for (int i = 0; i < numProducts; ++i) {
                cout << i + 1 << ". ";
                products[i]->printDetails();
            }
            break;
        case 3: {
            cout << "상품 검색" << endl;
            cout << "검색할 제품 ID를 입력하세요: ";
            int searchId;
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < numProducts; i++) {
                if (products[i]->getId() == searchId) {
                    cout << "상품을 찾았습니다:" << endl;
                    products[i]->printDetails();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "해당 ID의 상품을 찾을 수 없습니다." << endl;
            }
            break;
        }
        case 0:
            cout << "프로그램을 종료합니다." << endl;
            return 0;
        default:
            cout << "잘못된 선택입니다." << endl;
        }
    }

    return 0;
}