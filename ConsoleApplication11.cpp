#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	fstream inpt("D:\\text.txt", ios_base::in);
	fstream outpt("D:\\dout.txt", ios_base::out);
	string s;
	while (!inpt.eof())
	{
		inpt >> s;
		int l = s.size();
		for (int i = 0; i < l; i++) {
			if (s[i] == 'a')
				s[i] = 'A';
			if (s[i] == 'e')
				s[i] = 'E';
			if (s[i] == 'u')
				s[i] = 'U';
			if (s[i] == 'i')
				s[i] = 'I';
			if (s[i] == 'o')
				s[i] = 'O';
		}
		outpt << s << " ";
	}
		return 0;
}