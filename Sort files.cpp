// Sort files.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <vector>
#include "stdio.h"
#include <string.h>
#include <fstream>
#include <sstream>
#include <algorithm>


using namespace std;


int main()
{

	vector<string> P;
	vector<string> B; 
	vector<string> C;
	vector<string> U; 

	std::ifstream code("E:\\sort1.txt"); 
	
	string line;
	while (std::getline(code, line))
	{
		cout << "line= " << line << endl;


		if (line[1] == 'P')
		{
			P.push_back(line);

		}

		else if (line[1] == 'B')
		{
			B.push_back(line);

		}
		else if (line[1] == 'C')
		{
			C.push_back(line);

		}
		else if (line[1] == 'U')
		{
			U.push_back(line);

		}
	}
	code.close();

	ofstream Sortedcode;

	Sortedcode.open("E:\\Sortedcode1.txt");


	for (std::size_t i = 0; i < P.size(); i++)
	{
		Sortedcode << P[i] << endl;
	}
	for (std::size_t i = 0; i < B.size(); i++)
	{
		Sortedcode << B[i] << endl;
	}
	for (std::size_t i = 0; i < C.size(); i++)
	{
		Sortedcode << C[i] << endl;
	}
	for (std::size_t i = 0; i < U.size(); i++)
	{
		Sortedcode << U[i] << endl;
	}
	
	Sortedcode.close();
	

    return 0;
};

