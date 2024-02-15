#include <iostream>
#include  <Cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int dayCal(int y, int m, int d){
	
	int months[100] = {31, 28, 31, 30, 31, 30, 31 , 31, 30, 31, 30, 31};
	
	int year = 365*y;
	int month = 0;
	for(int i = 0; i < m; i++){
		month += months[i];
	}
	int day = d;
	
	return day + month + year;
}


int leap(int y){
	int n = 0;
	int extra = 0;
	
	for(int i = 1; i < y; i++){
		if(i % 4 == 0){
			n++;
		}
		if(i%100 == 0&& i%400 != 0){
			extra++;
		}
	}
	
	return n - extra;
	
}


int main() {
	int year;
	cin>>year;
	int month;
	cin>>month;
	int day;
	cin>>day;
	
	int year2;
	cin>>year2;
	int month2;
	cin>>month2;
	int day2;
	cin>>day2;
	
	int days1 = dayCal(year, month, day);
	int days2 = dayCal(year2, month2, day2);
	
	
	
	int distance = max(days1,days2) - min(days1,days2);
	
	int leap1 = leap(year);
	int leap2 = leap(year2);
	
	int main_leap = max(leap1,leap2) - min(leap1,leap2);
	
	distance = distance + main_leap;
	
	cout<<distance;
	
	return 0;
}
