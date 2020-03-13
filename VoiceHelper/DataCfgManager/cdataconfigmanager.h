#ifndef CDATACONFIGMANAGER_H
#define CDATACONFIGMANAGER_H
#include "dataconfigdef.h"
#include <vector>
using namespace std;
class CDataConfigManager
{
public:
    static CDataConfigManager *getInstance();

    vector<ST_SQL_EXAMPLE> getSqlExampVec();
    vector<ST_VIDEO_Tutorial> getVideoTutorial();
    bool loadVideoTutorialConfig();
private:
    CDataConfigManager();
    //解析XML文件
    bool parse( const char *filename );
    bool loadInputInfo(const char *filename);


private:
    vector<ST_SQL_EXAMPLE> m_vecSqlExamp;
    vector<ST_VIDEO_Tutorial> m_vecVideoInfo;

    ST_INPUT_INFOS m_stInputInfos;
    static CDataConfigManager *m_pInstance;
    QString m_strDir;
};

#endif // CDATACONFIGMANAGER_H
