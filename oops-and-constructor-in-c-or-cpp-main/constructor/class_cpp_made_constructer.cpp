 #include<iostream>
 using std::string;
 using std::endl;
 using std::cout;

 //default constructer
class students
{
public:
    string Name;
    string Company;
    int Age;
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
}
    
// maked constructer
