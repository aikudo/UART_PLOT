#ifndef CURVEDATA_H
#define CURVEDATA_H
class CurveData
{
    public:
    double *ydata;
    CurveData()
    {
        double data[20000] ={0};
        ydata=data;
    }
};
#endif // CURVEDATA_H
