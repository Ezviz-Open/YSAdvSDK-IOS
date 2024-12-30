//
//  YSAdvSDKSplashDelegate.h
//  C_YSAdvSDK
//
//  Created by yanchao on 2022/11/15.
//

#import <Foundation/Foundation.h>
#import "YSAdvSDKInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol YSAdvSDKSplashDelegate <NSObject>

///SDK调用测试 暂时不用
- (void)AdvSDKTest;

/// 广告数据请求成功后调用
- (void)AdvSDKLoadSuccess:(YSAdvSDKInfo *)advSDKInfo;

/// 广告数据请求失败后调用
- (void)AdvSDKLoadFail:(YSAdvSDKInfo *)advSDKInfo;

/// 广告曝光成功
- (void)AdvSDKExposured:(YSAdvSDKInfo *)advSDKInfo;

/// 广告点击回调
- (void)AdvSDKDidClicked:(YSAdvSDKInfo *)advSDKInfo;

/// 广告点击跳过
- (void)AdvSDKDidSkip:(YSAdvSDKInfo *)advSDKInfo;

///倒计时结束
- (void)AdvSDKCountDownFinish:(YSAdvSDKInfo *)advSDKInfo;

/// 广告关闭的回调
- (void)AdvSDKDidClose:(YSAdvSDKInfo *)advSDKInfo;

///广告关闭全屏广告页
- (void)AdvSDKDidDismissFullScreen:(YSAdvSDKInfo *)advSDKInfo;



@optional
///GDT
///广点通展示成功
- (void)AdvSDKGDTSuccessPresentScreen:(YSAdvSDKInfo *)advSDKInfo;
///广点通倒计时时间
- (void)AdvSDKGDTCallBackLifeTime:(NSUInteger)time;
///广点通倒计时
- (void)AdvSDKGDTLifeTime:(NSUInteger)time andAdvSDKInfo:(YSAdvSDKInfo *)advSDKInfo;

@end

NS_ASSUME_NONNULL_END
