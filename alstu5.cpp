#include <iostream>
#include <string>

using namespace std;

int main()
{
	char key;

	while (true)
	{
		//cin >> key;
		key = cin.get();
		
		switch (key)
		{
		case 'Q':
			key = 'Q';
			break;
		case 'W':
			key = 'Q';
			break;
		case 'E':
			key = 'W';
			break;
		case 'R':
			key = 'E';
			break;
		case 'T':
			key = 'R';
			break;
		case 'Y':
			key = 'T';
			break;
		case 'U':
			key = 'Y';
			break;
		case 'I':
			key = 'U';
			break;
		case 'O':
			key = 'I';
			break;
		case 'P':
			key = 'O';
			break;
		case '{':
			key = 'P';
			break;
		case 'A':
			key = 'A';
			break;
		case 'S':
			key = 'A';
			break;
		case 'D':
			key = 'S';
			break;
		case 'F':
			key = 'D';
			break;
		case 'G':
			key = 'F';
			break;
		case 'H':
			key = 'G';
			break;
		case 'J':
			key = 'H';
			break;
		case 'K':
			key = 'J';
			break;
		case 'L':
			key = 'K';
			break;
		case ':':
			key = 'L';
			break;
		case 'Z':
			key = 'Z';
			break;
		case 'X':
			key = 'Z';
			break;
		case 'C':
			key = 'X';
			break;
		case 'V':
			key = 'C';
			break;
		case 'B':
			key = 'V';
			break;
		case 'N':
			key = 'B';
			break;
		case 'M':
			key = 'N';
			break;
		case ',':
			key = 'M';
			break;
		case '<':
			key = 'M';
			break;
		case '>':
			key = '<';
			break;
		case '/':
			key = '.';
			break;
		case ' ':
			key = ' ';
			break;
		}

		cout << key;
	}

	return 0;
}