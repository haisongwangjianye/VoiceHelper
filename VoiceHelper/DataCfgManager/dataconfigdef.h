#ifndef DATACONFIGDEF_H
#define DATACONFIGDEF_H
#include <QString>
#include <vector>
using namespace std;
typedef struct __ST_SQL_EXAMPLE__
{
    QString strFunName;
    QString strSql;
}ST_SQL_EXAMPLE;

typedef struct __ST_INPUT_INFO__
{
    QString strID;
    QString strInput;
}ST_INPUT_INFO;

typedef struct __ST_INPUT_INFOS__
{
    QString strInpuInfo;
    vector<ST_INPUT_INFO> vecInputInfo;
}ST_INPUT_INFOS;

typedef struct __ST_VIDEO_ITEM__
{
    QString strItemName;
    QString strUrl;
}ST_VIDEO_ITEM;


typedef struct __ST_VIDEO_Tutorial__
{
    QString strItemName;
    vector<ST_VIDEO_ITEM> vecSubItem;
}ST_VIDEO_Tutorial;


#endif // DATACONFIGDEF_H
