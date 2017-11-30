#include <iostream>
#include <string>

using namespace std;

int main()
{
	int whilecount = 1;
	int samecount = 0;
	int lengthsamecount = 0;
	string question;
	string answer;
	string questionArr[100];
	string answerArr[100];
	string nothing;
	int set = 0, set2 = 0;
	int wrongNum = 0;

	while (true)
	{
		cin >> set;

		if (set == 0)
			return 0;

		getline(cin, nothing);

		for (int i = 0; i < set; i++)
		{
			getline(cin, question);
			questionArr[i] = question;
		}

		cin >> set2;
		getline(cin, nothing);

		for (int i = 0; i < set2; i++)
		{
			getline(cin, answer);
			answerArr[i] = answer;
		}

		for (int i = 0; i < set; i++)
		{
			int quesSize = questionArr[i].length();
			int ansSize = answerArr[i].length();
			//evaluateIndex = questionArr[i].find_first_not_of(answerArr[i]);

			if (set > 1)
			{
				if (questionArr[i] == answerArr[i])
				{
					samecount++;
				}
			}

			else
			{
				if (questionArr[i] == answerArr[i])
				{
					samecount++;
					break;
				}
			}

			int indexOfk=0;

			for (int j = 0; j < questionArr[i].length(); j++)
			{
				if (isdigit(questionArr[i][j]))
				{
					for (int k = indexOfk; k < answerArr[i].length(); k++)
					{
						if (isdigit(answerArr[i][k]))
						{
							if (questionArr[i][j] == answerArr[i][k])
							{
								indexOfk = k+1;
								break;
							}

							else if (questionArr[i][j] != answerArr[i][k])
							{
								wrongNum++;
								break;
							}
						}
					}
				}
			}

			if (wrongNum == 0)
			{
				lengthsamecount++;
			}
		}

		if (samecount == set)
			cout << "Run #" << whilecount << ": Accepted" << endl;

		else if (lengthsamecount == set)
			cout << "Run #" << whilecount << ": Presentation Error" << endl;

		else
			cout << "Run #" << whilecount << ": Wrong Answer" << endl;

		samecount = 0;
		lengthsamecount = 0;
		whilecount++;
		wrongNum = 0;
	}

	return 0;
}