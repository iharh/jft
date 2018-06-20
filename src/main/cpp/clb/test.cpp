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

    // artificial memory leak
    //int *pI = new int;
    //*pI = 7;

    fta.getLabels();

    fta.getNWords();
    fta.getDim();
    fta.getContextWindowSize();
    fta.getEpoch();
    fta.getNSampledNegatives();
    fta.getWordNgrams();
    fta.getLossName();
    fta.getModelName();
    fta.getBucket();
    fta.getLabelPrefix();

    /*
    HIGH_EFFORT(-5.0),
    SOME_EFFORT(-3.0),
    NEUTRAL(0.0),
    SOME_EASE(3.0),
    HIGH_EASE(5.0);
    */
    int32_t effortLevelValuesLen = 5;
    const std::string text("I like cellphone very much");

    fta.predictProba(text, effortLevelValuesLen);

    fta.unloadModel();

    std::wcout << L"done." << std::endl;

    return 0;
}
