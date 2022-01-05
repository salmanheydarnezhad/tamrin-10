#include<iostream>
using namespace std;
class time{
public:
	int h, m, s;
	time(int a) {
		if (a != 0) {
			cout << "Enter (h:m:s) : ";
			cin >> h >> m >> s;
		}
	}
	void show() {
		cout << h << ":" << m << ":" << s << endl;
	}
	void convert_to_second();
	void convert_to_time(int);
	void sum(time sec);
	void sub(time sec);
};
void time::convert_to_second() {
	time t(1);
	cout << "second: " << (t.h * 3600) + (t.m * 60) + t.s << endl;
}
void time::convert_to_time(int sec) {
	time t(0);
	t.h = sec / 3600;
	t.m = (sec % 3600) / 60;
	t.s = sec % 60;
	t.show();
}
void time::sum(time sec){
	time t(0);
	t.h = this->h + sec.h;
	t.m = this->m + sec.m;
	t.s = this->s + sec.s;
	if (t.s >= 60) {
		t.m++;
		t.s = t.s - 60;
	}
	if (t.m >= 60) {
		t.h++;
		t.m = t.m - 60;
	}
	if (t.h >= 24)
		t.h = t.h - 24;
	cout << "sum: ";
	t.show();
}
void time::sub(time sec){
	time t(0);
	t.h = this->h - sec.h;
	t.m= this->m - sec.m;
	t.s = this->s - sec.s;
	if (t.s < 0) {
		t.s = t.s + 60;
		t.m--;
	}
	if (t.m < 0) {
		t.m = t.m + 60;
		t.h--;
	}
	if (t.h < 0)
		t.h = t.h + 24;
	cout << "sub: ";
	t.show();
}

int main()
{
	cout << "time1: ";
	time time1(1);

	cout << "time2: ";
	time time2(1);

	cout << "time1: ";
	time1.show();

	cout << "time2: ";
	time2.show();

	int sec;
	cout << "Enter second:";
	cin >> sec;
	time1.convert_to_time(sec);
	time1.convert_to_second();
	time1.sum(time2);
	time1.sub(time2);
	return 0;
}
