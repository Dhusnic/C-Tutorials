 #include<iostream>
 using std::string;
 using std::endl;
 using std::cout;

//abstract class(abstraction)
class absstu
{
    //its a abstract class because of virtual and =0
   virtual void ask()=0;
   //its a abstract class because of virtual and =0
};
//abstrac class(abstraction)
//class student using abstraction class
class students:absstu
{
//private is only used for inside class(encapsuled property)
/*private:
    string Name;
    string Company;
    int Age;*/
protected:
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
        cout<<Age;
    }
    //geter for age
//public is used to use components outside the class

    void introduce()
    {
        cout<<"name - "<< Name << endl;
        cout<<"company - "<< Company << endl;
        cout<<"age - "<< Age <<endl;
        printf("--------------------------------------------------------- \n");
    }
    void ask()
    {
        if(Age>=30)
        {
            cout<<"ok \n";
            printf("--------------------------------------------------------------------------------------------\n");
        }
        if(Age<30)
        {
            cout<<"no \n";
            printf("--------------------------------------------------------------------------------------------\n");

        }
    }
    void work()
    {
        cout<<Name<<"is checking email, task , performing tasks...\n";
        printf("--------------------------------------------------------- \n");

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

//inheriting class
class dev:public students
{
    public:
        string Favlan;
        dev(string name ,string company , int age , string favlan)
         :students(name,company,age)
        {
          Favlan=favlan;   
        }
        void bug()
        {
            //diffrence between private and protected things
            //cout<<getname()<<" fix bug using "<<favlan<< endl;        
            cout<<Name<<" fix bug using "<<Favlan<< endl;
            printf("--------------------------------------------------------- \n");
        }
        virtual/*virtual[polymorhism]*/ void work()
        {
            cout<<Name<<"codeing"<<Favlan<<endl;
            printf("--------------------------------------------------------- \n");

        }
};
//inheriting class
//inheriting class2
class teacher:public students{
public:
    string Subject;
    void prepare(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<< endl;
        printf("--------------------------------------------------------- \n");
    }
    teacher(string name,string company,int age,string subject)
     :students(name,company,age)
    {
        Subject=subject;
    }
};
int main()
 {
    //comman use of polymorhism is when a 
    //parent class reference is used to refer to a chid class object
   students student1 = students("dhusnic " , "just_believe" , 18);
   students student2 = students("infant ","youtube",20);
   dev d=dev("jb ","jbe",25,"python");
   teacher t=teacher("mam ","kec",36,"english");
   printf("=========================================================\n");
   //student1.setage(18);
   //std::cout << student1.getname() << "" << "  is  " << student1.getage() << "  years old  \n";
   //printf("======================================================================= \n");
   student2.introduce();
   student1.introduce();
   d.introduce();
   d.bug();
   student1.ask();
   student2.ask();
   d.setage(35);
   d.ask();
   t.prepare();
   d.work();
   t.work();
   //pointer
   /*students*e1 = &d;
   students*e2=&t;

   e1->work();
   e2->work();*/

   printf("================================================================================");

   students*e1 = &d;
   students*e2=&t;

   e1->work();
   e2->work();

   



   
   

 }
    
// maked constructer
  
