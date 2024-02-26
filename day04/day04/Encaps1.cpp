#include <iostream>
using namespace std;

class SinivelCap	// �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap		// ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }	
};

class SnuffleCap	// �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class ColdPatient		// ����ȯ�ڸ� Ŭ������ ������ ����. �� ȯ�ڴ� ���� ġ�Ḧ ���ؼ� �ռ� ������ Ŭ���� ��ü�� �����ؾ���.
{
public:
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);		// �ڰ��� óġ�� ���� �๰, ��ä��, �ڸ����� ġ���ϱ� ���� ĸ���� ������� ����
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}