#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


string delSpaces(string &str) 
{
   str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
   return str;
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main (int argc, char* argv[]) {
  if (argc < 2) {
    exit(0);
  }
  string filename = argv[1];
  string line;
  ifstream myfile (filename);
  if (myfile.is_open())
  {
    getline(myfile, line);
    line = delSpaces(line);
    string input = line;
    cout << line << endl;
    while ( getline(myfile,line) )
    {
      line = delSpaces(line);
      cout << line << endl;
      int j = 0;
      for (int i = 0; i < line.size(); ++i) {
        if (line[i] == 'X') {
          swap(input[j], input[j+1]);
          ++j;
        }
        ++j;
      }
    }
    cout << input << endl;
    myfile.close();
  }

  else cout << "Unable to open file"; 
}