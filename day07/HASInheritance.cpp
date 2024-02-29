#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;		// 장전된 총알의 수
public:

	Gun(int bnum) : bullet(bnum)
	{ }
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
	int getbullet()
	{
		return bullet;
	}
	
};

class Police : public Gun
{
private:
	int handcuffs;		// 소유한 수갑의 수
public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{ }

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void state() {
		cout << getbullet() << " , " << handcuffs << endl;
	}
};

int main(void)
{
	Police pman(5, 3);		// 총알 5, 수갑 3
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();

	return 0;
}