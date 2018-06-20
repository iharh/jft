#include <iostream>

//#include "fasttext.h"
#include "../fasttext_wrapper.h"

int
main(void)
{
    std::wcout << L"start test..." << std::endl;

    FastTextWrapper::FastTextApi fta;
    fta.loadModel(std::string("m.mod"));

    // fasttext::FastText ft;
    // ft.loadModel(std::string("m.mod"));

    int *pI = new int;
    *pI = 7;

    std::wcout << L"done: " << *pI << std::endl;

    return 0;
}
