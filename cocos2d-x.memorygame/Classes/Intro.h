#ifndef __INTRO_H__
#define __INTRO_H__

#include "cocos2d.h"

class Intro : public cocos2d::CCLayer
{
public:

    virtual bool init();
    static cocos2d::CCScene* scene();
    void menuCloseCallback(CCObject* pSender);
    CREATE_FUNC(Intro);
};

#endif
