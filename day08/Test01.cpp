// RemoteControl 클래스, SamsungTv 클래스, LgTv 클래스를 설계하고, remote->on() 호출하면 연결된 
// TV에 따라서 "삼성 TV on" 또는 "엘지 TV on"이 출력되도록 프로그램

#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() { std::cout << "TV를 켭니다." << std::endl; }	
};													

class SamsungTv : public RemoteControl
{
public:
	void on() { std::cout << "삼성 TV on" << std::endl; }	
};													

class LGTv : public RemoteControl
{
public:
	void on() { std::cout << "엘지 TV on" << std::endl; }	
};													

int main(void)
{
	RemoteControl* remote = new SamsungTv();
	remote->on();

	remote = new LGTv();		
	remote->on();

	delete remote;
	return 0;
}