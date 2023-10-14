/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y)
    {
    //empty
    }
};

class Circle
{
private:
    int rad;
    Point center;
public:			//center(x,y), rad(r)
    Circle(int x, int y, int r) : center(x,y), rad(r)
    {
    }
};

class Ring
{
private:
    Circle inCircle;
    Circle outCircle;
public:
    Ring(int inX, int inY, int inR, int outX, int outY, int outR) : inCircle(inX, inY, inR) , outCircle(outX, outY, outR)
    {   

    
    }
};

class COMP_POS {
    public:
  enum {
    CLERK,
    SENIOR,
    ASSIST,
    MANAGER
  };  
};

class NameCard{
  private:
  char* name;
  char* company_name;
  char* phone_number;
  int   class_authority;
  public:
  NameCard(const char* name, const char* company_name, const char* phone_number, int position) 
  {
      int len = strlen(name) + 1;
      this->name = new char[len];
      strcpy(this->name, name);
      
      len = strlen(company_name) +1;
      this->company_name = new char[len];
      strcpy(this->company_name, company_name);
      
      len = strlen(phone_number) +1;
      this->phone_number = new char[len];
      strcpy(this->phone_number, phone_number);
      
      class_authority = position;
  }
  void ShowNameCardInfo()
  {
      cout << "이름: "<< name <<endl;
      cout << "회사: "<< company_name <<endl;
      cout << "전화번호: "<< phone_number <<endl;
      cout << "직급: "<< class_authority <<endl;
      
  }
};


int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    
    manClerk.ShowNameCardInfo();
    return 0;
}
