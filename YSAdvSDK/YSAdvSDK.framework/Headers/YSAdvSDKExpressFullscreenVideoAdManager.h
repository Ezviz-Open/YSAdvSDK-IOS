//
//  YSAdvSDKExpressFullscreenVideoAdManager.h
//  YSAdvSDKDemo
//
//  Created by yanchao on 2025/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class YSAdvSDKExpressFullscreenVideoAdManager;

@protocol YSAdvSDKExpressFullscreenVideoAdDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)ysExpressFullscreenVideoAdLoadSuccess;

/**
 广告加载失败
 @param errorCode 错误码
 @param errorMessage 错误信息
 */
- (void)ysExpressFullscreenVideoAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;

/**
 广告渲染成功
 */
- (void)ysExpressFullscreenVideoAdRenderSuccess;

/**
 广告渲染失败
 */
- (void)ysExpressFullscreenVideoAdRenderFail;


/**
 广告即将展示
 */
- (void)ysExpressFullscreenVideoAdWillVisible;

/**
 广告被点击
 */
- (void)ysExpressFullscreenVideoAdDidClicked;


/**
 广告跳过
 */
- (void)ysExpressFullscreenVideoAdDidSkip;

/**
 广告即将关闭回调
 */
- (void)ysExpressFullscreenVideoAdWillClose;

/**
 广告点击了关闭
 */
- (void)ysExpressFullscreenVideoAdDidClosed;

/**
 广告关闭了其他控制器
 */
- (void)ysExpressFullscreenVideoAdDidCloseOtherController;

/**
 广告点击反馈不喜欢
 */
- (void)ysExpressFullscreenVideoAdDidDislikeClick;
@end

@interface YSAdvSDKExpressFullscreenVideoAdManager : NSObject<YSAdvSDKExpressFullscreenVideoAdDelegate>
/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSAdvSDKExpressFullscreenVideoAdDelegate> delegate;

/**
 *  返回的竞价价
 */
- (double)salePrice;

#pragma mark -初始化插屏广告
/**
 初始化插屏广告
 @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark -加载插屏广告
/**
 加载插屏广告
 */
- (void)loadExpressFullscreenVideoAd;

#pragma mark -展示插屏广告
/**
 展示插屏广告
 @param rootViewController  展示插屏的控制器
 */
- (void)showExpressFullscreenVideoAd:(UIViewController *)rootViewController;
@end

NS_ASSUME_NONNULL_END
