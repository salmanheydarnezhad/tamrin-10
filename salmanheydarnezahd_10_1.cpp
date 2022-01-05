#include<iostream>
#include<string>
using namespace std;
class kasr{
public:
	int surat, makhraj;
	kasr(int s, int m){
		cout << "Enter surat: ";
		cin >> s;
		surat = s;
		cout << "Enter makhraj: ";
		cin >> m;
		makhraj = m;
	}
	void show(string name) {
		if (makhraj == 1)
			cout << '\n' << name << ":" << surat << endl;
		else if (makhraj != 0)
			cout << '\n' << name << ":" << surat << "/" << makhraj << endl;
		else
			cout << "ERROR /0";
	}
	void sum(kasr sec);
	void div(kasr sec);
	void multi(kasr sec);
	void sub(kasr sec);
};

void kasr::sum(kasr sec){
	int s = this->surat*sec.makhraj + sec.surat*this->makhraj;
	int m = this->makhraj*sec.makhraj;
	cout << "sum: " << s << '/' << m << endl;
}
void kasr::div(kasr sec){
	int s = this->surat*sec.makhraj;
	int m = this->makhraj*sec.surat;
	cout << "div: " << s << '/' << m << endl;
}
void kasr::multi(kasr sec){
	int s = this->surat*sec.surat;
	int m = this->makhraj*sec.makhraj;
	cout << "multi: " << s << '/' << m << endl;
}
void kasr::sub(kasr sec){
	int s = this->surat*sec.makhraj - sec.surat*this->makhraj;
	int m = this->makhraj*sec.makhraj;
	cout << "sub: " << s << '/' << m << endl;
}

int main(){
	cout << "kasr1: ";
	kasr kasr1(0, 1);

	cout << "kasr2: ";
	kasr kasr2(0, 1);

	string name = "kasr1";
	kasr1.show(name);

	name = "kasr2";
	kasr2.show(name);

	kasr1.sum(kasr2);

	kasr1.div(kasr2);

	kasr1.multi(kasr2);

	kasr1.sub(kasr2);
	return 0;
}



