#include<iostream>
#include<string>
using namespace std;

void questions();

int main(){
  questions();
  return 0;
}

void questions(){
  string Name_instructor, Your_name, food,_adjective, co_lor, animal;
  int number;
  cout<<"Enter your instructors first or last name"<<endl;
  cin>>Name_instructor;
  cout<<"Enter your name\n";
  cin>>Your_name;
  cout<<"Enter a food: \n";
  cin>>food;
  cout<<"Enter a number between 100-200"<<endl;
  cin>>number;
  cout<<"An adjective"<<endl;
  cin>>_adjective;
  cout<<"Enter your favorite color"<<endl;
  cin>>co_lor;
  cout<<"Enter an animal"<<endl;
  cin>>animal;

  cout<< "\nDear Instructor "<<Name_instructor<<endl;
  cout<<"I am sorry that I am unable to turn in my homework at this time. First,\n";
  cout<<"I ate a rotten "<<food<<", which made me turn "<<co_lor<< " and extremely ill. I \n";
  cout<<"came down with a fever of "<< number<<". Next, my "<<_adjective<<" pet\n";
  cout<<animal<< " must have smelled the remains of the "<< food <<" on my homework,\n";
  cout<<"because he ate it. I am currently rewriting my homework and hope you\n";
  cout<<"will accept it late."<<endl;
  cout<<endl;
  cout<<"Sincerely,\n";
  cout<<Your_name;
}
