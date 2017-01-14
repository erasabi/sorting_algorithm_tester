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

void bubble(int* a, int n, int data){
	int run_throughs = 1;
	float steps = 0;
	
	if(data == 'W') run_throughs = n - 1;
	while(run_throughs > 0){
		int l=0;
		for(int r=1; r<n; r++){
			int temp;
			if(a[l] > a[r]){
				temp = a[r];
				a[r] = a[l];
				a[l] =  temp;
			}
			l++; steps++;
		}
		--run_throughs;
	}		

	if(n < 100){
	 		cout << "array: "; print_array(a, n); 
			cout << "steps: " << steps << endl;
	}
	else 	cout << "steps: " << steps << endl;
}