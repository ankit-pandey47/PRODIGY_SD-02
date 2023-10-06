#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int random_number,guess=0,count=1;;
    cout<<"\t------------------------------------------------------------------------\n";
    cout << "\n\t\tWelcome to the Number Guessing Game!\n\n";
    cout << "\t\tI'm thinking of a number between 1 and 100. Can you guess it"<<endl;
    srand(time(0));
    random_number=(rand()%100)+1;

    while(guess!=random_number){
        cout<<"\t\tGuess the number : ";
        cin>>guess;

        if(guess>random_number){
            cout<<"\t\tToo high! Try Guessing lower "<<endl;
            count++;
        }
        else if(guess<random_number){
            cout<<"\t\tToo low! Try Guessing higher "<<endl;
            count++;

        }
    }

    cout<<" \t\tCongrats!,You have gussed the correct number in "<<count<<" attempts";
}