/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <cmath>

class MySin{

	public:
		MySin(){
			mX=10;
		}
		
		MySin(double x){
			mX=x;
		}
		
		MySin(const MySin &obj){
			mX=obj.mX;
		}
		
		~MySin(){
			mX=0;
		}
		
		double value(){
			double sum=0;
			cout<<mX<<endl;
			for(int i=0; i<10; i++){

				double silnia = 1;
				for(int k=1; k<=(2*i+1); k++){

					silnia *= k;
					
				}
				
				sum=sum + (pow(-1,i) * pow(mX,2*i+1) / silnia);
				
				cout<<sum<<endl;
			}
			cout<<sum<<endl;
			cout<<"-------------"<<endl;
			return sum;
		}

		void setX(double x){
			mX=x;
		}
		double getX(){
			return mX;
		}

		
	private:
		double mX;

};

int main(){
	double a = M_PI;
	MySin mySin(a);
	mySin.value();

}