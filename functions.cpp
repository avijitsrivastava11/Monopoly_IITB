#include<simplecpp>

void check_click(int a, int b)
{
    bool checkinvest, checkroll, checkinstr;

    /*int clickpos=getClick();
    int a=clickpos/65536;
    int b=clickpos%65536;*/

    if(a>450 && a<550 && b>290 && b<330)
    checkinvest=true;
    else if(a>750 && a<850 && b>290 && b<330)
    checkroll=true;
    else if(a>550 && a<750 && b>355 && b<395)
    checkinstr=true;

}
