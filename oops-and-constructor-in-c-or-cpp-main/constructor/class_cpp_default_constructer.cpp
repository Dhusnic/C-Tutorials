 #include<iostream>
 using std::string;
 using std::endl;
 using std::cout;
class students
{
public:
    string name;
    string company;
    int age;
    void introduce()
    {
        cout<<"name - "<< name << endl;
        cout<<"company - "<< company << endl;
        cout<<"age - "<< age <<endl;
    }
    
};
int main()
 {
   int number;
   students student1;
   student1.name="dhusnic";
   student1.company="yt-codebeauty";
   student1.age=25;
   student1.introduce();
   printf("--------------------------------------------------------- \n");
   students student2;
   student2.name="infant";
   student2.company="amazon";
   student2.age= 35 ;
   student2.introduce();
   printf("=========================================================\n");
 }
