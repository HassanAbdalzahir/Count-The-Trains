
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Getting The Number Of Tests and Define it As 'T'
	int T;
	//cout << "Please Insert Numbers Of Tests You would Take.: ";
	cin >> T;

	// The Whole Program Will Deal Inside A loop With Numbers Of Tests;
	for (int y = 1; y <= T; y++) {

		// Getting The Number Of Traing as 'Trains', And The Number of Messages as 'Messages'
		int Trains, Messages;
		//cout << "Please Insert The Number of Trains and TheNumber Of Messages You Will Send.: ";
		cin >> Trains >> Messages;

		// Define The Array That Will Store The Cars Velocity
		vector <int> VArray;

		// Stooring the Numbers Inside The VArray
		//cout << "Enter The Cars Velocity: ";
		for (int i = 1; i <= Trains; i++) {
			int VArrInput;
			cin >> VArrInput;
			VArray.push_back(VArrInput);
		}

		// Here The Loop What Will Handling The Messages and What Will Happen After this
		for (int q = 1; q <= Messages; q++) {

			// First We Will Get The Train's Index We Want To decreese Velocity And The Value of vel.
			int trainIndex, newVal;
			//cout << "Pleace Inter The Train Index and The New Value: ";
			cin >> trainIndex >> newVal;

			// Checking if the new value is with Minus Value if True << 0 , if isn't << train value - new Value
			VArray[trainIndex - 1] <= 0 ? VArray[trainIndex - 1] = 0 : VArray[trainIndex - 1] -= newVal;

			// Declaring A New Array Do Deal With The Messages Without Effact The First Array and make clone
			vector <int> newArr;
			newArr = VArray;

			// Making The Speed Of the Next Train Is Not Greater Than the previous Train
			int trainCounter;
			trainCounter = 1;
			//
			for (int i = 0; i <= Trains - 2; i++) {
				newArr[i] < newArr[i + 1] ? newArr[i + 1] = newArr[i] : NULL;
				//
				newArr[i] == newArr[i + 1] ? NULL : ++trainCounter;

			}

			//Counting The Trains (:

			/*int trainCounter;
			trainCounter = 1;
			for (int i = 0; i <= Trains - 2; i++) {
				newArr[i] == newArr[i + 1] ? NULL : ++trainCounter;
			}*/

			//Printing The REsualts
			//cout << "\n The Numbers Of Trains Is: " << trainCounter << endl;
			cout << trainCounter << " ";
		}
		cout << endl;

		// :D

	}

}

