#include<bits/stdc++.h>
using namespace std;
string OptimalAssignments(string strArr[], int size) {
	vector <vector <int>> newList(size); // 2D vector
	string num;
	int temp;
	// Make the string argument into a list of integers for ease of handling down the line
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < strArr[x].length(); y++)
		{
			if ((strArr[x][y] == '(' || strArr[x][y] == ')' || strArr[x][y] == ',') && !num.empty())
			{
				istringstream(num) >> temp;
				newList[x].push_back(temp);
				num.clear();
			}
			else if (isdigit(strArr[x][y]))
			{
				num += strArr[x][y];
                cout<<strArr[x][y];
			}
		}
	}
}

    int main() {
	// keep this function call here
	/* Note: In C++ you first have to initialize an array and set
	it equal to the stdin to test your code with arrays. */
	string A[] = { "(1,2,1)", "(4,1,5)", "(5,2,1)" };
	string B[] = { "(13,4,7,6)", "(1,11,5,4)", "(6,7,2,8)", "(1,3,5,9)" };
	string C[] = { "(5,4,2)", "(12,4,3)", "(3,4,13)" };
	string D[] = { "(90,75,75,80)", "(35,85,55,65)", "(125,95,90,105)", "(45,110,95,115)" };
	
	cout << OptimalAssignments(A, sizeof(A) / sizeof(A[0])) << endl; // (1-1)(2-2)(3-3)
	// cout << OptimalAssignments(B, sizeof(B) / sizeof(B[0])) << endl; // (1-2)(2-4)(3-3)(4-1)
	// cout << OptimalAssignments(C, sizeof(C) / sizeof(C[0])) << endl; // (1-3)(2-2)(3-1)
	// cout << OptimalAssignments(D, sizeof(D) / sizeof(D[0])) << endl; // (1-4)(2-3)(3-2)(4-1) or (1-2)(2-4)(3-3)(4-1)
	return 0;
}