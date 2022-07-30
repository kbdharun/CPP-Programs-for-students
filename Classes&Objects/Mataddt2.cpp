/* Matrix Addition with class */
#include<iostream>
using namespace std;

class matrix {

	/* Declaration  */
	int a[3][3], b[3][3], ans[3][3];

	public:
		matrix() {
			cout << "Enter 9 elements for first matrix:" << endl;
			for(int i = 0; i < 3; i++)
				for(int j = 0; j < 3; j++)
					cin >> a[i][j];
			cout << "Enter 9 elements for second matrix:" << endl;
			for(int i = 0; i < 3; i++)
				for(int j = 0; j < 3; j++)
					cin >> b[i][j];
		}

		void addition() {
			cout << "After matrix addition" << endl;
			for(int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					ans[i][j]= a[i][j] + b[i][j];
					cout << ans[i][j] << "\t";
				}
				cout << endl;
			}
		}
};

int main() {
	cout << "Program for calculation of Matrix Addition" << endl;
	matrix Add = matrix();
	Add.addition();
	return 0;
}
