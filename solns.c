/* Enter your solutions in this file */
#include <stdio.h>


//Average Function

float average(int num_array[], int n){
	float avg,sum=0;
	for(int i=0;i<n;i++){
		sum=sum+num_array[i];
	}
	avg=sum/n;
	return avg;
}
//Factors Function

int factors(int num, int ret[]){
	int count=0;
	while (num%2 == 0){
		count++;
		num = num/2;
		ret[count-1]=2;
	}
	for (int i = 3; i <= sqrt(num); i = i+2){
		while (num%i == 0){
			count++;
			num = num/i;
			ret[count-1]=i;
		}
	}
	ret[count]=num;
	return count+1;
	}
//Max Function

int max(int num_array[], int n){
	int max=num_array[0];
	for(int i=0;i<n;i++){
		if(num_array[i]>max){
			max=num_array[i];
		}
	}
	return max;
}

//Min Function

int min(int num_array[], int n){
	int min=num_array[0];
	for(int i=0;i<n;i++){
		if(num_array[i]<min){
			min=num_array[i];
		}
	}
	return min;
}
//Mode Function
int mode(int num_array[], int n){
	int key=0,max_count=0,value;
	for(int i=0;i<n;i++){
		int count=0;
		key=num_array[i];
		for(int j=i;j<n;j++){
			if(num_array[j]==key){
				count++;
			}
		if(count>max_count){
			max_count=count;
			value=key;
		}
	}
	}
return value;
}
