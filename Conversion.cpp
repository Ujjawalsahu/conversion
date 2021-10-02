#include<iostream>
using namespace std;


int binarytoDecimal(int n); //
int octaltoDecimal(int n);  //
int decimaltoBinary(int n);  //
int decimaltoOctal(int n);  //
int octaltoBinary(int n);  
int binarytoOctal(int n);

void display();

int main(){
	int n;
	char op;
	
    display();
    
        cout<<"Enter an option"<<endl;
	cin>>op;
	
	cout<<"Enter number"<<endl;
	cin>>n;
         
         
	switch (op)
	{
	case 'a':
		{
			cout<<"Binary to Decimal is : "<<binarytoDecimal(n)<<endl;
		}
		break;
	case 'b':
		{
			cout<<"Octal to Decimal is : "<<octaltoDecimal(n)<<endl;
		}
		break;
	case 'c':
		{
			cout<<"Decimal to Binary is : "<<decimaltoBinary(n)<<endl;
		}
		break;
	case 'd':
		{
			cout<<"Octal to Binary is : "<<octaltoBinary(n)<<endl;
		}
		break;
	case 'e':
		{
			cout<<"Decimal to Octal is : "<<decimaltoOctal(n)<<endl;
		}
		break;
	case 'f':
		{
			cout<<"Binary to Octal is : "<<binarytoOctal(n)<<endl;
		}
		break;
	default:
	{
		cout<<"Enter correct option"<<endl;
	}
		break;
	}

	return 0;
}

void display(){
    cout<<"Press a For Binary to Decimal :"<<endl;
    cout<<"Press b For Octal to Decimal :"<<endl;
    cout<<"Press c For Decimal to Binary :"<<endl;
    cout<<"Press d For Octal to Binary :"<<endl;
    cout<<"Press e For Decimal to Octal :"<<endl;
    cout<<"Press f For Binary to Octal :"<<endl;
	
}

int octaltoBinary(int n){
	octaltoDecimal(n);
	decimaltoBinary(n);
}

int binarytoOctal(int n){
	binarytoDecimal(n);
	decimaltoOctal(n);
	
	
}

int binarytoDecimal(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=2;
		n/=10;
	}
	return ans;
}

int octaltoDecimal(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=8;
		n/=10;
	}
	return ans;
}

int decimaltoBinary(int n){
	int x=1;
	int ans=0;
	while(x<=n){
		x*=2;
	}
	x/=2;
	while(x>0)
	{
		int lastDigit=n/x;
		n-=lastDigit*x;
		x/=2;
		ans=ans*10+lastDigit;
	}
	return ans;
}

int decimaltoOctal(int n){
	int x=1;
	int ans=0;
	while(x<=n){
		x*=8;
	}
	x/=8;
	while(x>0)
	{
		int lastDigit=n/x;
		n-=lastDigit*x;
		x/=8;
		ans=ans*10+lastDigit;
	}
	return ans;
}
