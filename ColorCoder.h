#include<iostream>
#include "main.h"

namespace TelCoColorCoder
{  
ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
    
    void Reference_Manual()
    {
    std::cout<<"Pair_Number     --      Color_Pair_Names"<<std::endl;
    
    for (int Pair_Number=1, Pair_Number<=25, Pair_Number++)
    {
    TelCoColorCoder::ColorPair colorpair = TelCoColorCoder::GetColorFromPairNumber(Pair_Number);
    std::cout<<Pair_Number<<"       --      "<<colorpair.ToString()<<std::endl;
    }
    }
}
