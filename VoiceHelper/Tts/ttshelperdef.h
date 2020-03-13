#ifndef TTSHELPERDEF_H
#define TTSHELPERDEF_H
#include <QString>
typedef struct   __ST_VOICE_XML__
 {
    QString strText;
    QString strMp3Name;

    __ST_VOICE_XML__()
    {
        strText="";
        strMp3Name="";
    }
}ST_VOICE_XML;
#endif // TTSHELPERDEF_H
