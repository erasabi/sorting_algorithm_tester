#include <iostream>
#include <stdio.h>
#include <stdlib.h> //rand();
#include <math.h> 	//pow();
#include <sstream>  //stringstream

using namespace std;



//prints contents of random array
void print_array(int* a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
};

//Insertion Sort
void insertion(int* a, int n, int data){
	float steps = 0;
	for(int i=1; i<n; i++){
		//insert a[i] into a[0:i-1]
		int t = a[i];
		int j;

		for(j=i-1; j>=0 && t<a[j]; j--){
			a[j + 1] = a[j]; ++steps;
		}
		
		a[j + 1] = t;
		++steps;		
	} 
	
	switch(data){
		case 'A': cout << "after: "; print_array(a, n);
		case 'S': cout << "steps: " << steps << endl;
		//add time option
		default: break;
	}
};

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

	//cout << "before: "; print_array(a, n); 

	if(sort_type == "insertion") insertion(a, n, data);
	else cout << "error: invalid sort type" << endl;

	/*
	*/
	return 0;
};
