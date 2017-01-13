#include "Sort_Sandbox.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //rand()
#include <math.h> 	//pow()
#include <sstream>  //stringstream

using namespace std;


int main(int argc, char* argv[]){

	int power; //power factor for array size
	char data; //output data preference

	string sort_type = argv[1];
	stringstream arg2;

	//takes char* input and converts to integer value
	arg2 << argv[2]; 
	arg2 >> power;
	int n = pow(10, power); //creates sample size for array

	data = *argv[3]; //initializes data preference
	int a[n]; //creates array of size n

	//initializes array with random numbers
	for(int i=0; i<n; i++) a[i] =  rand() % n;

	if(sort_type == "insertion") insertion(a, n, data);
	else cout << "error: invalid sort type" << endl;

	/*
	*/
	return 0;
};
