#include <iostream>
#include <conio.h>
#include <locale.h> 
using namespace std; 


void d1_arr() 
{
int a[100],b[100],c[200];
int sum = 0;
float average;
int max;
float nums; // ���-�� ���������

cout << "������� ���-�� ������� (�� ������ 100): ";
cin >> nums;

cout << "������� �������� �������: " << endl;
for(int i=0; i<nums; i++)
	cin >> a[i];
for(int i=0; i<nums; i++)
	sum += a[i];
cout << endl << "����� ���������: " << sum;
average = sum / nums;
cout << endl << "������� ��������: " << average;
max = a[0];
for(int i=0; i<nums; i++) {
	if(a[i] > max) max = a[i];
}
cout << endl << "������������ ��������: " << max << endl << endl;

cout << "������ ������" << endl;

cout << "������� �������� �������: " << endl;
for(int i=0; i<nums; i++)
	cin >> b[i];

for(int i=0; i<nums; i++) {
c[i*2] = a[i];
c[i*2+1] = b[i];
}
cout << "������� ��������: ";
for(int i=0; i<nums*2; i++)
cout << c[i];
cout << endl;
system("pause");
}

void d2_arr()
{
int arr[40][40];
int row,col,sum, mul;

cout << "���-�� ��������(�� ������ 40): ";
cin >> col;
cout << "���-�� �����(�� ������ 40): ";
cin >> row;
cout << "������� �������� (������, �������): " << endl;
for(int i=0; i<row; i++) {
	cout << endl;
for(int j=0; j<col; j++) {
	printf("arr[%i][%i] = ",i+1,j+1);
cin >> arr[i][j];
}
}
cout << endl;
for(int i=0; i<row; i++) {
	cout << endl;
for(int j=0; j<col; j++) {
	cout << arr[i][j] << "\t";
}
}
cout << endl;
for(int i=0; i<row; i++) {
	sum = 0;
cout << "����� ��������� ������ #" << i+1 << " = ";
for(int j=0; j<col; j++) {
	sum += arr[i][j];
}
cout << sum << endl;
}
cout << endl;

for(int j=0; j<col; j++) {
	mul = 1;
cout << "������������ ��������� ������� #" << j+1 << " = ";
for(int i=0; i<row; i++) {
	mul *= arr[i][j];
}
cout << mul << endl;
}
cout << endl;
system("pause");
}

void main()
{
setlocale(LC_ALL, "RUS");
d1_arr();
}