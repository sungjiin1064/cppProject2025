#include "DataHandler.h"

int DataHandler::LoadItems(const string& filename, Item items[])
{
    ifstream file(filename);

    if (!file.is_open()) // 파일이 열리지 않았다면
    {
        cerr << "파일을 열지 못했습니다." << filename << endl;
        return 0;
    }

    int itemCount = 0;
    string line;

    while (getline(file, line))
    {

    }

}

