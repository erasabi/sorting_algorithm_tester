#ifndef SS_H
#include "Sort_Sandbox.h"
#endif
#include <iostream>

using namespace std;

//prints contents of random array
void print_array(int* a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

//Insertion Sort
void insertion(int* a, int n, int data){
	float steps = 0;
	for(int i=1; i<n; i++){
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
}