#include "tinyxml2.h"
#include <iostream>

using namespace std;
using namespace tinyxml2;

int main()
{
    XMLDocument doc;
    if(doc.LoadFile("data.xml") != 0)
    {
        cout << "load err!" << endl;
        return -1; 
    }

    XMLElement *Workbook = doc.FirstChildElement("Workbook");
    XMLElement *Worksheet = Workbook->FirstChildElement("Worksheet");
    
    return 0;
}