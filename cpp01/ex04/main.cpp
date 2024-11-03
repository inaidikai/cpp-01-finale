#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{
   char arr[100];
   std::cout<<"enter yo na,e n age" << std::endl;
   std::cin.getline(arr, 100);

   std::ofstream myfile("zxc.txt", std::ios::app);
   // myfile.open("zxc.txt");
   myfile<<arr;
   myfile.close();
   std::cout<<"FIle write operation performed successfull"<<std::endl;
  
   std::ifstream hah("zxc.txt");
   hah.getline(arr, 100);
   std::cout<<"array content: "<<arr;
   std::cout << " file read" <<std::endl;
    return 0;
}