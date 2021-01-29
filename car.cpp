#include <iostream>
#include <fstream>

using namespace std;

int main(){

  fstream file;
  file.open ("mycar.txt", ios::out | ios::in );

  int x=10;

  char text[200];

  file<<"carname,model,cost"<<endl;

  while(x--)
  {
      cout << "Write the carname,model,cost in the same format:" << endl;
      cin.getline(text, sizeof(text));

      file << text << endl;

  }
  file.close();

  fstream file1;
  file1.open ("mycar1.txt", ios::out | ios::in );

  file.open ("mycar.txt", ios::out | ios::in );

  file>>text;

  cout<<text<<endl;

  file1<<text<<endl;

  while(!file.eof())
  {
      file>>text;
      cout<<text<<endl;
      bool p;
      cout<<"Do you want to edit this"<<endl;
      cin>>p;
      if(p)
      {
         cout << "Write the carname,model,cost in the same format:" << endl;
         cin.getline(text, sizeof(text));
         file1<<text<<endl;
      }
      else
      {
         file1<<text<<endl;
      }
  }

  remove("mycar.txt");
  rename("mycar1.txt","mycar.txt");

  return 0;
}
