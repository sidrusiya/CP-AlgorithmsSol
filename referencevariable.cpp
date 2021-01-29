 #include<iostream>
 using namespace std;
 int main()
 {
    void func(char &);
    int x=5;
    int &y=x;
    y++;
    cout<<x;
    char* ptr;
    cout<<sizeof(ptr);
    char s[]="ram";
    char* p=s;
    func(*s);
    cout<<s<<p[0];
 }
 void func(char &c)
 {
     c++;
     cout<<endl<<"hi!sid";
 }
