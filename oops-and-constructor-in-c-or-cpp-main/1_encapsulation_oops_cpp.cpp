 #include<iostream>
 using std::string;
 using std::endl;
 using std::cout;

  
class students
{
//private is only used for inside class(encapsuled property)
private:
    string Name;
    string Company;
    int Age;
//private is only used for inside class(encapsuled property)
 //public is used to use components outside the class
public:
    //seters for name
    void setname(string name){
        Name = name;
    }
    //seters for name
    //geters for name
    string getname(){
        return Name;
    }
    //geters for name
    //setrs for company
    void setcompany(string company){
        Company = company;
    }
    //setrs for company
    //geter for company
    string getcompany(){
        return Company;
    }
    //geter for company
    //seter for age
    void setage(int age){
         Age = age;
    }
    //seter for age
    //geter for age
    int getage(){
        return Age;
    }
    //geter for age
//public is used to use components outside the class

    void introduce()
    {
        cout<<"name - "<< Name << endl;
        cout<<"company - "<< Company << endl;
        cout<<"age - "<< Age <<endl;
    }
    //maded constructer
    students(string name ,string company , int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    //maded constructer
    
};
int main()
 {
   int number;
   students student1 = students("dhusnic" , "just_believe" , 18);
    
   student1.introduce();
   printf("--------------------------------------------------------- \n");
   students student2 = students("infant","youtube",20);
   student2.introduce();
   printf("=========================================================\n");

   student1.setage(19);
   std::cout << student1.getname() << "is" << student1.getage() << "years old";
 }
    
// maked constructer
  
