#include "DataHandler.h"

int DataHandler::LoadItems(const string& filename, Item items[])
{
    ifstream file(filename);

    if (!file.is_open()) // ������ ������ �ʾҴٸ�
    {
        cerr << "������ ���� ���߽��ϴ�." << filename << endl;
        return 0;
    }

    int itemCount = 0;
    string line;

    while (getline(file, line))
    {

    }

}

