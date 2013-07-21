#include "Intro.h"
//#include "SimpleAudioEngine.h"

USING_NS_CC;
//using namespace CocosDenshion;

CCScene* Intro::scene()
{

    CCScene *scene = CCScene::create();
    Intro *layer = Intro::create();
    scene->addChild(layer);
    return scene;
}


bool Intro::init()
{
    if ( !CCLayer::init() )
    {
        return false;
    }

    CCLog("Intro::scene");
    
    CCMenuItemImage *pMenuItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(Intro::menuCloseCallback) );
    CCMenuItemImage *pMenuItem1 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(Intro::menuCloseCallback) );
    CCMenuItemImage *pMenuItem2 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(Intro::menuCloseCallback) );
    CCMenuItemImage *pMenuItem3 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(Intro::menuCloseCallback) );
    
    pMenuItem   ->setPosition(ccp(100,400));
    pMenuItem1  ->setPosition(ccp(100,300));
    pMenuItem2  ->setPosition(ccp(100,200));
    pMenuItem3  ->setPosition(ccp(100,100));
    
    CCMenu* pMenu = CCMenu::create(pMenuItem, pMenuItem1, pMenuItem2, pMenuItem3, NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);

    CCSize size = CCDirector::sharedDirector()->getWinSize();
//    CCLabelTTF* pLabel = CCLabelTTF::create("Hello World", "Thonburi", 34);
//    pLabel->setPosition( ccp(size.width / 2, size.height - 20) );
//    this->addChild(pLabel, 1);

    CCSprite* pSprite = CCSprite::create("Splash.png");
    pSprite->setPosition( ccp(size.width/2, size.height/2) );
    this->addChild(pSprite, 0);
    
    return true;
}

void Intro::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
