#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "editor-support/dragonBones/CCDragonBonesHeaders.h"

class HelloWorld : public cocos2d::Scene
{
public:
    virtual bool init() override;

    static cocos2d::Scene* scene();

    // a selector callback
    void menuCloseCallback(Ref* sender);

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

    dragonBones::CCArmatureDisplay* _armatureDisplay;
    dragonBones::CCFactory _factory;
};

#endif // __HELLOWORLD_SCENE_H__
