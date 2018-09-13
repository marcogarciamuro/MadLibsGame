//Author:Marco Garcia

 #include <iostream>
 #include <string>
 using namespace std;

 int main()
{
        
 std::string FirstName1;
 cout<<"Please enter a first name" <<std::endl;
 cin>>FirstName1;

 std::string LastName1;
 cout<<"Please enter a last name" <<std::endl;
 cin>>LastName1;

 std::string Adjective;
 cout<<"Please enter an Adjective" <<std::endl;
 cin>>Adjective;

 int Number1;
 cout<<"Please enter a whole number" <<std::endl;
 cin>>Number1;

 std::string FirstName2;
 cout<<"Please enter a first name" <<std::endl;
 cin>>FirstName2;
 
 std::string LastName2;
 cout<<"Please enter a last name" <<std::endl;
 cin>>LastName2;

 std::string Adjective2;
 cout<<"Please enter an adjective" <<std::endl;
 cin>>Adjective2;

 int Number2;
 cout<<"Please enter a number" <<std::endl;
 cin>>Number2;

 std::string Location;
 cout<<"Please enter a location" <<std::endl;
 cin>>Location;
 
 cout<<"Here is your completed MadLib " <<std::endl;
 cout<<FirstName1<<" ";
 cout<<LastName1;
 cout<<" lives in a very ";
 cout<<Adjective;
 cout<<" house with ";
 cout<<Number1;
 cout<<" wallabies. Her husband ";
 cout<<FirstName2<<" ";
 cout<<LastName2;
 cout<<" refuses to let her see his " <<std::endl;
 cout<<Adjective2;
 cout<<" lifestyle. So tonight he will drive ";
 cout<<Number2;
 cout<<" hours to ";
 cout<<Location;
 cout<<" and look for happiness.";
}

