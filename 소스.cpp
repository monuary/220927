#include<iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;
	void Show()
	{
		cout << "�� ���: [" << upLeft.x << ", " << upLeft.y << "]" << endl;	//	Ŭ���� �ȿ� Ŭ������ �� �� �ִ�. ��, ���� �����Ϸ��� public ������ �ʿ�.
		cout << "�� �ϴ�: [" << lowRight.x << ", " << lowRight.y << "]" << endl;
	}
};

int main()
{
	Point pos1 = { -2,4 };
	Point pos2 = { 5,9 };
	Rectangle rec = { pos2,pos1 };	//	upLeft ���� �Ŀ� lowRight�� �����߱� ������, �� ������� �Էµȴ�.
	rec.Show();
	return 0;
}