#include<iostream>
#include<string>

using namespace std;

int T;

int main() 
{

	cin >> T;

	for (int i = 0; i < T; i++) 
    {
		string str;
		cin >> str;

		int L = str.size();

		bool check = false;

		if (str.at(0) == 'A' || str.at(0) == 'B' || str.at(0) == 'C' || str.at(0) == 'D' || str.at(0) == 'E' || str.at(0) == 'F')
			check = true;
		
		if (!check) 
        {
			cout << "Good" << endl;
			continue;
		}

		check = false;

		if (str.at(L - 1) == 'A' || str.at(L - 1) == 'B' || str.at(L - 1) == 'C' || str.at(L - 1) == 'D' || str.at(L - 1) == 'E' || str.at(L - 1) == 'F')
			check = true;

		if (!check) 
        {
			cout << "Good" << endl;
			continue;
		}

		char temp = 'S';

		for (int j = 1; j < str.size() - 1; j++) 
        {
			
			if (str.at(j - 1) != str.at(j)) 
            {

				if (str.at(j - 1) == 'B' || str.at(j - 1) == 'D' || str.at(j - 1) == 'E') 
                {

					if (temp == 'S' && str.at(j) == 'A') 
                    {
						temp = 'A';
					}
					else 
                    {
						check = false;
						cout << "Good" << endl;
						break;
					}

				}
                else if (str.at(j - 1) == 'A') 
                {

					if ((temp == 'S' || temp == 'A') && str.at(j) == 'F') 
                    {
						temp = 'F';
					}
					else
                     {
						check = false;
						cout << "Good" << endl;
						break;
					}

				}
				else if (str.at(j - 1) == 'F')
                 {

					if (temp == 'F' && str.at(j) == 'C') 
                    {
						temp = 'C';
					}
					else 
                    {
						check = false;
						cout << "Good" << endl;
						break;
					}

				}
				else if (str.at(j - 1) == 'C') 
                {

					if (temp == 'C' && (str.at(j) == 'A' || str.at(j) == 'B' || str.at(j) == 'C' || str.at(j) == 'D' || str.at(j) == 'E' || str.at(j) == 'F')) 
                    {
					}
					else
                     {
						check = false;
						cout << "Good" << endl;
						break;
					}

				}
				else
                 {
					check = false;
					cout << "Good" << endl;
					break;
				}
			}
		}

		if (check)
			cout << "Infected!" << endl;

	}

	return 0;

}