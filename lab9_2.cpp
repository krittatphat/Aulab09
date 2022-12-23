#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float score){
    if(score > 90){
    return 'A';
    }
    else if(score > 75 && score <= 90){
    return 'B' ;
    }
    else if(score > 60 && score <= 75){
    return 'C' ;
    }
    else if(score > 45 && score <= 60){
    return 'D' ;
    }
    else if(score <= 45){
    return 'F' ;
    }
    return 0 ;
}

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
	   getline(cin , name[i]) ;
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}