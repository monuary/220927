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
		cout << "좌 상단: [" << upLeft.x << ", " << upLeft.y << "]" << endl;	//	클래스 안에 클래스를 쓸 수 있다. 단, 직접 접근하려면 public 선언이 필요.
		cout << "우 하단: [" << lowRight.x << ", " << lowRight.y << "]" << endl;
	}
};

int main()
{
	Point pos1 = { -2,4 };
	Point pos2 = { 5,9 };
	Rectangle rec = { pos2,pos1 };	//	upLeft 선언 후에 lowRight를 선언했기 때문에, 그 순서대로 입력된다.
	rec.Show();
	return 0;
}