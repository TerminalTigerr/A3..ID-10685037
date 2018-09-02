#include <iostream>
using namespace std;
int main()
 {
 	int score;
 	cout<<"student score: ";
 	cin>> score;
 	if(score >= 90)
 	{
 		cout<< "score: "<<score<<" Grade A";
}
    else if(score >= 80)
    {
    	cout<< "score: "<<score<<" Grade B";
	}
 	else if(score >= 70)
    {
    	cout<< "score: "<<score<<" Grade C";
	}
 	else if(score >= 60)
    {
    	cout<< "score: "<<score<<" Grade D";
	}
 	else if(score >= 50)
    {
    	cout<< "score: "<<score<<" Grade E";
	}
 	else if(score >= 40)
    {
    	cout<< "score: "<<score<<" Grade F";
	}
	return 0;
}
