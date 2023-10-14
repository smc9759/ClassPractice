/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

class BANK_MENU {
    public:
    enum{
        MAKE_ACC =1,
        PUT,
        TAKE,
        INFO,
        OFF
    };
};

class BankAccount{
  private: 
  int AccNo;
  char* ClientName;
  int   money;
  public:
  BankAccount() : AccNo(0), money(0)
  {
      
  }
  BankAccount(int AccNo, const char* ClientName, int money)
  {
      this->AccNo = AccNo;
      
      int len = strlen(ClientName)+1;
      this->ClientName = new char[len];
      strcpy(this->ClientName, ClientName);
      
      this->money = money;
  }
  void ShowMenu(){
      int input =0;
      
      cout << "-----Menu-----"<<endl;
      cout<< "1. 계좌개설" << endl;
      cout<< "2. 입 금" << endl;
      cout<< "3. 출 금" << endl;
      cout<< "4. 계좌정보 전체 출력" << endl;
      cout<< "5. 프로그램 종료" << endl;
      cout<< "선택: ";
      
      cin >> input;
      
      SelectMenu(input);
  }
  void SelectMenu(int input)
  {
     switch (input){
         case BANK_MENU::MAKE_ACC:
         {
            Make_Acc();   
            break;
         }
         case BANK_MENU::INFO:
         {  PrintAccInfo();
            break;
         }
     } 
  }
  void Make_Acc(){
      int id, money;
      char name[NAME_LEN];
      cout << "[계좌개설]"<<endl;
      cout << "계좌 ID: "; cin >> id;
      
      cout << "이 름: "; cin >> name;
      
      
      cout << "입금액: "; cin >> money;
      cout<<endl;
      
      BankAccount(id, name, money);
      
      ShowMenu();
  }
  void PrintAccInfo(){
      cout << "계좌ID: "<< AccNo <<endl;
      cout << "이 름: "<< ClientName<< endl;
      cout << "잔 액: "<< money<<endl;
      
      ShowMenu();
  }
};

int main()
{
    BankAccount* Account[3];
    
    Account[0]->ShowMenu();
    Account[0]->PrintAccInfo();
    return 0;
}
